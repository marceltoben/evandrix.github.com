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
using System.Web.UI;
using System.Web.UI.WebControls;

using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Modules.Actions;
using DotNetNuke.Security;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Vendors;
using DotNetNuke.UI.Utilities;

using Globals = DotNetNuke.Common.Globals;

#endregion

namespace DotNetNuke.Modules.Admin.Vendors
{
	/// -----------------------------------------------------------------------------
	/// <summary>
	/// The Vendors PortalModuleBase is used to manage the Vendors of a portal
	/// </summary>
    /// <remarks>
	/// </remarks>
	/// <history>
	/// 	[cnurse]	9/17/2004	Updated to reflect design changes for Help, 508 support
	///                       and localisation
	/// </history>
	/// -----------------------------------------------------------------------------
    public partial class Vendors : PortalModuleBase, IActionable
    {
        protected int CurrentPage = -1;
        protected int TotalPages = -1;
        protected Label lblMessage;
        private string strFilter;

        #region IActionable Members

        public ModuleActionCollection ModuleActions
        {
            get
            {
                var actions = new ModuleActionCollection();
                actions.Add(GetNextActionID(),
                            Localization.GetString(ModuleActionType.AddContent, LocalResourceFile),
                            ModuleActionType.AddContent,
                            "",
                            "",
                            EditUrl(),
                            false,
                            SecurityAccessLevel.Edit,
                            true,
                            false);
                if(IsEditable)
                {
                    actions.Add(GetNextActionID(),
                                Localization.GetString("cmdDelete", LocalResourceFile),
                                ModuleActionType.AddContent,
                                "Delete",
                                "delete.gif",
                                "",
                                "confirm('" + ClientAPI.GetSafeJSString(Localization.GetString("DeleteItems.Confirm")) + "')",
                                true,
                                SecurityAccessLevel.Admin,
                                true,
                                false);
                }
                return actions;
            }
        }

        #endregion

		#region "Private Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// BindData gets the vendors from the Database and binds them to the DataGrid
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/17/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindData()
        {
            BindData(null, null);
        }

        private void BindData(string searchText, string searchField)
        {
            CreateLetterSearch();

            //Localize the Headers
            Localization.LocalizeDataGrid(ref grdVendors, LocalResourceFile);

            if (searchText == Localization.GetString("All"))
            {
                strFilter = "";
            }
            else if (searchText == Localization.GetString("Unauthorized"))
            {
                strFilter = "";
            }
            else
            {
                strFilter = searchText;
            }
			
            //Get the list of vendors from the database
            var PageSize = Convert.ToInt32(ddlRecordsPerPage.SelectedItem.Value);
            var TotalRecords = 0;
            var objVendors = new VendorController();
            int Portal = Globals.IsHostTab(PortalSettings.ActiveTab.TabID) ? Null.NullInteger : PortalId;
            
			if (String.IsNullOrEmpty(strFilter))
            {
                if (searchText == Localization.GetString("Unauthorized"))
                {
                    grdVendors.DataSource = objVendors.GetVendors(Portal, true, CurrentPage - 1, PageSize, ref TotalRecords);
                }
                else
                {
                    grdVendors.DataSource = objVendors.GetVendors(Portal, false, CurrentPage - 1, PageSize, ref TotalRecords);
                }
            }
            else
            {
                if (searchField == "email")
                {
                    grdVendors.DataSource = objVendors.GetVendorsByEmail(strFilter, Portal, CurrentPage - 1, PageSize, ref TotalRecords);
                }
                else
                {
                    grdVendors.DataSource = objVendors.GetVendorsByName(strFilter, Portal, CurrentPage - 1, PageSize, ref TotalRecords);
                }
            }
            grdVendors.DataBind();

            ctlPagingControl.TotalRecords = TotalRecords;
            ctlPagingControl.PageSize = PageSize;
            ctlPagingControl.CurrentPage = CurrentPage;
            string strQuerystring = "";
            if (ddlRecordsPerPage.SelectedIndex != 0)
            {
                strQuerystring = "PageRecords=" + ddlRecordsPerPage.SelectedValue;
            }
            if (!String.IsNullOrEmpty(strFilter))
            {
                strQuerystring += "&filter=" + strFilter;
            }
            ctlPagingControl.QuerystringParams = strQuerystring;
            ctlPagingControl.TabID = TabId;
        }

        private void CreateLetterSearch()
        {
            string[] strAlphabet = {
                                       "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", Localization.GetString("All"),
                                       Localization.GetString("Unauthorized")
                                   };
            rptLetterSearch.DataSource = strAlphabet;
            rptLetterSearch.DataBind();
        }

		#endregion

		#region "Public Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// DisplayAddress correctly formats an Address
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/17/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        public string DisplayAddress(object Unit, object Street, object City, object Region, object Country, object PostalCode)
        {
            return Globals.FormatAddress(Unit, Street, City, Region, Country, PostalCode);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// FormatURL correctly formats the Url for the Edit Vendor Link
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/17/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        public string FormatURL(string strKeyName, string strKeyValue)
        {
            return !String.IsNullOrEmpty(strFilter) ? EditUrl(strKeyName, strKeyValue, "", "filter=" + strFilter) : EditUrl(strKeyName, strKeyValue);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// FilterURL correctly formats the Url for filter by first letter and paging
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected string FilterURL(string Filter, string CurrentPage)
        {
            if (!String.IsNullOrEmpty(Filter))
            {
                if (!String.IsNullOrEmpty(CurrentPage))
                {
                    return Globals.NavigateURL(TabId, "", "filter=" + Filter, "currentpage=" + CurrentPage, "PageRecords=" + ddlRecordsPerPage.SelectedValue);
                }
                else
                {
                    return Globals.NavigateURL(TabId, "", "filter=" + Filter, "PageRecords=" + ddlRecordsPerPage.SelectedValue);
                }
            }
            else
            {
                if (!String.IsNullOrEmpty(CurrentPage))
                {
                    return Globals.NavigateURL(TabId, "", "currentpage=" + CurrentPage, "PageRecords=" + ddlRecordsPerPage.SelectedValue);
                }
                else
                {
                    return Globals.NavigateURL(TabId, "", "PageRecords=" + ddlRecordsPerPage.SelectedValue);
                }
            }
        }

		#endregion

		#region "Event Handlers"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_Load runs when the control is loaded
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/17/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            grdVendors.ItemCommand += grdVendors_ItemCommand;
            ddlRecordsPerPage.SelectedIndexChanged += OnRecordsPerPageIndexChanged;
            btnSearch.Click += OnSearchClick;

			ClientAPI.RegisterKeyCapture(txtSearch, btnSearch, 13);

            try
            {
            	AddActionHandler(OnModuleActionClick);

                CurrentPage = Request.QueryString["CurrentPage"] != null ? Convert.ToInt32(Request.QueryString["CurrentPage"]) : 1;
                strFilter = Request.QueryString["filter"] ?? "";
                if (!Page.IsPostBack)
                {
                    if (Request.QueryString["PageRecords"] != null)
                    {
                        ddlRecordsPerPage.SelectedValue = Request.QueryString["PageRecords"];
                    }
                    BindData(strFilter, "username");
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnModuleActionClick(object sender, ActionEventArgs e)
        {
            switch (e.Action.CommandArgument)
            {
                case "Delete":
                    try
                    {
                        var objVendors = new VendorController();
						if (Globals.IsHostTab(PortalSettings.ActiveTab.TabID))
                        {
                            objVendors.DeleteVendors();
                        }
                        else
                        {
                            objVendors.DeleteVendors(PortalId);
                        }
                        Response.Redirect(Globals.NavigateURL(), true);
                    }
                    catch (Exception exc) //Module failed to load
                    {
                        Exceptions.ProcessModuleLoadException(this, exc);
                    }                    
                    break;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// grdVendors_ItemCommand runs when a command button in the grid is clicked.
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/17/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void grdVendors_ItemCommand(object source, DataGridCommandEventArgs e)
        {
            try
            {
                if (e.CommandName == "filter")
                {
                    strFilter = e.CommandArgument.ToString();
                    CurrentPage = 1;
                    txtSearch.Text = "";
                    BindData(strFilter, "username");
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// ddlRecordsPerPage_SelectedIndexChanged runs when the user selects a new
        /// Records Per Page value from the dropdown.
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[dancaron]	10/28/2004	Intial Version
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnRecordsPerPageIndexChanged(Object sender, EventArgs e)
        {
            CurrentPage = 1;
            BindData();
        }

        protected void OnSearchClick(Object sender, EventArgs e)
        {
            CurrentPage = 1;
            BindData(txtSearch.Text, ddlSearchType.SelectedItem.Value);
        }
		
		#endregion

    }
}