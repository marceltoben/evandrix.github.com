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
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Web.UI;
using System.Web.UI.WebControls;

using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Framework;
using DotNetNuke.Instrumentation;
using DotNetNuke.Modules.Console.Components;
using DotNetNuke.Security.Permissions;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Personalization;

#endregion

namespace DotNetNuke.Modules.Admin.Console
{
	public partial class ViewConsole : PortalModuleBase
	{
		private object _allowSizeChange;
		private object _allowViewChange;
		private ConsoleController _consoleCtrl;
		private int _consoleTabID = Null.NullInteger;
		private object _consoleWidth;
		private string _defaultSize = string.Empty;
		private string _defaultView = string.Empty;
		private object _showTooltip;
		private int _groupTabID = -1;

		public ConsoleController ConsoleCtrl
		{
			get
			{
				if ((_consoleCtrl == null))
				{
					_consoleCtrl = new ConsoleController();
				}
				return _consoleCtrl;
			}
		}

		public int ConsoleTabID
		{
			get
			{
				if ((_consoleTabID == Null.NullInteger))
				{
					if (Settings.ContainsKey("ParentTabID"))
					{
						_consoleTabID = int.Parse(Settings["ParentTabID"].ToString());
					}
					else
					{
						_consoleTabID = TabId;
					}
				}
				return _consoleTabID;
			}
		}

		public bool AllowSizeChange
		{
			get
			{
				if ((_allowSizeChange == null))
				{
					if (Settings.ContainsKey("AllowSizeChange"))
					{
						try
						{
							_allowSizeChange = bool.Parse(Settings["AllowSizeChange"].ToString());
						}
						catch (Exception exc)
						{
							DnnLog.Error(exc);

							_allowSizeChange = true;
						}
					}
					else
					{
						_allowSizeChange = true;
					}
				}
				return Convert.ToBoolean(_allowSizeChange);
			}
		}

		public bool AllowViewChange
		{
			get
			{
				if ((_allowViewChange == null))
				{
					if (Settings.ContainsKey("AllowViewChange"))
					{
						try
						{
							_allowViewChange = bool.Parse(Settings["AllowViewChange"].ToString());
						}
						catch (Exception exc)
						{
							DnnLog.Error(exc);

							_allowViewChange = true;
						}
					}
					else
					{
						_allowViewChange = true;
					}
				}
				return Convert.ToBoolean(_allowViewChange);
			}
		}

		public bool ShowTooltip
		{
			get
			{
				if ((_showTooltip == null))
				{
					if (Settings.ContainsKey("ShowTooltip"))
					{
						try
						{
							_showTooltip = bool.Parse(Settings["ShowTooltip"].ToString());
						}
						catch (Exception exc)
						{
							DnnLog.Error(exc);

							_showTooltip = true;
						}
					}
					else
					{
						_showTooltip = true;
					}
				}
				return Convert.ToBoolean(_showTooltip);
			}
		}

		public string DefaultSize
		{
			get
			{
				if ((_defaultSize == string.Empty && AllowSizeChange && UserId > Null.NullInteger))
				{
					object personalizedValue = GetUserSetting("DefaultSize");
					if ((personalizedValue != null))
					{
						_defaultSize = Convert.ToString(personalizedValue);
					}
				}
				if ((_defaultSize == string.Empty))
				{
					if (Settings.ContainsKey("DefaultSize"))
					{
						_defaultSize = Convert.ToString(Settings["DefaultSize"]);
					}
					else
					{
						_defaultSize = "IconFile";
					}
				}
				return _defaultSize;
			}
		}

		public string DefaultView
		{
			get
			{
				if ((_defaultView == string.Empty && AllowViewChange && UserId > Null.NullInteger))
				{
					object personalizedValue = GetUserSetting("DefaultView");
					if ((personalizedValue != null))
					{
						_defaultView = Convert.ToString(personalizedValue);
					}
				}
				if ((_defaultView == string.Empty))
				{
					if (Settings.ContainsKey("DefaultView"))
					{
						_defaultView = Convert.ToString(Settings["DefaultView"]);
					}
					else
					{
						_defaultView = "Hide";
					}
				}
				return _defaultView;
			}
		}

		public string ConsoleWidth
		{
			get
			{
				if ((_consoleWidth == null))
				{
					if (Settings.ContainsKey("ConsoleWidth"))
					{
						try
						{
							_consoleWidth = Unit.Parse(Settings["ConsoleWidth"].ToString());
						}
						catch (Exception exc)
						{
							DnnLog.Error(exc);

							_consoleWidth = "";
						}
					}
					else
					{
						_consoleWidth = "";
					}
				}
				return Convert.ToString(_consoleWidth);
			}
		}

		protected override void OnInit(EventArgs e)
		{
			base.OnInit(e);

			try
			{
				jQuery.RequestRegistration();

				string consoleJs = ResolveUrl("~/desktopmodules/admin/console/jquery.console.js");

				Page.ClientScript.RegisterClientScriptInclude("ConsoleJS", consoleJs);

				//Save User Preferences
				SavePersonalizedSettings();
			}
			catch (Exception exc)
			{
				Exceptions.ProcessModuleLoadException(this, exc);
			}
		}

		protected override void OnLoad(EventArgs e)
		{
			base.OnLoad(e);
			try
			{
				if ((!IsPostBack))
				{
					IconSize.Visible = AllowSizeChange;
					View.Visible = AllowViewChange;

					foreach (string val in ConsoleController.GetSizeValues())
					{
						IconSize.Items.Add(new ListItem(Localization.GetString(val + ".Text", LocalResourceFile), val));
					}
					foreach (string val in ConsoleController.GetViewValues())
					{
						View.Items.Add(new ListItem(Localization.GetString(val + ".Text", LocalResourceFile), val));
					}
					IconSize.SelectedValue = DefaultSize;
					View.SelectedValue = DefaultView;

					SettingsBreak.Visible = (IconSize.Visible && View.Visible);

					List<TabInfo> tempTabs;
					if ((IsHostTab()))
					{
                        tempTabs = TabController.GetTabsBySortOrder(Null.NullInteger).OrderBy(t => t.Level).ThenBy(t => t.HasChildren).ToList();
					}
					else
					{
                        tempTabs = TabController.GetTabsBySortOrder(PortalId).OrderBy(t => t.Level).ThenBy(t => t.HasChildren).ToList();
					}

					IList<TabInfo> tabs = new List<TabInfo>();

					IList<int> parentIDList = new List<int>();
					parentIDList.Add(ConsoleTabID);

					foreach (TabInfo tab in tempTabs)
					{
						if ((!CanShowTab(tab)))
						{
							continue;
						}
						if ((parentIDList.Contains(tab.ParentId)))
						{
							if ((!parentIDList.Contains(tab.TabID)))
							{
								parentIDList.Add(tab.TabID);
							}
							tabs.Add(tab);
						}
					}
					DetailView.DataSource = tabs;
					DetailView.DataBind();
				}
				if ((ConsoleWidth != string.Empty))
				{
					Console.Attributes.Add("style", "width:" + ConsoleWidth);
				}
			}
			catch (Exception exc)
			{
				Exceptions.ProcessModuleLoadException(this, exc);
			}
		}

		protected string GetHtml(object dataItem)
		{
			var tab = (TabInfo) dataItem;
			string returnValue = string.Empty;
			if ((_groupTabID > -1 && _groupTabID != tab.ParentId))
			{
				_groupTabID = -1;
				if ((!tab.DisableLink))
				{
					returnValue = "<br style=\"clear:both;\" /><br />";
				}
			}
			if ((tab.DisableLink))
			{
				const string headerHtml = "<br style=\"clear:both;\" /><br /><h1><span class=\"TitleHead\">{0}</span></h1><br style=\"clear:both\" />";
				returnValue += string.Format(headerHtml, DataBinder.Eval(dataItem, "TabName"));
				_groupTabID = int.Parse(DataBinder.Eval(dataItem, "TabID").ToString());
			}
			else
			{
				const string contentHtml = "<div>" + "<a href=\"{0}\"><img src=\"{1}\" width=\"16px\" heigh=\"16px\"/><img src=\"{2}\" width=\"32px\" heigh=\"32px\"/></a>" + "<h3>{3}</h3>" + "<div>{4}</div>" + "</div>";
				returnValue += string.Format(contentHtml,
											 DataBinder.Eval(dataItem, "FullUrl"),
											 GetIconUrl(dataItem, "IconFile"),
											 GetIconUrl(dataItem, "IconFileLarge"),
											 DataBinder.Eval(dataItem, "LocalizedTabName"),
											 DataBinder.Eval(dataItem, "Description"));
			}
			return returnValue;
		}

		private bool CanShowTab(TabInfo tab)
		{
			return (!tab.IsDeleted && (tab.StartDate < DateTime.Now || tab.StartDate == Null.NullDate)) && TabPermissionController.CanViewPage(tab);
		}

		protected string GetIconUrl(object dataItem, string size)
		{
			string iconURL = Convert.ToString(DataBinder.Eval(dataItem, size));
			if ((iconURL == string.Empty))
			{
				if ((size == "IconFile"))
				{
					iconURL = "~/images/icon_unknown_16px.gif";
				}
				else
				{
					iconURL = "~/images/icon_unknown_32px.gif";
				}
			}
			if (iconURL.Contains("~") == false)
			{
				iconURL = Path.Combine(PortalSettings.HomeDirectory, iconURL);
			}
			return ResolveUrl(iconURL);
		}

		protected string GetClientSideSettings()
		{
			string tmid = "-1";
			if ((UserId > -1))
			{
				tmid = TabModuleId.ToString();
			}
			return string.Format("allowIconSizeChange: {0}, allowDetailChange: {1}, selectedSize: '{2}', showDetails: '{3}', tabModuleID: {4}, showTooltip: {5}",
								 AllowSizeChange.ToString().ToLower(),
								 AllowViewChange.ToString().ToLower(),
								 DefaultSize,
								 DefaultView,
								 tmid,
								 ShowTooltip.ToString().ToLower());
		}

		protected void SavePersonalizedSettings()
		{
			if ((UserId > -1))
			{
				int consoleModuleID = -1;
				try
				{
					if (Request.QueryString["CTMID"] != null)
					{
						consoleModuleID = Convert.ToInt32(Request.QueryString["CTMID"]);
					}
				}
				catch (Exception exc)
				{
					DnnLog.Error(exc);

					consoleModuleID = -1;
				}
				if ((consoleModuleID == TabModuleId))
				{
					string consoleSize = string.Empty;
					if (Request.QueryString["CS"] != null)
					{
						consoleSize = Request.QueryString["CS"];
					}
					string consoleView = string.Empty;
					if (Request.QueryString["CV"] != null)
					{
						consoleView = Request.QueryString["CV"];
					}
					if ((consoleSize != string.Empty && ConsoleController.GetSizeValues().Contains(consoleSize)))
					{
						SaveUserSetting("DefaultSize", consoleSize);
					}
					if ((consoleView != string.Empty && ConsoleController.GetViewValues().Contains(consoleView)))
					{
						SaveUserSetting("DefaultView", consoleView);
					}
				}
			}
		}

		public object GetUserSetting(string key)
		{
			return Personalization.GetProfile(ModuleConfiguration.ModuleDefinition.FriendlyName, PersonalizationKey(key));
		}

		public void SaveUserSetting(string key, object val)
		{
			Personalization.SetProfile(ModuleConfiguration.ModuleDefinition.FriendlyName, PersonalizationKey(key), val);
		}

		public string PersonalizationKey(string key)
		{
			return string.Format("{0}_{1}_{2}", PortalId, TabModuleId, key);
		}

		public bool IsHostTab()
		{
			bool returnValue = false;
			if (ConsoleTabID != TabId)
			{
				if (UserInfo != null && UserInfo.IsSuperUser)
				{
					TabCollection hostTabs = new TabController().GetTabsByPortal(Null.NullInteger);
					foreach (int key in hostTabs.Keys)
					{
						if (key == ConsoleTabID)
						{
							returnValue = true;
							break;
						}
					}
				}
			}
			else
			{
				returnValue = PortalSettings.ActiveTab.IsSuperTab;
			}
			return returnValue;
		}
	}
}