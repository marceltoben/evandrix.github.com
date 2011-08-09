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
using System.Xml;

using DotNetNuke.Common;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Security.Permissions;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.FileSystem;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Skins.Controls;

#endregion

namespace DotNetNuke.Modules.Admin.Tabs
{

    public partial class Export : PortalModuleBase
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

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Serializes the Tab
        /// </summary>
        /// <param name="xmlTemplate">Reference to XmlDocument context</param>
        /// <param name="nodeTabs">Node to add the serialized objects</param>
        /// <history>
        /// 	[cnurse]	10/02/2007	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void SerializeTab(XmlDocument xmlTemplate, XmlNode nodeTabs)
        {
            var xmlTab = new XmlDocument();
            var nodeTab = TabController.SerializeTab(xmlTab, Tab, chkContent.Checked);
            nodeTabs.AppendChild(xmlTemplate.ImportNode(nodeTab, true));
        }

        #region Event Handlers

        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            if (!TabPermissionController.CanExportPage())
            {
                Response.Redirect(Globals.AccessDeniedURL(), true);
            }
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            cmdExport.Click += OnExportClick;

            try
            {
                if (!Page.IsPostBack)
                {
                    cmdCancel.NavigateUrl = Globals.NavigateURL();
#pragma warning disable 612,618
                    ArrayList folders = FileSystemUtils.GetFoldersByUser(PortalId, false, false, "ADD");
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
                    if (Tab != null)
                    {
                        txtFile.Text = Globals.CleanName(Tab.TabName);
                    }
                    if (cboFolders.Items.FindByValue("Templates/") != null)
                    {
                        cboFolders.Items.FindByValue("Templates/").Selected = true;
                    }
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnExportClick(Object sender, EventArgs e)
        {
            try
            {
                if (!Page.IsValid)
                {
                    return;
                }
                string filename = PortalSettings.HomeDirectoryMapPath + cboFolders.SelectedItem.Value + txtFile.Text + ".page.template";
                filename = filename.Replace("/", "\\");

                var xmlTemplate = new XmlDocument();
                XmlNode nodePortal = xmlTemplate.AppendChild(xmlTemplate.CreateElement("portal"));
                nodePortal.Attributes.Append(XmlUtils.CreateAttribute(xmlTemplate, "version", "3.0"));

                //Add template description
                XmlElement node = xmlTemplate.CreateElement("description");
                node.InnerXml = Server.HtmlEncode(txtDescription.Text);
                nodePortal.AppendChild(node);

                //Serialize tabs
                XmlNode nodeTabs = nodePortal.AppendChild(xmlTemplate.CreateElement("tabs"));
                SerializeTab(xmlTemplate, nodeTabs);

                xmlTemplate.Save(filename);
                UI.Skins.Skin.AddModuleMessage(this, "", string.Format(Localization.GetString("ExportedMessage", LocalResourceFile), filename), ModuleMessage.ModuleMessageType.BlueInfo);

                //add file to Files table
#pragma warning disable 612,618
                FileSystemUtils.AddFile(txtFile.Text + ".page.template", PortalId, cboFolders.SelectedItem.Value, PortalSettings.HomeDirectoryMapPath, "application/octet-stream");
#pragma warning restore 612,618
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }

        }

        #endregion

    }
}