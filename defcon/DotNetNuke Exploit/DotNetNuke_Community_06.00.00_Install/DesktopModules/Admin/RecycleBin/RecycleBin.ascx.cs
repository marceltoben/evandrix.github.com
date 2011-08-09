#region Copyright

// 
// DotNetNuke® - http://www.dotnetnuke.com
// Copyright (c) 2002-2011
// by DotNetNuke Corporation
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated 
// documentation files (the "Software"), to deal in the Software without restriction, including without limitation 
// the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and 
// to permit persons to whom the Software is furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all copies or substantial portions 
// of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED 
// TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF 
// CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
// DEALINGS IN THE SOFTWARE.

#endregion

#region Usings

using System;
using System.Collections;
using System.Web.UI.WebControls;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Framework;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Log.EventLog;
using DotNetNuke.UI.Skins.Controls;
using DotNetNuke.UI.Utilities;
using Globals = DotNetNuke.Common.Globals;

#endregion

namespace DotNetNuke.Modules.Admin.RecycleBin
{

	/// <summary>
	/// The RecycleBin PortalModuleBase allows Tabs and Modules to be recovered or
	/// prmanentl deleted
	/// </summary>
	/// <remarks>
	/// </remarks>
	/// <history>
	/// 	[cnurse]	9/15/2004	Updated to reflect design changes for Help, 508 support
	///                       and localisation
	/// </history>
	public partial class RecycleBin : PortalModuleBase
	{

		#region Private Methods

		/// <summary>
		/// Loads deleted tabs and modules into the lists 
		/// </summary>
		/// <remarks>
		/// </remarks>
		/// <history>
		/// 	[VMasanas]	18/08/2004	
		///   [VMasanas]  20/08/2004  Update display information for deleted modules to:
		///               ModuleFriendlyName: ModuleTitle - Tab: TabName
		/// </history>
		private void BindData()
		{
			var objModules = new ModuleController();
			var objTabs = new TabController();
			TabInfo objTab;
			ModuleInfo objModule;
			int intModule;

			lstModules.Items.Clear();
			lstTabs.Items.Clear();

			var currentLocale = LocaleController.Instance.GetCurrentLocale(PortalId);

			var arrDeletedTabs = new ArrayList();
			TabCollection tabsList;
			if (modeButtonList.SelectedValue == "ALL")
			{
				tabsList = objTabs.GetTabsByPortal(PortalId);
			}
			else
			{
				tabsList = objTabs.GetTabsByPortal(PortalId).WithCulture(currentLocale.Code, true);
			}

			foreach (var tab in tabsList.Values)
			{
				if (tab.IsDeleted)
				{
					arrDeletedTabs.Add(tab);
				}
			}

			var arrModules = objModules.GetModules(PortalId);
			for (intModule = 0; intModule <= arrModules.Count - 1; intModule++)
			{
				objModule = (ModuleInfo) arrModules[intModule];
				if (objModule.IsDeleted && (modeButtonList.SelectedValue == "ALL" || objModule.CultureCode == currentLocale.Code))
				{
					if (String.IsNullOrEmpty(objModule.ModuleTitle))
					{
						objModule.ModuleTitle = objModule.DesktopModule.FriendlyName;
					}
					var locale = LocaleController.Instance.GetLocale(objModule.CultureCode);
					if (locale != null)
					{
						objTab = objTabs.GetTabByCulture(objModule.TabID, PortalId, locale);
					}
					else
					{
						objTab = objTabs.GetTab(objModule.TabID, PortalId, false);
					}

					if (objTab == null)
					{
						lstModules.Items.Add(new ListItem(objModule.ModuleTitle, objModule.TabID + "-" + objModule.ModuleID));
					}
					else if (objTab.TabID == objModule.TabID)
					{
						lstModules.Items.Add(new ListItem(objTab.TabName + " - " + objModule.ModuleTitle, objModule.TabID + "-" + objModule.ModuleID));
					}
				}
			}
			lstTabs.DataSource = arrDeletedTabs;
			lstTabs.DataBind();

			cmdRestoreTab.Enabled = (arrDeletedTabs.Count > 0);
			cmdDeleteTab.Enabled = (arrDeletedTabs.Count > 0);

			cmdRestoreModule.Enabled = (lstModules.Items.Count > 0);
			cmdDeleteModule.Enabled = (lstModules.Items.Count > 0);

			cmdEmpty.Enabled = arrDeletedTabs.Count > 0 || lstModules.Items.Count > 0;
		}

		/// <summary>
		/// Deletes a module
		/// </summary>
		/// <param name="intModuleId">ModuleId of the module to be deleted</param>
		/// <remarks>
		/// Adds a log entry for the action to the EvenLog
		/// </remarks>
		/// <history>
		/// 	[VMasanas]	18/08/2004	Created
		/// </history>
		private void DeleteModule(int intModuleId)
		{
			var objEventLog = new EventLogController();

			//delete module
			var objModules = new ModuleController();
			var objModule = objModules.GetModule(intModuleId, Null.NullInteger, false);
			if (objModule != null)
			{
				//hard-delete Tab Module INstance
				objModules.DeleteTabModule(objModule.TabID, objModule.ModuleID, false);
				objEventLog.AddLog(objModule, PortalSettings, UserId, "", EventLogController.EventLogType.MODULE_DELETED);
			}
		}

		/// <summary>
		/// Deletes a tab
		/// </summary>
		/// <param name="objTab">The tab to be deleted</param>
		/// <remarks>
		/// Adds a log entry for the action to the EventLog
		/// </remarks>
		/// <history>
		/// 	[VMasanas]	18/08/2004	Created
		///                 19/09/2004  Remove skin deassignment. BLL takes care of this.
		///                 30/09/2004  Change logic so log is only added when tab is actually deleted
		///                 28/02/2005  Remove modules when deleting pages
		/// </history>
		private void DeleteTab(TabInfo objTab, bool deleteDescendants)
		{
			var objEventLog = new EventLogController();
			var objTabs = new TabController();
			var objModules = new ModuleController();

			//get tab modules before deleting page
			var dicTabModules = objModules.GetTabModules(objTab.TabID);

			//hard delete the tab
			objTabs.DeleteTab(objTab.TabID, objTab.PortalID, deleteDescendants);
			
			//delete modules that do not have other instances
			foreach (var kvp in dicTabModules)
			{
				//check if all modules instances have been deleted
				var objDelModule = objModules.GetModule(kvp.Value.ModuleID, Null.NullInteger, false);
				if (objDelModule == null || objDelModule.TabID == Null.NullInteger)
				{
					objModules.DeleteModule(kvp.Value.ModuleID);
				}
			}
			objEventLog.AddLog(objTab, PortalSettings, UserId, "", EventLogController.EventLogType.TAB_DELETED);
		}

		private bool RestoreTab(TabInfo objTab)
		{
			var success = true;

			if (objTab != null)
			{
				if (!Null.IsNull(objTab.ParentId) && lstTabs.Items.FindByValue(objTab.ParentId.ToString()) != null)
				{
					UI.Skins.Skin.AddModuleMessage(this,
												   string.Format(Localization.GetString("ChildTab.ErrorMessage", LocalResourceFile), objTab.TabName),
												   ModuleMessage.ModuleMessageType.YellowWarning);
					success = false;
				}
				else
				{
					TabController.RestoreTab(objTab, PortalSettings, UserId);
				}
			}
			return success;
		}

		#endregion

		#region Event Handlers

		/// <summary>
		/// Page_Load runs when the control is loaded
		/// </summary>
		/// <param name="e"></param>
		/// <remarks>
		/// </remarks>
		/// <history>
		/// 	[VMasanas]	18/08/2004	Add confirmation for Empty Recycle Bin button
		/// 	[cnurse]	15/09/2004	Localized Confirm text
		/// </history>
		protected override void OnLoad(EventArgs e)
		{
			base.OnLoad(e);

			jQuery.RequestDnnPluginsRegistration();
			PageBase.RegisterStyleSheet(Page, Globals.HostPath + "admin.css");

			cmdDeleteModule.Click += OnModuleDeleteClick;
			cmdDeleteTab.Click += OnTabDeleteClick;
			cmdEmpty.Click += OnEmptyBinClick;
			cmdRestoreModule.Click += OnModuleRestoreClick;
			cmdRestoreTab.Click += OnTabRestoreClick;
			modeButtonList.SelectedIndexChanged += OnModeIndexChanged;

			var resourceFileRoot = TemplateSourceDirectory + "/" + Localization.LocalResourceDirectory + "/" + ID;
			//If this is the first visit to the page
			if ((Page.IsPostBack == false))
			{
				if (PortalSettings.ContentLocalizationEnabled)
				{
					ClientAPI.AddButtonConfirm(cmdRestoreTab, Localization.GetString("RestoreTab", resourceFileRoot));
				}
				divModuleButtons.Visible = IsEditable;
				divTabButtons.Visible = IsEditable;
				cmdEmpty.Visible = IsEditable;
				divMode.Visible = PortalSettings.ContentLocalizationEnabled;

				var mode = "ALL";
				if (!string.IsNullOrEmpty(Request.QueryString["mode"]))
				{
					mode = Request.QueryString["mode"];
				}
				modeButtonList.SelectedValue = mode.ToUpperInvariant() == "SINGLE" ? "SINGLE" : "ALL";

				BindData();
			}
		}

		/// <summary>
		/// Deletes selected modules in the listbox
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		/// <remarks>
		/// </remarks>
		/// <history>
		/// 	[VMasanas]	18/08/2004	Added support for multiselect listbox
		/// </history>
		protected void OnModuleDeleteClick(Object sender, EventArgs e)
		{
			var objEventLog = new EventLogController();
			var objModules = new ModuleController();

			foreach (ListItem item in lstModules.Items)
			{
				if (item.Selected)
				{
					var values = item.Value.Split('-');
					var tabId = int.Parse(values[0]);
					var moduleId = int.Parse(values[1]);

					//delete module
					var objModule = objModules.GetModule(moduleId, tabId, false);
					if (objModule != null)
					{
						//hard-delete Tab Module Instance
						objModules.DeleteTabModule(tabId, moduleId, false);
						objEventLog.AddLog(objModule, PortalSettings, UserId, "", EventLogController.EventLogType.MODULE_DELETED);
					}
				}
			}
			BindData();
		}

		/// <summary>
		///   Deletes selected tabs in the listbox
		/// </summary>
		/// <param name = "sender"></param>
		/// <param name = "e"></param>
		/// <remarks>
		///   Parent tabs will not be deleted. To delete a parent tab all child tabs need to be deleted before.
		///   Reloads data to refresh deleted modules and tabs listboxes
		/// </remarks>
		/// <history>
		///   [VMasanas]	18/08/2004	Added support for multiselect listbox
		/// </history>
		protected void OnTabDeleteClick(Object sender, EventArgs e)
		{
			foreach (ListItem item in lstTabs.Items)
			{
				if (item.Selected)
				{
					var intTabId = int.Parse(item.Value);
					var objTabs = new TabController();
					var objTab = objTabs.GetTab(intTabId, PortalId, false);
					if (objTab != null)
					{
						if (objTab.HasChildren)
						{
							UI.Skins.Skin.AddModuleMessage(this,
														   string.Format(Localization.GetString("ParentTab.ErrorMessage", LocalResourceFile), objTab.TabName),
														   ModuleMessage.ModuleMessageType.YellowWarning);
						}
						else
						{
							DeleteTab(objTab, false);
						}
					}
				}
			}
			BindData();
		}

		/// <summary>
		/// Permanently removes all deleted tabs and modules
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		/// <remarks>
		/// Parent tabs will not be deleted. To delete a parent tab all child tabs need to be deleted before.
		/// </remarks>
		/// <history>
		/// 	[VMasanas]	18/08/2004	Created
		/// </history>
		protected void OnEmptyBinClick(Object sender, EventArgs e)
		{
			var objEventLog = new EventLogController();

			foreach (ListItem item in lstModules.Items)
			{
				var objModules = new ModuleController();
				var values = item.Value.Split('-');
				var tabId = int.Parse(values[0]);
				var moduleId = int.Parse(values[1]);

				//delete module
				var objModule = objModules.GetModule(moduleId, tabId, false);
				if (objModule != null)
				{
					//hard-delete Tab Module Instance
					objModules.DeleteTabModule(tabId, moduleId, false);
					objEventLog.AddLog(objModule, PortalSettings, UserId, "", EventLogController.EventLogType.MODULE_DELETED);
				}
			}
			foreach (ListItem item in lstTabs.Items)
			{
				var intTabId = int.Parse(item.Value);
				var objTabs = new TabController();
				var objTab = objTabs.GetTab(intTabId, PortalId, false);
				if (objTab != null)
				{
					DeleteTab(objTab, true);
				}
			}
			BindData();
		}

		/// <summary>
		///   Restores selected modules in the listbox
		/// </summary>
		/// <param name = "sender"></param>
		/// <param name = "e"></param>
		/// <remarks>
		///   Adds a log entry for each restored module to the EventLog
		/// </remarks>
		/// <history>
		///   [VMasanas]	18/08/2004	Added support for multiselect listbox
		/// </history>
		protected void OnModuleRestoreClick(Object sender, EventArgs e)
		{
			var objEventLog = new EventLogController();
			var objModules = new ModuleController();

			foreach (ListItem item in lstModules.Items)
			{
				if (item.Selected)
				{
					var values = item.Value.Split('-');
					var tabId = int.Parse(values[0]);
					var moduleId = int.Parse(values[1]);

					// restore module
					var objModule = objModules.GetModule(moduleId, tabId, false);
					if ((objModule != null))
					{
						objModules.RestoreModule(objModule);
						objEventLog.AddLog(objModule, PortalSettings, UserId, "", EventLogController.EventLogType.MODULE_RESTORED);
					}
				}
			}
			BindData();
		}

		/// <summary>
		///   Restores selected tabs in the listbox
		/// </summary>
		/// <param name = "sender"></param>
		/// <param name = "e"></param>
		/// <remarks>
		///   Adds a log entry for each restored tab to the EventLog
		///   Redirects to same page after restoring so the menu can be refreshed with restored tabs.
		///   This will not restore deleted modules for selected tabs, only the tabs are restored.
		/// </remarks>
		/// <history>
		///   [VMasanas]	18/08/2004	Added support for multiselect listbox
		///   30/09/2004  Child tabs cannot be restored until their parent is restored first.
		///   Change logic so log is only added when tab is actually restored
		/// </history>
		protected void OnTabRestoreClick(Object sender, EventArgs e)
		{
			var errors = false;

			foreach (ListItem item in lstTabs.Items)
			{
				if (item.Selected)
				{
					var objTabs = new TabController();
					var objTab = objTabs.GetTab(int.Parse(item.Value), PortalId, false);

					if (!RestoreTab(objTab))
					{
						errors = true;
					}
				}
			}
			if (!errors)
			{
				Response.Redirect(Globals.NavigateURL(TabId, "", "mode=" + modeButtonList.SelectedValue.ToLowerInvariant()));
			}
			else
			{
				BindData();
			}
		}

		protected void OnModeIndexChanged(object sender, EventArgs e)
		{
			BindData();
		}
		
		#endregion
	}
}