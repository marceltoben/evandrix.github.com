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
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;

using DotNetNuke.Common;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Content.Taxonomy;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Modules.Definitions;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Entities.Users;
using DotNetNuke.Framework;
using DotNetNuke.Instrumentation;
using DotNetNuke.Security.Permissions;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Log.EventLog;
using DotNetNuke.UI.ControlPanels;
using DotNetNuke.Web.UI.WebControls;
using DotNetNuke.Entities.Content.Common;
using DotNetNuke.Web.UI.WebControls.Extensions;

#endregion

namespace DotNetNuke.UI.ControlPanel
{
	using System.Web.UI.WebControls;

	public partial class AddModule : UserControl, IDnnRibbonBarTool
	{
		#region Event Handlers

		protected void AddNewOrExisting_OnClick(Object sender, EventArgs e)
		{
			LoadAllLists();
		}

		protected void PaneLstSelectedIndexChanged(Object sender, EventArgs e)
		{
			LoadPositionList();
			LoadPaneModulesList();
		}

		protected void PageLstSelectedIndexChanged(Object sender, EventArgs e)
		{
			LoadModuleList();
		}

		protected void PositionLstSelectedIndexChanged(Object sender, EventArgs e)
		{
			PaneModulesLst.Enabled = PositionLst.SelectedValue == "ABOVE" || PositionLst.SelectedValue == "BELOW";
		}

		protected override void OnLoad(EventArgs e)
		{
			base.OnLoad(e);
			cmdAddModule.Click += CmdAddModuleClick;
			AddNewModule.CheckedChanged += AddNewOrExisting_OnClick;
			AddExistingModule.CheckedChanged += AddNewOrExisting_OnClick;
			CategoryList.SelectedIndexChanged += CategoryListSelectedIndexChanged;
			PageLst.SelectedIndexChanged += PageLstSelectedIndexChanged;
			PaneLst.SelectedIndexChanged += PaneLstSelectedIndexChanged;
			PositionLst.SelectedIndexChanged += PositionLstSelectedIndexChanged;

			try
			{
				if ((Visible))
				{
					cmdAddModule.Enabled = Enabled;
					AddExistingModule.Enabled = Enabled;
					AddNewModule.Enabled = Enabled;
					Title.Enabled = Enabled;
					PageLst.Enabled = Enabled;
					ModuleLst.Enabled = Enabled;
					VisibilityLst.Enabled = Enabled;
					PaneLst.Enabled = Enabled;
					PositionLst.Enabled = Enabled;
					PaneModulesLst.Enabled = Enabled;

					UserInfo objUser = UserController.GetCurrentUserInfo();
					if ((objUser != null))
					{
						if (objUser.IsSuperUser)
						{
							var objModules = new ModuleController();
							var objModule = objModules.GetModuleByDefinition(-1, "Extensions");
							if (objModule != null)
							{
								var strURL = Globals.NavigateURL(objModule.TabID, true);
								hlMoreExtensions.NavigateUrl = strURL + "#moreExtensions";
							}
							else
							{
								hlMoreExtensions.Enabled = false;
							}
							hlMoreExtensions.Text = GetString("hlMoreExtensions");
							hlMoreExtensions.Visible = true;
						}
					}
				}

				if ((!IsPostBack && Visible && Enabled))
				{
					LoadAllLists();
				}
			}
			catch (Exception exc)
			{
				Exceptions.ProcessModuleLoadException(this, exc);
			}
		}

		private void CategoryListSelectedIndexChanged(object sender, EventArgs e)
		{
			LoadModuleList();
		}

		protected void CmdAddModuleClick(object sender, EventArgs e)
		{
			if (TabPermissionController.CanAddContentToPage() && CanAddModuleToPage())
			{
				int permissionType;
				try
				{
					permissionType = int.Parse(VisibilityLst.SelectedValue);
				}
				catch (Exception exc)
				{
					DnnLog.Error(exc);

					permissionType = 0;
				}

				int position = -1;
				switch (PositionLst.SelectedValue)
				{
					case "TOP":
						position = 0;
						break;
					case "ABOVE":
						if (!string.IsNullOrEmpty(PaneModulesLst.SelectedValue))
						{
							try
							{
								position = int.Parse(PaneModulesLst.SelectedValue) - 1;
							}
							catch (Exception exc)
							{
								DnnLog.Error(exc);

								position = -1;
							}
						}
						else
						{
							position = 0;
						}
						break;
					case "BELOW":
						if (!string.IsNullOrEmpty(PaneModulesLst.SelectedValue))
						{
							try
							{
								position = int.Parse(PaneModulesLst.SelectedValue) + 1;
							}
							catch (Exception exc)
							{
								DnnLog.Error(exc);

								position = -1;
							}
						}
						else
						{
							position = -1;
						}
						break;
					case "BOTTOM":
						position = -1;
						break;
				}

				int moduleLstID;
				try
				{
					moduleLstID = int.Parse(ModuleLst.SelectedValue);
				}
				catch (Exception exc)
				{
					DnnLog.Error(exc);

					moduleLstID = -1;
				}

				if ((moduleLstID > -1))
				{
					if ((AddExistingModule.Checked))
					{
						int pageID;
						try
						{
							pageID = int.Parse(PageLst.SelectedValue);
						}
						catch (Exception exc)
						{
							DnnLog.Error(exc);

							pageID = -1;
						}

						if ((pageID > -1))
						{
							DoAddExistingModule(moduleLstID, pageID, PaneLst.SelectedValue, position, "", chkCopyModule.Checked);
						}
					}
					else
					{
						DoAddNewModule(Title.Text, moduleLstID, PaneLst.SelectedValue, position, permissionType, "");
					}
				}

				Response.Redirect(Request.RawUrl, true);
			}
		}

		#endregion

		#region Properties

		private bool _enabled = true;

		public override bool Visible
		{
			get
			{
				return base.Visible && TabPermissionController.CanAddContentToPage();
			}
			set
			{
				base.Visible = value;
			}
		}

		public bool Enabled
		{
			get
			{
				return _enabled && CanAddModuleToPage();
			}
			set
			{
				_enabled = value;
			}
		}

		public string ToolName
		{
			get
			{
				return "QuickAddModule";
			}
			set
			{
				throw new NotSupportedException("Set ToolName not supported");
			}
		}

		#endregion

		#region Methods

		private string LocalResourceFile
		{
			get
			{
				return string.Format("{0}/{1}/{2}.ascx.resx", TemplateSourceDirectory, Localization.LocalResourceDirectory, GetType().BaseType.Name);
			}
		}

		private void SetCopyModuleMessage(bool isPortable)
		{
			if ((isPortable))
			{
				chkCopyModule.Text = Localization.GetString("CopyModuleWcontent", LocalResourceFile);
				chkCopyModule.ToolTip = Localization.GetString("CopyModuleWcontent.ToolTip", LocalResourceFile);
			}
			else
			{
				chkCopyModule.Text = Localization.GetString("CopyModuleWOcontent", LocalResourceFile);
				chkCopyModule.ToolTip = Localization.GetString("CopyModuleWOcontent.ToolTip", LocalResourceFile);
			}
		}

		private void LoadAllLists()
		{
			LoadCategoryList();
			LoadPageList();
			LoadModuleList();
			LoadVisibilityList();
			LoadPaneList();
			LoadPositionList();
			LoadPaneModulesList();
		}

		private void LoadCategoryList()
		{
			CategoryListPanel.Visible = !AddExistingModule.Checked;

			ITermController termController = Util.GetTermController();
			CategoryList.DataSource = termController.GetTermsByVocabulary("Module_Categories")
                                            .OrderBy(t => t.Weight)
                                            .Where(t => t.Name != "< None >")
                                            .ToList();
			CategoryList.DataBind();
			CategoryList.Items.Add(new ListItem(Localization.GetString("AllCategories", LocalResourceFile), "All"));
			if(!IsPostBack)
			{
				CategoryList.Select("Common", false);
			}
		}

		private void LoadPageList()
		{
			PageListPanel.Visible = AddExistingModule.Checked;
			TitlePanel.Enabled = !AddExistingModule.Checked;
			chkCopyModule.Visible = AddExistingModule.Checked;

			if ((AddExistingModule.Checked))
			{
				chkCopyModule.Text = Localization.GetString("CopyModuleDefault.Text", LocalResourceFile);
			}


			PageLst.Items.Clear();
			if ((PageListPanel.Visible))
			{
				PageLst.DataValueField = "TabID";
				PageLst.DataTextField = "IndentedTabName";
				PageLst.DataSource = TabController.GetPortalTabs(PortalSettings.Current.PortalId, PortalSettings.Current.ActiveTab.TabID, true, "", true, false, false, false, true);
				PageLst.DataBind();
			}
		}

		private void LoadModuleList()
		{
			
			if ((AddExistingModule.Checked))
			{
				//Get list of modules for the selected tab
				if ((!string.IsNullOrEmpty(PageLst.SelectedValue)))
				{
					var moduleCtrl = new ModuleController();
					ModuleLst.BindTabModulesByTabID(int.Parse(PageLst.SelectedValue));
					if ((ModuleLst.ItemCount > 0))
					{
						chkCopyModule.Visible = true;
						SetCopyModuleMessage(GetIsPortable(moduleCtrl, ModuleLst.SelectedValue, PageLst.SelectedValue));
					}
				}
			}
			else
			{
				ModuleLst.Filter = CategoryList.SelectedValue == "All"
										? (Func<KeyValuePair<string, PortalDesktopModuleInfo>, bool>)(kvp => true)
										 : (Func<KeyValuePair<string, PortalDesktopModuleInfo>, bool>)(kvp => kvp.Value.DesktopModule.Category == CategoryList.SelectedValue);
				ModuleLst.BindAllPortalDesktopModules();
			}

			ModuleLst.Enabled = ModuleLst.ItemCount > 0;
		}

		private static bool GetIsPortable(ModuleController moduleCtrl, string moduleID, string tabID)
		{
			bool isPortable = false;
			int parsedModuleID;
			int parsedTabID;

			bool validModuleID = int.TryParse(moduleID, out parsedModuleID);
			bool validTabID = int.TryParse(tabID, out parsedTabID);

			if ((validModuleID && validTabID))
			{
				ModuleInfo moduleInfo = moduleCtrl.GetModule(parsedModuleID, parsedTabID);
				if (((moduleInfo != null)))
				{
					DesktopModuleInfo moduleDesktopInfo = moduleInfo.DesktopModule;
					if (((moduleDesktopInfo != null)))
					{
						isPortable = moduleDesktopInfo.IsPortable;
					}
				}
			}

			return isPortable;
		}

		private void LoadVisibilityList()
		{
			VisibilityLst.Enabled = !AddExistingModule.Checked;
			if ((VisibilityLst.Enabled))
			{
				var items = new Dictionary<string, string> {{"0", GetString("PermissionView")}, {"1", GetString("PermissionEdit")}};

				VisibilityLst.Items.Clear();
				VisibilityLst.DataValueField = "key";
				VisibilityLst.DataTextField = "value";
				VisibilityLst.DataSource = items;
				VisibilityLst.DataBind();
			}
		}

		private void LoadPaneList()
		{
			PaneLst.Items.Clear();
			PaneLst.DataSource = PortalSettings.Current.ActiveTab.Panes;
			PaneLst.DataBind();
			if ((PortalSettings.Current.ActiveTab.Panes.Contains(Globals.glbDefaultPane)))
			{
				PaneLst.SelectedValue = Globals.glbDefaultPane;
			}
		}

		private void LoadPositionList()
		{
			var items = new Dictionary<string, string>
							{
								{"TOP", GetString("Top")},
								{"ABOVE", GetString("Above")},
								{"BELOW", GetString("Below")},
								{"BOTTOM", GetString("Bottom")}
							};

			PositionLst.Items.Clear();
			PositionLst.DataValueField = "key";
			PositionLst.DataTextField = "value";
			PositionLst.DataSource = items;
			PositionLst.DataBind();
			PositionLst.SelectedValue = "BOTTOM";
		}

		private void LoadPaneModulesList()
		{
			var items = new Dictionary<string, string> {{string.Empty, string.Empty}};

			foreach (ModuleInfo m in PortalSettings.Current.ActiveTab.Modules)
			{
				//if user is allowed to view module and module is not deleted
				if (ModulePermissionController.CanViewModule(m) && !m.IsDeleted)
				{
					//modules which are displayed on all tabs should not be displayed on the Admin or Super tabs
					if (!m.AllTabs || !PortalSettings.Current.ActiveTab.IsSuperTab)
					{
						if (m.PaneName == PaneLst.SelectedValue)
						{
							int moduleOrder = m.ModuleOrder;

							while (items.ContainsKey(moduleOrder.ToString()) || moduleOrder == 0)
							{
								moduleOrder++;
							}
							items.Add(moduleOrder.ToString(), m.ModuleTitle);
						}
					}
				}
			}

			PaneModulesLst.Enabled = true;
			PaneModulesLst.Items.Clear();
			PaneModulesLst.DataValueField = "key";
			PaneModulesLst.DataTextField = "value";
			PaneModulesLst.DataSource = items;
			PaneModulesLst.DataBind();

			if ((PaneModulesLst.Items.Count <= 1))
			{
				ListItem listItem = PositionLst.Items.FindByValue("ABOVE");
				if (((listItem != null)))
				{
					PositionLst.Items.Remove(listItem);
				}
				listItem = PositionLst.Items.FindByValue("BELOW");
				if (((listItem != null)))
				{
					PositionLst.Items.Remove(listItem);
				}
				PaneModulesLst.Enabled = false;
			}

			if ((PositionLst.SelectedValue == "TOP" || PositionLst.SelectedValue == "BOTTOM"))
			{
				PaneModulesLst.Enabled = false;
			}
		}

		private string GetString(string key)
		{
			return Localization.GetString(key, LocalResourceFile);
		}

		public bool CanAddModuleToPage()
		{
			if (HttpContext.Current == null)
			{
				return false;
			}
			//If we are not in an edit page
			return (string.IsNullOrEmpty(HttpContext.Current.Request.QueryString["mid"])) && (string.IsNullOrEmpty(HttpContext.Current.Request.QueryString["ctl"]));
		}

		//this has an overload of whether or not to create a cloned module
		private void DoAddExistingModule(int moduleId, int tabId, string paneName, int position, string align, bool cloneModule)
		{
			var moduleCtrl = new ModuleController();
			ModuleInfo moduleInfo = moduleCtrl.GetModule(moduleId, tabId, false);

			int userID = -1;
			if (Request.IsAuthenticated)
			{
				UserInfo user = UserController.GetCurrentUserInfo();
				if (((user != null)))
				{
					userID = user.UserID;
				}
			}
			
			if ((moduleInfo != null))
			{
				// clone the module object ( to avoid creating an object reference to the data cache )
				ModuleInfo newModule = moduleInfo.Clone();

				newModule.UniqueId = Guid.NewGuid(); // Cloned Module requires a different uniqueID

				newModule.TabID = PortalSettings.Current.ActiveTab.TabID;
				newModule.ModuleOrder = position;
				newModule.PaneName = paneName;
				newModule.Alignment = align;

				if ((cloneModule))
				{
					newModule.ModuleID = Null.NullInteger;
					//reset the module id
					newModule.ModuleID = moduleCtrl.AddModule(newModule);

					if (!string.IsNullOrEmpty(newModule.DesktopModule.BusinessControllerClass))
					{
						object objObject = Reflection.CreateObject(newModule.DesktopModule.BusinessControllerClass, newModule.DesktopModule.BusinessControllerClass);
						if (objObject is IPortable)
						{
							string content = Convert.ToString(((IPortable) objObject).ExportModule(moduleId));
							if (!string.IsNullOrEmpty(content))
							{
								((IPortable) objObject).ImportModule(newModule.ModuleID, content, newModule.DesktopModule.Version, userID);
							}
						}
					}
				}
				else
				{
					moduleCtrl.AddModule(newModule);
				}

				//Add Event Log
				var objEventLog = new EventLogController();
				objEventLog.AddLog(newModule, PortalSettings.Current, userID, "", EventLogController.EventLogType.MODULE_CREATED);
			}
		}
		
		private static void DoAddNewModule(string title, int desktopModuleId, string paneName, int position, int permissionType, string align)
		{
			TabPermissionCollection objTabPermissions = PortalSettings.Current.ActiveTab.TabPermissions;
			var objPermissionController = new PermissionController();
			var objModules = new ModuleController();
			new EventLogController();

			try
			{
				DesktopModuleInfo desktopModule;
				if (!DesktopModuleController.GetDesktopModules(PortalSettings.Current.PortalId).TryGetValue(desktopModuleId, out desktopModule))
				{
					throw new ArgumentException("desktopModuleId");
				}
			}
			catch (Exception ex)
			{
				Exceptions.LogException(ex);
			}

			foreach (ModuleDefinitionInfo objModuleDefinition in
				ModuleDefinitionController.GetModuleDefinitionsByDesktopModuleID(desktopModuleId).Values)
			{
				var objModule = new ModuleInfo();
				objModule.Initialize(PortalSettings.Current.PortalId);

				objModule.PortalID = PortalSettings.Current.PortalId;
				objModule.TabID = PortalSettings.Current.ActiveTab.TabID;
				objModule.ModuleOrder = position;
				objModule.ModuleTitle = string.IsNullOrEmpty(title) ? objModuleDefinition.FriendlyName : title;
				objModule.PaneName = paneName;
				objModule.ModuleDefID = objModuleDefinition.ModuleDefID;
				if (objModuleDefinition.DefaultCacheTime > 0)
				{
					objModule.CacheTime = objModuleDefinition.DefaultCacheTime;
					if (PortalSettings.Current.DefaultModuleId > Null.NullInteger && PortalSettings.Current.DefaultTabId > Null.NullInteger)
					{
						ModuleInfo defaultModule = objModules.GetModule(PortalSettings.Current.DefaultModuleId, PortalSettings.Current.DefaultTabId, true);
						if ((defaultModule != null))
						{
							objModule.CacheTime = defaultModule.CacheTime;
						}
					}
				}

				switch (permissionType)
				{
					case 0:
						objModule.InheritViewPermissions = true;
						break;
					case 1:
						objModule.InheritViewPermissions = false;
						break;
				}

				// get the default module view permissions
				ArrayList arrSystemModuleViewPermissions = objPermissionController.GetPermissionByCodeAndKey("SYSTEM_MODULE_DEFINITION", "VIEW");

				// get the permissions from the page
				foreach (TabPermissionInfo objTabPermission in objTabPermissions)
				{
					if (objTabPermission.PermissionKey == "VIEW" && permissionType == 0)
					{
						//Don't need to explicitly add View permisisons if "Same As Page"
						continue;
					}

					// get the system module permissions for the permissionkey
					ArrayList arrSystemModulePermissions = objPermissionController.GetPermissionByCodeAndKey("SYSTEM_MODULE_DEFINITION", objTabPermission.PermissionKey);
					// loop through the system module permissions
					int j;
					for (j = 0; j <= arrSystemModulePermissions.Count - 1; j++)
					{
						// create the module permission
						var objSystemModulePermission = (PermissionInfo) arrSystemModulePermissions[j];
						if (objSystemModulePermission.PermissionKey == "VIEW" && permissionType == 1 && objTabPermission.PermissionKey != "EDIT")
						{
							//Only Page Editors get View permissions if "Page Editors Only"
							continue;
						}

						ModulePermissionInfo objModulePermission = AddModulePermission(objModule,
																					   objSystemModulePermission,
																					   objTabPermission.RoleID,
																					   objTabPermission.UserID,
																					   objTabPermission.AllowAccess);

						// ensure that every EDIT permission which allows access also provides VIEW permission
						if (objModulePermission.PermissionKey == "EDIT" && objModulePermission.AllowAccess)
						{
							AddModulePermission(objModule,
								(PermissionInfo) arrSystemModuleViewPermissions[0],
								objModulePermission.RoleID,
								objModulePermission.UserID,
								true);
						}
					}

					//Get the custom Module Permissions,  Assume that roles with Edit Tab Permissions
					//are automatically assigned to the Custom Module Permissions
					if (objTabPermission.PermissionKey == "EDIT")
					{
						ArrayList arrCustomModulePermissions = objPermissionController.GetPermissionsByModuleDefID(objModule.ModuleDefID);

						// loop through the custom module permissions
						for (j = 0; j <= arrCustomModulePermissions.Count - 1; j++)
						{
							// create the module permission
							var objCustomModulePermission = (PermissionInfo)arrCustomModulePermissions[j];

							AddModulePermission(objModule, objCustomModulePermission, objTabPermission.RoleID, objTabPermission.UserID, objTabPermission.AllowAccess);
						}
					}
				}
				if (PortalSettings.Current.ContentLocalizationEnabled)
				{
					Locale defaultLocale = LocaleController.Instance.GetDefaultLocale(PortalSettings.Current.PortalId);
					objModule.CultureCode = defaultLocale.Code;
				}
				else
				{
					objModule.CultureCode = Null.NullString;
				}
				objModule.AllTabs = false;
				objModule.Alignment = align;

				objModules.AddModule(objModule);
			}
		}

		private static ModulePermissionInfo AddModulePermission(ModuleInfo objModule, PermissionInfo permission, int roleId, int userId, bool allowAccess)
		{
			var objModulePermission = new ModulePermissionInfo
										  {
											  ModuleID = objModule.ModuleID,
											  PermissionID = permission.PermissionID,
											  RoleID = roleId,
											  UserID = userId,
											  PermissionKey = permission.PermissionKey,
											  AllowAccess = allowAccess
										  };

			// add the permission to the collection
			if (!objModule.ModulePermissions.Contains(objModulePermission))
			{
				objModule.ModulePermissions.Add(objModulePermission);
			}

			return objModulePermission;
		}

		#endregion
	}
}