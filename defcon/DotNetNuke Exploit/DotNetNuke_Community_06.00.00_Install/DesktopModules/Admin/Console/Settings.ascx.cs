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
using System.Web.UI.WebControls;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Instrumentation;
using DotNetNuke.Modules.Console.Components;
using DotNetNuke.Security.Permissions;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;

#endregion

namespace DotNetNuke.Modules.Admin.Console
{

    public partial class Settings : ModuleSettingsBase
    {

        public override void LoadSettings()
        {
            try
            {
                if (Page.IsPostBack == false)
                {
                    var portalTabs = TabController.GetPortalTabs(PortalId, Null.NullInteger, false, true);

					//Add host tabs
                    if (UserInfo != null && UserInfo.IsSuperUser)
                    {
                        var hostTabs = new TabController().GetTabsByPortal(Null.NullInteger);
                        portalTabs.AddRange(hostTabs.Values);
                    }
                    ParentTab.Items.Clear();
                    foreach (var t in portalTabs)
                    {
                        if ((TabPermissionController.CanViewPage(t)))
                        {
                            ParentTab.Items.Add(new ListItem(t.IndentedTabName, t.TabID.ToString()));
                        }
                    }
                    ParentTab.Items.Insert(0, "");
                    SelectDropDownListItem(ref ParentTab, "ParentTabID");
                    foreach (string val in ConsoleController.GetSizeValues())
                    {
                        DefaultSize.Items.Add(new ListItem(Localization.GetString(val, LocalResourceFile), val));
                    }
                    SelectDropDownListItem(ref DefaultSize, "DefaultSize");
                    if (Settings.ContainsKey("AllowSizeChange"))
                    {
                        AllowResize.Checked = Convert.ToBoolean(Settings["AllowSizeChange"]);
                    }
                    foreach (var val in ConsoleController.GetViewValues())
                    {
                        DefaultView.Items.Add(new ListItem(Localization.GetString(val, LocalResourceFile), val));
                    }
                    SelectDropDownListItem(ref DefaultView, "DefaultView");
                    if (Settings.ContainsKey("AllowViewChange"))
                    {
                        AllowViewChange.Checked = Convert.ToBoolean(Settings["AllowViewChange"]);
                    }
                    if (Settings.ContainsKey("ShowTooltip"))
                    {
                        ShowTooltip.Checked = Convert.ToBoolean(Settings["ShowTooltip"]);
                    }
                    if (Settings.ContainsKey("ConsoleWidth"))
                    {
                        ConsoleWidth.Text = Convert.ToString(Settings["ConsoleWidth"]);
                    }
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        public override void UpdateSettings()
        {
            try
            {
                var objModules = new ModuleController();

				//validate console width value
                var wdth = string.Empty;
                if ((ConsoleWidth.Text.Trim().Length > 0))
                {
                    try
                    {
                        wdth = Unit.Parse(ConsoleWidth.Text.Trim()).ToString();
                    }
                    catch (Exception exc)
                    {
                        DnnLog.Error(exc);

                        throw new Exception("ConsoleWidth value is invalid. Value must be numeric.");
                    }
                }
                if ((ParentTab.SelectedValue == string.Empty))
                {
                    objModules.DeleteModuleSetting(ModuleId, "ParentTabID");
                }
                else
                {
                    objModules.UpdateModuleSetting(ModuleId, "ParentTabID", ParentTab.SelectedValue);
                }
                objModules.UpdateModuleSetting(ModuleId, "DefaultSize", DefaultSize.SelectedValue);
                objModules.UpdateModuleSetting(ModuleId, "AllowSizeChange", AllowResize.Checked.ToString());
                objModules.UpdateModuleSetting(ModuleId, "DefaultView", DefaultView.SelectedValue);
                objModules.UpdateModuleSetting(ModuleId, "AllowViewChange", AllowViewChange.Checked.ToString());
                objModules.UpdateModuleSetting(ModuleId, "ShowTooltip", ShowTooltip.Checked.ToString());
                objModules.UpdateModuleSetting(ModuleId, "ConsoleWidth", wdth);
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        private void SelectDropDownListItem(ref DropDownList ddl, string key)
        {
            if (Settings.ContainsKey(key))
            {
                ddl.ClearSelection();
                var selItem = ddl.Items.FindByValue(Convert.ToString(Settings[key]));
                if (selItem != null)
                {
                    selItem.Selected = true;
                }
            }
        }

    }
}