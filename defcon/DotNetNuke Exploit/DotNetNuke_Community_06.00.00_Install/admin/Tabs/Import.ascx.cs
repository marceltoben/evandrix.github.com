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
using System.Web.UI.WebControls;
using System.Xml;
using DotNetNuke.Common;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Security.Permissions;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.FileSystem;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Log.EventLog;
using DotNetNuke.UI.Skins.Controls;

#endregion

namespace DotNetNuke.Modules.Admin.Tabs
{

    public partial class Import : PortalModuleBase
    {

        private TabInfo _tab;

        public TabInfo Tab
        {
            get
            {
                if (_tab == null)
                {
                    var objTabs = new TabController();
                    _tab = objTabs.GetTab(TabId, PortalId, false);
                }
                return _tab;
            }
        }

        private void BindBeforeAfterTabControls()
        {
            TabInfo parentTab = null;
            var noneSpecified = "<" + Localization.GetString("None_Specified") + ">";
            if (cboParentTab.SelectedItem != null)
            {
                var parentTabID = Int32.Parse(cboParentTab.SelectedItem.Value);
                var controller = new TabController();
                parentTab = controller.GetTab(parentTabID, PortalId, false);
            }
            List<TabInfo> listTabs = parentTab != null ? new TabController().GetTabsByPortal(parentTab.PortalID).WithParentId(parentTab.TabID) : new TabController().GetTabsByPortal(PortalId).WithParentId(Null.NullInteger);
            listTabs = TabController.GetPortalTabs(listTabs, Null.NullInteger, true, noneSpecified, false, false, false, false, true);
            cboPositionTab.DataSource = listTabs;
            cboPositionTab.DataBind();
            rbInsertPosition.Items.Clear();
            rbInsertPosition.Items.Add(new ListItem(Localization.GetString("InsertBefore", LocalResourceFile), "Before"));
            rbInsertPosition.Items.Add(new ListItem(Localization.GetString("InsertAfter", LocalResourceFile), "After"));
            rbInsertPosition.Items.Add(new ListItem(Localization.GetString("InsertAtEnd", LocalResourceFile), "AtEnd"));
            rbInsertPosition.SelectedValue = "After";
        }

        private void BindFiles()
        {
            cboTemplate.Items.Clear();
            if (cboFolders.SelectedIndex != 0)
            {
                var files = Directory.GetFiles(PortalSettings.HomeDirectoryMapPath + cboFolders.SelectedValue, "*.page.template");
                foreach (var file in files)
                {
                    var f = file.Replace(PortalSettings.HomeDirectoryMapPath + cboFolders.SelectedValue, "");
                    cboTemplate.Items.Add(new ListItem(f.Replace(".page.template", ""), f));
                }
                cboTemplate.Items.Insert(0, new ListItem("<" + Localization.GetString("None_Specified") + ">", "None_Specified"));
                cboTemplate.SelectedIndex = 0;
            }
        }

        private void BindTabControls()
        {
            cboParentTab.DataSource = GetTabs(true);
            cboParentTab.DataBind();
            BindBeforeAfterTabControls();
            divInsertPositionRow.Visible = cboPositionTab.Items.Count > 0;
            cboParentTab.AutoPostBack = true;
            if (cboPositionTab.Items.FindByValue(TabId.ToString()) != null)
            {
                cboPositionTab.ClearSelection();
                cboPositionTab.Items.FindByValue(TabId.ToString()).Selected = true;
            }
        }

        private void DisplayNewRows()
        {
            divTabName.Visible = (optMode.SelectedIndex == 0);
            divInsertPositionRow.Visible = (optMode.SelectedIndex == 0);
            divInsertPositionRow.Visible = (optMode.SelectedIndex == 0);
        }

        private List<TabInfo> GetTabs(bool includeURL)
        {
            var noneSpecified = "<" + Localization.GetString("None_Specified") + ">";
            List<TabInfo> tabs = TabController.GetPortalTabs(PortalId, Null.NullInteger, true, noneSpecified, true, false, includeURL, false, true);
            if (UserInfo.IsSuperUser)
            {
                Dictionary<int, TabInfo> hostTabs = new TabController().GetTabsByPortal(Null.NullInteger);
                foreach (KeyValuePair<int, TabInfo> kvp in hostTabs)
                {
                    tabs.Add(kvp.Value);
                }
            }
            return tabs;
        }

        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            if (!TabPermissionController.CanImportPage())
            {
                Response.Redirect(Globals.AccessDeniedURL(), true);
            }
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            cboFolders.SelectedIndexChanged += OnFolderIndexChanged;
            cmdImport.Click += OnImportClick;
            cboParentTab.SelectedIndexChanged += OnParentTabIndexChanged;
            cboTemplate.SelectedIndexChanged += OnTemplateIndexChanged;
            optMode.SelectedIndexChanged += OptModeSelectedIndexChanged;

            try
            {
                if (!Page.IsPostBack)
                {
                    cmdCancel.NavigateUrl = Globals.NavigateURL();
                    cboFolders.Items.Insert(0, new ListItem("<" + Localization.GetString("None_Specified") + ">", "-"));
#pragma warning disable 612,618
                    var folders = FileSystemUtils.GetFoldersByUser(PortalId, false, false, "BROWSE, ADD");
#pragma warning restore 612,618
                    foreach (FolderInfo folder in folders)
                    {
                        var folderItem = new ListItem
                                             {
                                                 Text =
                                                     folder.FolderPath == Null.NullString
                                                         ? Localization.GetString("Root", LocalResourceFile)
                                                         : PathUtils.Instance.RemoveTrailingSlash(folder.DisplayPath),
                                                 Value = folder.FolderPath
                                             };
                        cboFolders.Items.Add(folderItem);
                    }
                    if (cboFolders.Items.FindByValue("Templates/") != null)
                    {
                        cboFolders.Items.FindByValue("Templates/").Selected = true;
                    }
                    BindFiles();
                    BindTabControls();
                    DisplayNewRows();
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnFolderIndexChanged(object sender, EventArgs e)
        {
            BindFiles();
        }

        protected void OnImportClick(object sender, EventArgs e)
        {
            try
            {
                if (cboTemplate.SelectedItem == null || cboTemplate.SelectedValue == "None_Specified")
                {
                    UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("SpecifyFile", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                    return;
                }
                if (optMode.SelectedIndex == -1)
                {
                    UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("SpecifyMode", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                    return;
                }
                var xmlDoc = new XmlDocument();
                xmlDoc.Load(PortalSettings.HomeDirectoryMapPath + cboFolders.SelectedValue + cboTemplate.SelectedValue);
                XmlNode nodeTab = xmlDoc.SelectSingleNode("//portal/tabs/tab");
                TabInfo objTab;
                if (optMode.SelectedValue == "ADD")
                {
                    if (string.IsNullOrEmpty(txtTabName.Text))
                    {
                        UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("SpecifyName", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                        return;
                    }
					
					//New Tab
                    objTab = new TabInfo {PortalID = PortalId, TabName = txtTabName.Text, IsVisible = true};
                    if (cboParentTab.SelectedItem != null)
                    {
                        objTab.ParentId = Int32.Parse(cboParentTab.SelectedItem.Value);
                    }
                    objTab.TabPath = Globals.GenerateTabPath(objTab.ParentId, objTab.TabName);
                    int tabID = TabController.GetTabByTabPath(objTab.PortalID, objTab.TabPath, Null.NullString);
                    var objTabs = new TabController();

                    //Check if tab exists
                    if (tabID != Null.NullInteger)
                    {
                        TabInfo existingTab = objTabs.GetTab(tabID, PortalId, false);
                        if (existingTab != null && existingTab.IsDeleted)
                        {
                            UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("TabRecycled", LocalResourceFile), ModuleMessage.ModuleMessageType.YellowWarning);
                        }
                        else
                        {
                            UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("TabExists", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                        }
                        return;
                    }

                    int positionTabID = Int32.Parse(cboPositionTab.SelectedItem.Value);

                    var objEventLog = new EventLogController();
                    if (rbInsertPosition.SelectedValue == "After" && positionTabID > Null.NullInteger)
                    {
                        objTab.TabID = objTabs.AddTabAfter(objTab, positionTabID);
                    }
                    else if (rbInsertPosition.SelectedValue == "Before" && positionTabID > Null.NullInteger)
                    {
                        objTab.TabID = objTabs.AddTabBefore(objTab, positionTabID);
                    }
                    else
                    {
                        objTab.TabID = objTabs.AddTab(objTab);
                    }
                    objEventLog.AddLog(objTab, PortalSettings, UserId, "", EventLogController.EventLogType.TAB_CREATED);

                    //Update Tab properties from template
                    objTab = TabController.DeserializeTab(nodeTab, objTab, PortalId, PortalTemplateModuleAction.Replace);
                }
                else
                {
					//Replace Existing Tab
                    objTab = TabController.DeserializeTab(nodeTab, Tab, PortalId, PortalTemplateModuleAction.Replace);
                }
                switch (optRedirect.SelectedValue)
                {
                    case "VIEW":
                        Response.Redirect(Globals.NavigateURL(objTab.TabID), true);
                        break;
                    default:
                        Response.Redirect(Globals.NavigateURL(objTab.TabID, "Tab", "action=edit"), true);
                        break;
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnParentTabIndexChanged(object sender, EventArgs e)
        {
            BindBeforeAfterTabControls();
        }

        protected void OnTemplateIndexChanged(Object sender, EventArgs e)
        {
            try
            {
                if (cboTemplate.SelectedIndex > 0)
                {
                    var filename = PortalSettings.HomeDirectoryMapPath + cboFolders.SelectedItem.Value + cboTemplate.SelectedValue;
                    var xmldoc = new XmlDocument();
                    xmldoc.Load(filename);
                    var node = xmldoc.SelectSingleNode("//portal/description");
                    if (node != null && !String.IsNullOrEmpty(node.InnerXml))
                    {
                        lblTemplateDescription.Visible = true;
                        lblTemplateDescription.Text = Server.HtmlDecode(node.InnerXml);
                        txtTabName.Text = cboTemplate.SelectedItem.Text;
                    }
                    else
                    {
                        lblTemplateDescription.Visible = false;
                    }
                }
                else
                {
                    lblTemplateDescription.Visible = false;
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OptModeSelectedIndexChanged(object sender, EventArgs e)
        {
            DisplayNewRows();
        }

    }
}