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
using System.IO;
using System.Web.UI.WebControls;
using System.Xml;

using DotNetNuke.Common;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Instrumentation;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Skins;

#endregion

namespace DotNetNuke.Modules.Admin.Portals
{

    /// -----------------------------------------------------------------------------
    /// <summary>
    /// The SiteWizard Wizard is a user-friendly Wizard that leads the user through the
    ///	process of setting up a new site
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    /// 	[cnurse]	10/8/2004	created
    ///     [cnurse]    12/04/2006  converted to use ASP.NET 2 Wizard classes
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class SiteWizard : PortalModuleBase
    {

        #region ContainerType enum

        public enum ContainerType
        {
            Host = 0,
            Portal = 1,
            Folder = 2,
            All = 3
        }

        #endregion

        #region Private Methods

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// BindContainers manages the containers
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	12/15/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindContainers()
        {
            ctlPortalContainer.Clear();

            if (chkIncludeAll.Checked)
            {
                GetContainers(ContainerType.All, "", "");
            }
            else
            {
                if (!String.IsNullOrEmpty(ctlPortalSkin.SkinSrc))
                {
                    string strFolder;
                    string strContainerFolder = ctlPortalSkin.SkinSrc.Substring(0, ctlPortalSkin.SkinSrc.LastIndexOf("/"));
                    if (strContainerFolder.StartsWith("[G]"))
                    {
                        strContainerFolder = strContainerFolder.Replace("[G]Skins/", "Containers\\");
                        strFolder = Globals.HostMapPath + strContainerFolder;
                        GetContainers(ContainerType.Folder, "[G]", strFolder);
                    }
                    else
                    {
                        strContainerFolder = strContainerFolder.Replace("[L]Skins/", "Containers\\");
                        strFolder = PortalSettings.HomeDirectoryMapPath + strContainerFolder;
                        GetContainers(ContainerType.Folder, "[L]", strFolder);
                    }
                }
                else
                {
                    GetContainers(ContainerType.Portal, "", "");
                }
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// GetContainers gets the containers and binds the lists to the controls
        ///	the buttons
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <param name="type">An enum indicating what type of containers to load</param>
        /// <param name="skinType">A string that identifies whether the skin is Host "[G]" or Site "[L]"</param>
        /// <param name="strFolder">The folder to search for skins</param>
        /// <history>
        /// 	[cnurse]	12/14/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void GetContainers(ContainerType type, string skinType, string strFolder)
        {

            //Configure SkinControl
            ctlPortalContainer.Columns = 3;
            ctlPortalContainer.SkinRoot = SkinController.RootContainer;
            switch (type)
            {
                case ContainerType.Folder:
                    ctlPortalContainer.LoadSkins(strFolder, skinType, false);
                    break;
                case ContainerType.Portal:
                    ctlPortalContainer.LoadPortalSkins(false);
                    break;
                case ContainerType.Host:
                    ctlPortalContainer.LoadHostSkins(false);
                    break;
                case ContainerType.All:
                    ctlPortalContainer.LoadAllSkins(false);
                    break;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// GetSkins gets the skins and containers and binds the lists to the controls
        ///	the buttons
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	11/04/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void GetSkins()
        {

            //Configure SkinControl
            ctlPortalSkin.Columns = 3;
            ctlPortalSkin.SkinRoot = SkinController.RootSkin;
            ctlPortalSkin.LoadAllSkins(false);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// GetTemplates gets the skins and containers and binds the lists to the control
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	11/04/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void GetTemplates()
        {
            string strFolder;

            strFolder = Globals.HostMapPath;
            if (Directory.Exists(strFolder))
            {
				//admin.template and a portal template are required at minimum
                string[] fileEntries = Directory.GetFiles(strFolder, "*.template");
                foreach (string strFileName in fileEntries)
                {
                    if (Path.GetFileNameWithoutExtension(strFileName) == "admin")
                    {
                    }
                    else
                    {
                        lstTemplate.Items.Add(Path.GetFileNameWithoutExtension(strFileName));
                    }
                }
                if (lstTemplate.Items.Count == 0)
                {
                }
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// UseTemplate sets the page ready to select a Template
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	11/04/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void UseTemplate()
        {
            lstTemplate.Enabled = chkTemplate.Checked;
            optMerge.Enabled = chkTemplate.Checked;
            lblMergeTitle.Enabled = chkTemplate.Checked;
            lblMergeWarning.Enabled = chkTemplate.Checked;
            lblTemplateMessage.Text = "";
        }

        #endregion

        #region Event Handlers

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_Load runs when the control is loaded
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	10/11/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            chkIncludeAll.CheckedChanged += OnIncludeAllCheckChanged;
            chkTemplate.CheckedChanged += OnTemplateCheckChanged;
            lstTemplate.SelectedIndexChanged += OnTemplateSelectedIndexChanged;
            Wizard.ActiveStepChanged += OnWizardActiveStepChanged;
            Wizard.FinishButtonClick += OnWizardFinishedClick;
            Wizard.NextButtonClick += OnWizardNextClick;

            try
            {
                Wizard.StartNextButtonText = "<img src=\"" + Globals.ApplicationPath + "/images/rt.gif\" border=\"0\" /> " + Localization.GetString("Next", LocalResourceFile);
                Wizard.StepNextButtonText = "<img src=\"" + Globals.ApplicationPath + "/images/rt.gif\" border=\"0\" /> " + Localization.GetString("Next", LocalResourceFile);
                Wizard.StepPreviousButtonText = "<img src=\"" + Globals.ApplicationPath + "/images/lt.gif\" border=\"0\" /> " + Localization.GetString("Previous", LocalResourceFile);
                Wizard.FinishPreviousButtonText = "<img src=\"" + Globals.ApplicationPath + "/images/lt.gif\" border=\"0\" /> " + Localization.GetString("Previous", LocalResourceFile);
                Wizard.FinishCompleteButtonText = "<img src=\"" + Globals.ApplicationPath + "/images/save.gif\" border=\"0\" /> " + Localization.GetString("Finish", LocalResourceFile);
                if (!Page.IsPostBack)
                {
                    //Get Templates for Page 1
                    GetTemplates();
                    chkTemplate.Checked = false;
                    lstTemplate.Enabled = false;

                    //Get Skins for Pages 2
                    GetSkins();

                    //Get Details for Page 4
                    var objPortalController = new PortalController();
                    var objPortal = objPortalController.GetPortal(PortalId);
                    txtPortalName.Text = objPortal.PortalName;
                    txtDescription.Text = objPortal.Description;
                    txtKeyWords.Text = objPortal.KeyWords;

                    //Get Details for Page 5
                    urlLogo.Url = objPortal.LogoFile;
                    urlLogo.FileFilter = Globals.glbImageFileTypes;

                    UseTemplate();
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// chkIncludeAll_CheckedChanged runs when include all containers checkbox status is changed
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	12/15/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnIncludeAllCheckChanged(object sender, EventArgs e)
        {
            BindContainers();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// chkTemplate_CheckedChanged runs when use template checkbox status is changed
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	10/13/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnTemplateCheckChanged(object sender, EventArgs e)
        {
            if (chkTemplate.Checked)
            {
                lstTemplate.SelectedIndex = -1;
            }
            UseTemplate();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// lstTemplate_SelectedIndexChanged runs when the selected template is changed
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	11/04/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnTemplateSelectedIndexChanged(object sender, EventArgs e)
        {
            if (lstTemplate.SelectedIndex > -1)
            {
                var xmlDoc = new XmlDocument();
                XmlNode node;
                var strTemplatePath = Globals.HostMapPath;
                var strTemplateFile = lstTemplate.SelectedItem.Text + ".template";
				
				//open the XML file
                try
                {
                    xmlDoc.Load(strTemplatePath + strTemplateFile);
                    node = xmlDoc.SelectSingleNode("//portal/description");
                    if (node != null)
                    {
                        lblTemplateMessage.Text = node.InnerText;
                    }
                    else
                    {
                        lblTemplateMessage.Text = "";
                    }
                    //Check that all modules in template are isntalled
                    // parse portal desktop modules (version 5.0 templates)
                    node = xmlDoc.SelectSingleNode("//portal/portalDesktopModules");
                    if (node != null)
                    {
                        var message = PortalController.CheckDesktopModulesInstalled(node.CreateNavigator());
                        if (!string.IsNullOrEmpty(message))
                        {
                            lblTemplateMessage.Text = string.Format("<p>This template has the following modules that are not installed.</p><p>{0}</p>", message);
                        }
                    }
                }
                catch (Exception exc)
                {
                    
                    DnnLog.Error(exc);

                    lblTemplateMessage.Text = "Error Loading Template description";
                }
            }
            else
            {
                lblTemplateMessage.Text = "";
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Wizard_ActiveStepChanged runs when the Wizard page has been changed
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	12/04/2006	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnWizardActiveStepChanged(object sender, EventArgs e)
        {
            switch (Wizard.ActiveStepIndex)
            {
                case 3:
                    BindContainers();
                    break;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Wizard_FinishButtonClick runs when the Finish Button on the Wizard is clicked.
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	10/12/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnWizardFinishedClick(object sender, WizardNavigationEventArgs e)
        {
            var objPortalController = new PortalController();

            //use Portal Template to update portal content pages
            if (lstTemplate.SelectedIndex != -1)
            {
                string strTemplateFile = lstTemplate.SelectedItem.Text + ".template";

                //process zip resource file if present
                objPortalController.ProcessResourceFile(PortalSettings.HomeDirectoryMapPath, Globals.HostMapPath + strTemplateFile);

                //Process Template
                switch (optMerge.SelectedValue)
                {
                    case "Ignore":
                        objPortalController.ParseTemplate(PortalId, Globals.HostMapPath, strTemplateFile, PortalSettings.AdministratorId, PortalTemplateModuleAction.Ignore, false);
                        break;
                    case "Replace":
                        objPortalController.ParseTemplate(PortalId, Globals.HostMapPath, strTemplateFile, PortalSettings.AdministratorId, PortalTemplateModuleAction.Replace, false);
                        break;
                    case "Merge":
                        objPortalController.ParseTemplate(PortalId, Globals.HostMapPath, strTemplateFile, PortalSettings.AdministratorId, PortalTemplateModuleAction.Merge, false);
                        break;
                }
            }
			
            //update Portal info in the database
            PortalInfo objPortal = objPortalController.GetPortal(PortalId);
            objPortal.Description = txtDescription.Text;
            objPortal.KeyWords = txtKeyWords.Text;
            objPortal.PortalName = txtPortalName.Text;
            objPortal.LogoFile = urlLogo.Url;
            objPortalController.UpdatePortalInfo(objPortal);

            //Set Portal Skin
            SkinController.SetSkin(SkinController.RootSkin, PortalId, SkinType.Portal, ctlPortalSkin.SkinSrc);
            SkinController.SetSkin(SkinController.RootSkin, PortalId, SkinType.Admin, ctlPortalSkin.SkinSrc);

            //Set Portal Container
            SkinController.SetSkin(SkinController.RootContainer, PortalId, SkinType.Portal, ctlPortalContainer.SkinSrc);
            SkinController.SetSkin(SkinController.RootContainer, PortalId, SkinType.Admin, ctlPortalContainer.SkinSrc);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Wizard_NextButtonClickruns when the next Button is clicked.  It provides
        ///	a mechanism for cancelling the page change if certain conditions aren't met.
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	12/04/2006	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnWizardNextClick(object sender, WizardNavigationEventArgs e)
        {
            string strMessage;

            switch (e.CurrentStepIndex)
            {
                case 1: //Templates
                    //Before we leave Page 1, the user must have selected a Portal
                    if (lstTemplate.SelectedIndex == -1)
                    {
                        if (chkTemplate.Checked)
                        {
                            e.Cancel = true;
                            lblTemplateMessage.Text = Localization.GetString("TemplateRequired", LocalResourceFile);
                        }
                    }
                    else
                    {
						//Check Template Validity before proceeding
                        string schemaFilename = Server.MapPath("DesktopModules/Admin/Portals/portal.template.xsd");
                        string xmlFilename = Globals.HostMapPath + lstTemplate.SelectedItem.Text + ".template";
                        var xval = new PortalTemplateValidator();
                        if (!xval.Validate(xmlFilename, schemaFilename))
                        {
                            strMessage = Localization.GetString("InvalidTemplate", LocalResourceFile);
                            lblTemplateMessage.Text = string.Format(strMessage, lstTemplate.SelectedItem.Text + ".template");
                            //Cancel Page move if invalid template
                            e.Cancel = true;
                        }
                    }
                    break;
            }

        }

        #endregion

    }
}