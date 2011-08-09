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
using System.Globalization;
using System.Web.UI.WebControls;

using DotNetNuke.Common.Lists;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Framework;
using DotNetNuke.Security.Roles;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Skins.Controls;
using DotNetNuke.UI.Utilities;

using Globals = DotNetNuke.Common.Globals;

#endregion

namespace DotNetNuke.Modules.Admin.Security
{
    /// -----------------------------------------------------------------------------
    /// <summary>
    /// The EditRoles PortalModuleBase is used to manage a Security Role
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
    ///                       and localisation
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class EditRoles : PortalModuleBase
    {

        #region Private Members

        private int _roleID = -1;

        #endregion

        #region Private Methods

        private void ActivateControls(bool enabled)
        {
            cboRoleGroups.Enabled = enabled;
            chkIsPublic.Enabled = enabled;
            chkAutoAssignment.Enabled = enabled;
            txtServiceFee.Enabled = enabled;
            txtBillingPeriod.Enabled = enabled;
            cboBillingFrequency.Enabled = enabled;
            txtTrialFee.Enabled = enabled;
            txtTrialPeriod.Enabled = enabled;
            cboTrialFrequency.Enabled = enabled;
            txtRSVPCode.Enabled = enabled;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// BindGroups gets the role Groups from the Database and binds them to the DropDown
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse]    01/05/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindGroups()
        {
            var arrGroups = RoleController.GetRoleGroups(PortalId);

            cboRoleGroups.Items.Add(new ListItem(Localization.GetString("GlobalRoles"), "-1"));

            foreach (RoleGroupInfo roleGroup in arrGroups)
            {
                cboRoleGroups.Items.Add(new ListItem(roleGroup.RoleGroupName, roleGroup.RoleGroupID.ToString()));
            }
        }

        private void UpdateFeeTextBoxes()
        {
            if (cboBillingFrequency.SelectedValue == "O")
            {
                txtBillingPeriod.Text = "1";
                txtBillingPeriod.Enabled = false;
            }
            else
            {
                txtBillingPeriod.Enabled = true;
            }
            if (cboTrialFrequency.SelectedValue == "O")
            {
                txtTrialPeriod.Text = "1";
                txtTrialPeriod.Enabled = false;
            }
            else
            {
                txtTrialPeriod.Enabled = true;
            }
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
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            jQuery.RequestDnnPluginsRegistration();

            cboBillingFrequency.SelectedIndexChanged += OnBillingFrequencyIndexChanged;
            cboTrialFrequency.SelectedIndexChanged += OnTrialFrequencyIndexChanged;
            cmdDelete.Click += OnDeleteClick;
            cmdManage.Click += OnManageClick;
            cmdUpdate.Click += OnUpdateClick;
            txtRSVPCode.TextChanged += OnRsvpCodeChanged;

            try
            {
                if ((Request.QueryString["RoleID"] != null))
                {
                    _roleID = Int32.Parse(Request.QueryString["RoleID"]);
                }
                var objPortalController = new PortalController();
                var objPortalInfo = objPortalController.GetPortal(PortalSettings.PortalId);
                if ((objPortalInfo == null || string.IsNullOrEmpty(objPortalInfo.ProcessorUserId)))
                {
					//Warn users about fee based roles if we have a Processor Id
                    lblProcessorWarning.Visible = true;
                }
                else
                {
                    divServiceFee.Visible = true;
                    divBillingPeriod.Visible = true;
                    divTrialFee.Visible = true;
                    divTrialPeriod.Visible = true;
                }
                if (Page.IsPostBack == false)
                {
                    cmdCancel.NavigateUrl = Globals.NavigateURL();

                    var objUser = new RoleController();

                    var ctlList = new ListController();
                    var colFrequencies = ctlList.GetListEntryInfoCollection("Frequency", "");

                    cboBillingFrequency.DataSource = colFrequencies;
                    cboBillingFrequency.DataBind();
                    cboBillingFrequency.Items.FindByValue("N").Selected = true;

                    cboTrialFrequency.DataSource = colFrequencies;
                    cboTrialFrequency.DataBind();
                    cboTrialFrequency.Items.FindByValue("N").Selected = true;

                    BindGroups();

                    ctlIcon.FileFilter = Globals.glbImageFileTypes;
                    if (_roleID != -1)
                    {
                        lblRoleName.Visible = true;
                        txtRoleName.Visible = false;
                        valRoleName.Enabled = false;

                        var objRoleInfo = objUser.GetRole(_roleID, PortalSettings.PortalId);
                        if (objRoleInfo != null)
                        {
                            lblRoleName.Text = objRoleInfo.RoleName;
                            txtDescription.Text = objRoleInfo.Description;
                            if (cboRoleGroups.Items.FindByValue(objRoleInfo.RoleGroupID.ToString()) != null)
                            {
                                cboRoleGroups.ClearSelection();
                                cboRoleGroups.Items.FindByValue(objRoleInfo.RoleGroupID.ToString()).Selected = true;
                            }
                            if (objRoleInfo.BillingFrequency != "N")
                            {
                                txtServiceFee.Text = objRoleInfo.ServiceFee.ToString("N2", CultureInfo.CurrentCulture);
                                txtBillingPeriod.Text = objRoleInfo.BillingPeriod.ToString();
                                if (cboBillingFrequency.Items.FindByValue(objRoleInfo.BillingFrequency) != null)
                                {
                                    cboBillingFrequency.ClearSelection();
                                    cboBillingFrequency.Items.FindByValue(objRoleInfo.BillingFrequency).Selected = true;
                                }
                            }
                            if (objRoleInfo.TrialFrequency != "N")
                            {
                                txtTrialFee.Text = objRoleInfo.TrialFee.ToString("N2", CultureInfo.CurrentCulture);
                                txtTrialPeriod.Text = objRoleInfo.TrialPeriod.ToString();
                                if (cboTrialFrequency.Items.FindByValue(objRoleInfo.TrialFrequency) != null)
                                {
                                    cboTrialFrequency.ClearSelection();
                                    cboTrialFrequency.Items.FindByValue(objRoleInfo.TrialFrequency).Selected = true;
                                }
                            }
                            chkIsPublic.Checked = objRoleInfo.IsPublic;
                            chkAutoAssignment.Checked = objRoleInfo.AutoAssignment;
                            txtRSVPCode.Text = objRoleInfo.RSVPCode;
                            if (!String.IsNullOrEmpty(txtRSVPCode.Text))
                            {
                                lblRSVPLink.Text = Globals.AddHTTP(Globals.GetDomainName(Request)) + "/" + Globals.glbDefaultPage + "?rsvp=" + txtRSVPCode.Text + "&portalid=" + PortalId;
                            }
                            ctlIcon.Url = objRoleInfo.IconFile;

                            UpdateFeeTextBoxes();
                        }
                        else //security violation attempt to access item not related to this Module
                        {
                            Response.Redirect(Globals.NavigateURL("Security Roles"));
                        }
                        if (_roleID == PortalSettings.AdministratorRoleId || _roleID == PortalSettings.RegisteredRoleId)
                        {
                            cmdDelete.Visible = false;
                            ActivateControls(false);
                        }
                        if (_roleID == PortalSettings.RegisteredRoleId)
                        {
                            cmdManage.Visible = false;
                        }
                    }
                    else
                    {
                        cmdDelete.Visible = false;
                        cmdManage.Visible = false;
                        lblRoleName.Visible = false;
                        txtRoleName.Visible = true;
                    }
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnBillingFrequencyIndexChanged(object sender, EventArgs e)
        {
            UpdateFeeTextBoxes();
        }

        protected void OnTrialFrequencyIndexChanged(object sender, EventArgs e)
        {
            UpdateFeeTextBoxes();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdUpdate_Click runs when the update Button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// 	[jlucarino]	2/23/2009	Added CreatedByUserID and LastModifiedByUserID
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnUpdateClick(object sender, EventArgs e)
        {
            try
            {
                if (Page.IsValid)
                {
                    float sglServiceFee = 0;
                    var intBillingPeriod = 1;
                    var strBillingFrequency = "N";

                    if (cboBillingFrequency.SelectedItem.Value == "N" && !String.IsNullOrEmpty(txtServiceFee.Text))
                    {
                        UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("IncompatibleFee", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                        return;
                    }
                    if (!String.IsNullOrEmpty(txtServiceFee.Text) && !String.IsNullOrEmpty(txtBillingPeriod.Text) && cboBillingFrequency.SelectedItem.Value != "N")
                    {
                        sglServiceFee = float.Parse(txtServiceFee.Text);
                        intBillingPeriod = int.Parse(txtBillingPeriod.Text);
                        strBillingFrequency = cboBillingFrequency.SelectedItem.Value;
                    }
                    float sglTrialFee = 0;
                    var intTrialPeriod = 1;
                    var strTrialFrequency = "N";

                    if (sglServiceFee != 0 && !String.IsNullOrEmpty(txtTrialFee.Text) && !String.IsNullOrEmpty(txtTrialPeriod.Text) && cboTrialFrequency.SelectedItem.Value != "N")
                    {
                        sglTrialFee = float.Parse(txtTrialFee.Text);
                        intTrialPeriod = int.Parse(txtTrialPeriod.Text);
                        strTrialFrequency = cboTrialFrequency.SelectedItem.Value;
                    }
                    var objRoleController = new RoleController();
                    var objRoleInfo = new RoleInfo();
                    objRoleInfo.PortalID = PortalId;
                    objRoleInfo.RoleID = _roleID;
                    objRoleInfo.RoleGroupID = int.Parse(cboRoleGroups.SelectedValue);
                    objRoleInfo.RoleName = txtRoleName.Text;
                    objRoleInfo.Description = txtDescription.Text;
                    objRoleInfo.ServiceFee = sglServiceFee;
                    objRoleInfo.BillingPeriod = intBillingPeriod;
                    objRoleInfo.BillingFrequency = strBillingFrequency;
                    objRoleInfo.TrialFee = sglTrialFee;
                    objRoleInfo.TrialPeriod = intTrialPeriod;
                    objRoleInfo.TrialFrequency = strTrialFrequency;
                    objRoleInfo.IsPublic = chkIsPublic.Checked;
                    objRoleInfo.AutoAssignment = chkAutoAssignment.Checked;
                    objRoleInfo.RSVPCode = txtRSVPCode.Text;
                    objRoleInfo.IconFile = ctlIcon.Url;
                    if (_roleID == -1)
                    {
                        if (objRoleController.GetRoleByName(PortalId, objRoleInfo.RoleName) == null)
                        {
                            objRoleController.AddRole(objRoleInfo);
                        }
                        else
                        {
                            UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("DuplicateRole", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                            return;
                        }
                    }
                    else
                    {
                        objRoleController.UpdateRole(objRoleInfo);
                    }
					
                    //Clear Roles Cache
                    DataCache.RemoveCache("GetRoles");

                    Response.Redirect(Globals.NavigateURL());
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdDelete_Click runs when the delete Button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnDeleteClick(object sender, EventArgs e)
        {
            try
            {
                var objUser = new RoleController();

                objUser.DeleteRole(_roleID, PortalSettings.PortalId);
              
                //Clear Roles Cache
                DataCache.RemoveCache("GetRoles");

                Response.Redirect(Globals.NavigateURL());
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdManage_Click runs when the Manage Users Button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnManageClick(Object sender, EventArgs e)
        {
            try
            {
                Response.Redirect(EditUrl("RoleId", _roleID.ToString(), "User Roles"));
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnRsvpCodeChanged(object sender, EventArgs e)
        {
            lblRSVPLink.Text = Globals.AddHTTP(Globals.GetDomainName(Request)) + @"/" + Globals.glbDefaultPage + @"?rsvp=" + txtRSVPCode.Text + @"&portalid=" + PortalId;
        }

        #endregion

    }
}