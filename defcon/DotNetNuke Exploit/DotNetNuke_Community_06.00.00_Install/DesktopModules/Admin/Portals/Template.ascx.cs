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
using System.IO;
using System.Text;
using System.Xml;

using DotNetNuke.Common;
using DotNetNuke.Common.Lists;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Entities.Profile;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Framework;
using DotNetNuke.Security.Permissions;
using DotNetNuke.Security.Roles;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.FileSystem;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Skins.Controls;

using ICSharpCode.SharpZipLib.Zip;

using FileInfo = DotNetNuke.Services.FileSystem.FileInfo;

#endregion

namespace DotNetNuke.Modules.Admin.Portals
{
    /// -----------------------------------------------------------------------------
    /// <summary>
    /// The Template PortalModuleBase is used to export a Portal as a Template
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    /// 	[cnurse]	9/28/2004	Updated to reflect design changes for Help, 508 support
    ///                       and localisation
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class Template : PortalModuleBase
    {
		#region "Private Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Serializes all Files
        /// </summary>
        /// <param name="objportal">Portal to serialize</param>
        /// <param name="folderPath">The folder containing the files</param>
        /// <remarks>
        /// The serialization uses the xml attributes defined in FileInfo class.
        /// </remarks>
        /// <history>
        /// 	[cnurse]	11/08/2004	Created
        ///     [cnurse]    05/20/2004  Extracted adding of file to zip to new FileSystemUtils method
        /// </history>
        /// -----------------------------------------------------------------------------
        private void SerializeFiles(XmlWriter writer, PortalInfo objportal, string folderPath, ref ZipOutputStream zipFile)
        {
            var folderManager = FolderManager.Instance;
            var objFolder = folderManager.GetFolder(objportal.PortalID, folderPath);

            writer.WriteStartElement("files");
            foreach (FileInfo objFile in folderManager.GetFiles(objFolder))
            {
                //verify that the file exists on the file system
                var filePath = objportal.HomeDirectoryMapPath + folderPath + objFile.FileName;
                if (File.Exists(filePath))
                {
                    writer.WriteStartElement("file");

                    writer.WriteElementString("contenttype", objFile.ContentType);
                    writer.WriteElementString("extension", objFile.Extension);
                    writer.WriteElementString("filename", objFile.FileName);
                    writer.WriteElementString("height", objFile.Height.ToString());
                    writer.WriteElementString("size", objFile.Size.ToString());
                    writer.WriteElementString("width", objFile.Width.ToString());

                    writer.WriteEndElement();

                    FileSystemUtils.AddToZip(ref zipFile, filePath, objFile.FileName, folderPath);
                }
            }
            writer.WriteEndElement();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Serializes all Folders including Permissions
        /// </summary>
        /// <param name="objportal">Portal to serialize</param>
        /// <remarks>
        /// The serialization uses the xml attributes defined in FolderInfo class.
        /// </remarks>
        /// <history>
        /// 	[cnurse]	11/08/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void SerializeFolders(XmlWriter writer, PortalInfo objportal, ref ZipOutputStream zipFile)
        {
			//Sync db and filesystem before exporting so all required files are found
            var folderManager = FolderManager.Instance;
            folderManager.Synchronize(objportal.PortalID);
            writer.WriteStartElement("folders");

            foreach (FolderInfo folder in folderManager.GetFolders(objportal.PortalID))
            {
                writer.WriteStartElement("folder");

                writer.WriteElementString("folderpath", folder.FolderPath);
                writer.WriteElementString("storagelocation", folder.StorageLocation.ToString());

                //Serialize Folder Permissions
                SerializeFolderPermissions(writer, objportal, folder.FolderPath);

                //Serialize files
                SerializeFiles(writer, objportal, folder.FolderPath, ref zipFile);

                writer.WriteEndElement();
            }
            writer.WriteEndElement();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Serializes all Folder Permissions
        /// </summary>
        /// <param name="objportal">Portal to serialize</param>
        /// <param name="folderPath">The folder containing the files</param>
        /// <remarks>
        /// The serialization uses the xml attributes defined in FolderInfo class.
        /// </remarks>
        /// <history>
        /// 	[cnurse]	11/08/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void SerializeFolderPermissions(XmlWriter writer, PortalInfo objportal, string folderPath)
        {
            FolderPermissionCollection permissions = FolderPermissionController.GetFolderPermissionsCollectionByFolder(objportal.PortalID, folderPath);

            writer.WriteStartElement("folderpermissions");

            foreach (FolderPermissionInfo permission in permissions)
            {
                writer.WriteStartElement("permission");

                writer.WriteElementString("permissioncode", permission.PermissionCode);
                writer.WriteElementString("permissionkey", permission.PermissionKey);
                writer.WriteElementString("rolename", permission.RoleName);
                writer.WriteElementString("allowaccess", permission.AllowAccess.ToString().ToLowerInvariant());

                writer.WriteEndElement();
            }
            writer.WriteEndElement();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Serializes all Profile Definitions
        /// </summary>
        /// <param name="objportal">Portal to serialize</param>
        /// <remarks>
        /// The serialization uses the xml attributes defined in ProfilePropertyDefinition class.
        /// </remarks>
        /// <history>
        /// </history>
        /// -----------------------------------------------------------------------------
        private void SerializeProfileDefinitions(XmlWriter writer, PortalInfo objportal)
        {
            var objListController = new ListController();
            ListEntryInfo objList;

            writer.WriteStartElement("profiledefinitions");
            foreach (ProfilePropertyDefinition objProfileProperty in
                ProfileController.GetPropertyDefinitionsByPortal(objportal.PortalID, false))
            {
                writer.WriteStartElement("profiledefinition");

                writer.WriteElementString("propertycategory", objProfileProperty.PropertyCategory);
                writer.WriteElementString("propertyname", objProfileProperty.PropertyName);

                objList = objListController.GetListEntryInfo(objProfileProperty.DataType);
                if (objList == null)
                {
                    writer.WriteElementString("datatype", "Unknown");
                }
                else
                {
                    writer.WriteElementString("datatype", objList.Value);
                }
                writer.WriteElementString("length", objProfileProperty.Length.ToString());
                writer.WriteElementString("defaultvisibility", Convert.ToInt32(objProfileProperty.DefaultVisibility).ToString());
                writer.WriteEndElement();
            }
            writer.WriteEndElement();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Serializes all portal Tabs
        /// </summary>
        /// <param name="objportal">Portal to serialize</param>
        /// <remarks>
        /// Only portal tabs will be exported to the template, Admin tabs are not exported.
        /// On each tab, all modules will also be exported.
        /// </remarks>
        /// <history>
        /// 	[VMasanas]	23/09/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void SerializeTabs(XmlWriter writer, PortalInfo objportal)
        {
            XmlNode nodeTab = null;
            var objtabs = new TabController();

            //supporting object to build the tab hierarchy
            var hTabs = new Hashtable();

            writer.WriteStartElement("tabs");

            foreach (TabInfo objtab in objtabs.GetTabsByPortal(objportal.PortalID).Values)
            {
				//if not deleted
                if (!objtab.IsDeleted)
                {
					//Serialize the Tab
                    var xmlTab = new XmlDocument();
                    nodeTab = TabController.SerializeTab(xmlTab, hTabs, objtab, objportal, chkContent.Checked);

                    nodeTab.WriteTo(writer);
                }
            }
            writer.WriteEndElement();
        }

		#endregion

		#region "EventHandlers"

        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_Load runs when the control is loaded
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[VMasanas]	23/09/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            cmdCancel.Click += cmdCancel_Click;
            cmdExport.Click += cmdExport_Click;

            try
            {
                if (!Page.IsPostBack)
                {
                    var objportals = new PortalController();
                    cboPortals.DataTextField = "PortalName";
                    cboPortals.DataValueField = "PortalId";
                    cboPortals.DataSource = objportals.GetPortals();
                    cboPortals.DataBind();
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdCancel_Click runs when the Cancel Button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	09/02/2008	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void cmdCancel_Click(object sender, EventArgs e)
        {
            try
            {
                Response.Redirect(Globals.NavigateURL(), true);
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Exports the selected portal
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// Template will be saved in Portals\_default folder.
        /// An extension of .template will be added to filename if not entered
        /// </remarks>
        /// <history>
        /// 	[VMasanas]	23/09/2004	Created
        /// 	[cnurse]	11/08/2004	Addition of files to template
        ///  	[aprasad]	1/17/2011	New setting AutoAddPortalAlias
        /// </history>
        /// -----------------------------------------------------------------------------
        private void cmdExport_Click(Object sender, EventArgs e)
        {
            try
            {
                ZipOutputStream resourcesFile;
                var sb = new StringBuilder();
                var settings = new XmlWriterSettings();
                settings.ConformanceLevel = ConformanceLevel.Fragment;
                settings.OmitXmlDeclaration = true;
                settings.Indent = true;

                if (!Page.IsValid)
                {
                    return;
                }
                string filename;
                filename = Globals.HostMapPath + txtTemplateName.Text;
                if (!filename.EndsWith(".template"))
                {
                    filename += ".template";
                }
                XmlWriter writer = XmlWriter.Create(filename, settings);

                writer.WriteStartElement("portal");
                writer.WriteAttributeString("version", "5.0");

                //Add template description
                writer.WriteElementString("description", Server.HtmlEncode(txtDescription.Text));

                //Serialize portal settings
                PortalInfo objportal;
                var objportals = new PortalController();
                objportal = objportals.GetPortal(Convert.ToInt32(cboPortals.SelectedValue));

                writer.WriteStartElement("settings");

                writer.WriteElementString("logofile", objportal.LogoFile);
                writer.WriteElementString("footertext", objportal.FooterText);
                writer.WriteElementString("userregistration", objportal.UserRegistration.ToString());
                writer.WriteElementString("banneradvertising", objportal.BannerAdvertising.ToString());
                writer.WriteElementString("defaultlanguage", objportal.DefaultLanguage);

                Dictionary<string, string> settingsDictionary = PortalController.GetPortalSettingsDictionary(objportal.PortalID);

                string setting = "";
                settingsDictionary.TryGetValue("DefaultPortalSkin", out setting);
                if (!string.IsNullOrEmpty(setting))
                {
                    writer.WriteElementString("skinsrc", setting);
                }
                settingsDictionary.TryGetValue("DefaultAdminSkin", out setting);
                if (!string.IsNullOrEmpty(setting))
                {
                    writer.WriteElementString("skinsrcadmin", setting);
                }
                settingsDictionary.TryGetValue("DefaultPortalContainer", out setting);
                if (!string.IsNullOrEmpty(setting))
                {
                    writer.WriteElementString("containersrc", setting);
                }
                settingsDictionary.TryGetValue("DefaultAdminContainer", out setting);
                if (!string.IsNullOrEmpty(setting))
                {
                    writer.WriteElementString("containersrcadmin", setting);
                }
                settingsDictionary.TryGetValue("EnableSkinWidgets", out setting);
                if (!string.IsNullOrEmpty(setting))
                {
                    writer.WriteElementString("enableskinwidgets", setting);
                }
                settingsDictionary.TryGetValue("portalaliasmapping", out setting);
                if (!String.IsNullOrEmpty(setting))
                {
                    writer.WriteElementString("portalaliasmapping", setting);
                }
                settingsDictionary.TryGetValue("TimeZone", out setting);
                if (!string.IsNullOrEmpty(setting))
                {
                    writer.WriteElementString("timezone", setting);
                }
                
                writer.WriteElementString("hostspace", objportal.HostSpace.ToString());
                writer.WriteElementString("userquota", objportal.UserQuota.ToString());
                writer.WriteElementString("pagequota", objportal.PageQuota.ToString());

                //End Portal Settings
                writer.WriteEndElement();

                //Serialize Profile Definitions
                SerializeProfileDefinitions(writer, objportal);

                //Serialize Portal Desktop Modules
                DesktopModuleController.SerializePortalDesktopModules(writer, objportal.PortalID);

                //Serialize Roles
                RoleController.SerializeRoleGroups(writer, objportal.PortalID);

                //Serialize tabs
                SerializeTabs(writer, objportal);

                if (chkContent.Checked)
                {
                    //Create Zip File to hold files
                    resourcesFile = new ZipOutputStream(File.Create(filename + ".resources"));
                    resourcesFile.SetLevel(6);

                    //Serialize folders (while adding files to zip file)
                    SerializeFolders(writer, objportal, ref resourcesFile);

                    //Finish and Close Zip file
                    resourcesFile.Finish();
                    resourcesFile.Close();
                }
                writer.WriteEndElement();

                writer.Close();

				DotNetNuke.UI.Skins.Skin.AddModuleMessage(this, "", string.Format(Localization.GetString("ExportedMessage", LocalResourceFile), filename), ModuleMessage.ModuleMessageType.GreenSuccess);
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }
		
		#endregion
    }
}