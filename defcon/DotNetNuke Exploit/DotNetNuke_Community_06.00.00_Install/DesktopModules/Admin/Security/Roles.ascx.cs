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
using System.Web.UI;
using System.Web.UI.WebControls;

using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Modules.Actions;
using DotNetNuke.Framework;
using DotNetNuke.Security;
using DotNetNuke.Security.Roles;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Utilities;
using DotNetNuke.UI.WebControls;

using Globals = DotNetNuke.Common.Globals;

#endregion

namespace DotNetNuke.Modules.Admin.Security
{

	/// -----------------------------------------------------------------------------
	/// <summary>
	/// The Roles PortalModuleBase is used to manage the Security Roles for the
	/// portal.
	/// </summary>
    /// <remarks>
	/// </remarks>
	/// <history>
	/// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
	///                       and localisation
	/// </history>
	/// -----------------------------------------------------------------------------
    public partial class Roles : PortalModuleBase, IActionable
    {

        #region Private Members

        private int _roleGroupId = -1;

        #endregion

        #region IActionable Members

        public ModuleActionCollection ModuleActions
        {
            get
            {
                var Actions = new ModuleActionCollection();
                Actions.Add(GetNextActionID(),
                            Localization.GetString(ModuleActionType.AddContent, LocalResourceFile),
                            ModuleActionType.AddContent,
                            "",
                            "add.gif",
                            EditUrl(),
                            false,
                            SecurityAccessLevel.Edit,
                            true,
                            false);
                Actions.Add(GetNextActionID(),
                            Localization.GetString("AddGroup.Action", LocalResourceFile),
                            ModuleActionType.AddContent,
                            "",
                            "add.gif",
                            EditUrl("EditGroup"),
                            false,
                            SecurityAccessLevel.Edit,
                            true,
                            false);
                Actions.Add(GetNextActionID(),
                            Localization.GetString("UserSettings.Action", LocalResourceFile),
                            ModuleActionType.AddContent,
                            "",
                            "settings.gif",
                            EditUrl("UserSettings"),
                            false,
                            SecurityAccessLevel.Edit,
                            true,
                            false);
                return Actions;
            }
        }

        #endregion

        #region Private Methods

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// BindData gets the roles from the Database and binds them to the DataGrid
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        ///     [cnurse]    01/05/2006  Updated to reflect Use of Role Groups
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindData()
        {
            //Get the portal's roles from the database
            var objRoles = new RoleController();

            var arrRoles = _roleGroupId < -1 ? objRoles.GetPortalRoles(PortalId) : objRoles.GetRolesByGroup(PortalId, _roleGroupId);
            grdRoles.DataSource = arrRoles;

            if (_roleGroupId < 0)
            {
                lnkEditGroup.Visible = false;
                cmdDelete.Visible = false;
            }
            else
            {
                lnkEditGroup.Visible = true;
                lnkEditGroup.NavigateUrl = EditUrl("RoleGroupId", _roleGroupId.ToString(), "EditGroup");
                cmdDelete.Visible = arrRoles.Count == 0;
            }
            Localization.LocalizeDataGrid(ref grdRoles, LocalResourceFile);

            grdRoles.DataBind();
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
            ListItem liItem;
            ArrayList arrGroups = RoleController.GetRoleGroups(PortalId);

            if (arrGroups.Count > 0)
            {
                cboRoleGroups.Items.Clear();
                cboRoleGroups.Items.Add(new ListItem(Localization.GetString("AllRoles"), "-2"));

                liItem = new ListItem(Localization.GetString("GlobalRoles"), "-1");
                if (_roleGroupId < 0)
                {
                    liItem.Selected = true;
                }
                cboRoleGroups.Items.Add(liItem);

                foreach (RoleGroupInfo roleGroup in arrGroups)
                {
                    liItem = new ListItem(roleGroup.RoleGroupName, roleGroup.RoleGroupID.ToString());
                    if (_roleGroupId == roleGroup.RoleGroupID)
                    {
                        liItem.Selected = true;
                    }
                    cboRoleGroups.Items.Add(liItem);
                }
                divGroups.Visible = true;
            }
            else
            {
                _roleGroupId = -2;
                divGroups.Visible = false;
            }
            BindData();
        }

        #endregion

		#region "Public Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// FormatPeriod filters out Null values from the Period column of the Grid
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        public string FormatPeriod(int period)
        {
            var formatPeriod = Null.NullString;
            try
            {
                if (period != Null.NullInteger)
                {
                    formatPeriod = period.ToString();
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
            return formatPeriod;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// FormatPrice correctly formats the fee
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        public string FormatPrice(float price)
        {
            var formatPrice = Null.NullString;
            try
            {
                if (price != Null.NullSingle)
                {
                    formatPrice = price.ToString("##0.00");
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
            return formatPrice;
        }

		#endregion

		#region Event Handlers

		/// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_Init runs when the control is initialised
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            jQuery.RequestDnnPluginsRegistration();

            foreach (DataGridColumn column in grdRoles.Columns)
            {
                if (ReferenceEquals(column.GetType(), typeof (ImageCommandColumn)))
                {
					//Manage Delete Confirm JS
                    var imageColumn = (ImageCommandColumn) column;
                    imageColumn.Visible = IsEditable;
                    if (imageColumn.CommandName == "Delete")
                    {
                        imageColumn.OnClickJS = Localization.GetString("DeleteItem");
                    }
					
                    //Manage Edit Column NavigateURLFormatString
                    if (imageColumn.CommandName == "Edit")
                    {
                        //so first create the format string with a dummy value and then
                        //replace the dummy value with the FormatString place holder
                        string formatString = EditUrl("RoleID", "KEYFIELD", "Edit");
                        formatString = formatString.Replace("KEYFIELD", "{0}");
                        imageColumn.NavigateURLFormatString = formatString;
                    }
					
                    //Manage Roles Column NavigateURLFormatString
                    if (imageColumn.CommandName == "UserRoles")
                    {
                        //so first create the format string with a dummy value and then
                        //replace the dummy value with the FormatString place holder
                        string formatString = Globals.NavigateURL(TabId, "User Roles", "RoleId=KEYFIELD", "mid=" + ModuleId);
                        formatString = formatString.Replace("KEYFIELD", "{0}");
                        imageColumn.NavigateURLFormatString = formatString;
                    }
					
                    //Localize Image Column Text
                    if (!String.IsNullOrEmpty(imageColumn.CommandName))
                    {
                        imageColumn.Text = Localization.GetString(imageColumn.CommandName, LocalResourceFile);
                    }
                }
            }
        }

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

            cboRoleGroups.SelectedIndexChanged += OnRoleGroupIndexChanged;
            cmdDelete.Click += OnDeleteClick;
            grdRoles.ItemDataBound += OnRolesGridItemDataBound;

            try
            {
                if (!Page.IsPostBack)
                {
                    if ((Request.QueryString["RoleGroupID"] != null))
                    {
                        _roleGroupId = Int32.Parse(Request.QueryString["RoleGroupID"]);
                    }
                    BindGroups();
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Runs when the Index of the RoleGroups combo box changes
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	01/06/2006  created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnRoleGroupIndexChanged(object sender, EventArgs e)
        {
            _roleGroupId = Int32.Parse(cboRoleGroups.SelectedValue);
            BindData();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Runs when the Delete Button is clicked to delete a role group
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	01/06/2006  created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnDeleteClick(object sender, ImageClickEventArgs e)
        {
            _roleGroupId = Int32.Parse(cboRoleGroups.SelectedValue);
            if (_roleGroupId > -1)
            {
                RoleController.DeleteRoleGroup(PortalId, _roleGroupId);
                _roleGroupId = -1;
            }
            BindGroups();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// grdRoles_ItemDataBound runs when a row in the grid is bound
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	11/28/2008 Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnRolesGridItemDataBound(object sender, DataGridItemEventArgs e)
        {
            var item = e.Item;
            switch (item.ItemType)
            {
                case ListItemType.SelectedItem:
                case ListItemType.AlternatingItem:
                case ListItemType.Item:
                    {
                        var imgColumnControl = item.Controls[0].Controls[0];
                        if (imgColumnControl is HyperLink)
                        {
                            var editLink = (HyperLink) imgColumnControl;
                            var role = (RoleInfo) item.DataItem;
                            editLink.Visible = role.RoleName != PortalSettings.AdministratorRoleName || (PortalSecurity.IsInRole(PortalSettings.AdministratorRoleName));
                        }
                        imgColumnControl = item.Controls[1].Controls[0];
                        if (imgColumnControl is HyperLink)
                        {
                            var rolesLink = (HyperLink) imgColumnControl;
                            var role = (RoleInfo) item.DataItem;
                            rolesLink.Visible = role.RoleName != PortalSettings.AdministratorRoleName || (PortalSecurity.IsInRole(PortalSettings.AdministratorRoleName));
                        }
                    }
                    break;
            }
        }

        #endregion

    }
}