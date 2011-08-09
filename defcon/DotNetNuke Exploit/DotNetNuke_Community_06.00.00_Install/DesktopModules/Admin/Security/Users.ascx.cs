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

using DotNetNuke.Common.Lists;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Modules.Actions;
using DotNetNuke.Entities.Profile;
using DotNetNuke.Entities.Users;
using DotNetNuke.Security;
using DotNetNuke.Security.Profile;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Skins.Controls;
using DotNetNuke.UI.Utilities;
using DotNetNuke.UI.WebControls;

using Globals = DotNetNuke.Common.Globals;

#endregion

namespace DotNetNuke.Modules.Admin.Users
{
    /// -----------------------------------------------------------------------------
    /// <summary>
    /// The Users PortalModuleBase is used to manage the Registered Users of a portal
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
    ///                       and localisation
    ///     [cnurse]    02/16/2006  Updated to reflect custom profile definitions
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class UserAccounts : PortalModuleBase, IActionable
    {
		#region "Private Members"

        protected int TotalPages = -1;
        protected int TotalRecords;
        private int _currentPage = 1;
        private string _filter = "";
        private string _filterProperty = "";
        private ArrayList _users = new ArrayList();

		#endregion

		#region "Protected Members"

        protected int CurrentPage
        {
            get
            {
                return _currentPage;
            }
            set
            {
                _currentPage = value;
            }
        }

        protected string Filter
        {
            get
            {
                return _filter;
            }
            set
            {
                _filter = value;
            }
        }

        protected string FilterProperty
        {
            get
            {
                return _filterProperty;
            }
            set
            {
                _filterProperty = value;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets whether we are dealing with SuperUsers
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/02/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected bool IsSuperUser
        {
            get
            {
            	return Globals.IsHostTab(PortalSettings.ActiveTab.TabID);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets the Page Size for the Grid
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/02/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected int PageSize
        {
            get
            {
                var setting = UserModuleBase.GetSetting(UsersPortalId, "Records_PerPage");
                return Convert.ToInt32(setting);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets a flag that determines whether to suppress the Pager (when not required)
        /// </summary>
        /// <history>
        /// 	[cnurse]	08/10/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected bool SuppressPager
        {
            get
            {
                var setting = UserModuleBase.GetSetting(UsersPortalId, "Display_SuppressPager");
                return Convert.ToBoolean(setting);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets the Portal Id whose Users we are managing
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/02/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected int UsersPortalId
        {
            get
            {
                var intPortalId = PortalId;
                if (IsSuperUser)
                {
                    intPortalId = Null.NullInteger;
                }
                return intPortalId;
            }
        }

        protected ArrayList Users
        {
            get
            {
                return _users;
            }
            set
            {
                _users = value;
            }
        }
		#endregion

        #region IActionable Members

        public ModuleActionCollection ModuleActions
        {
            get
            {
                var Actions = new ModuleActionCollection();
                var FilterParams = new string[String.IsNullOrEmpty(txtSearch.Text.Trim()) ? 2 : 3];
                if (String.IsNullOrEmpty(txtSearch.Text.Trim()))
                {
                    FilterParams.SetValue("filter=" + Filter, 0);
                    FilterParams.SetValue("currentpage=" + CurrentPage, 1);
                }
                else
                {
                    FilterParams.SetValue("filter=" + txtSearch.Text, 0);
                    FilterParams.SetValue("filterproperty=" + ddlSearchType == null ? "" : ddlSearchType.SelectedValue, 1);
                    FilterParams.SetValue("currentpage=" + CurrentPage, 2);
                }
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
                            Localization.GetString("RemoveDeleted.Action", LocalResourceFile),
                            ModuleActionType.AddContent,
                            "Remove",
                            "delete.gif",
                            "",
                            "confirm('" + ClientAPI.GetSafeJSString(Localization.GetString("RemoveItems.Confirm")) + "')",
                            true,
                            SecurityAccessLevel.Edit,
                            true,
                            false);
                if (!IsSuperUser)
                {

                    Actions.Add(GetNextActionID(),
                                Localization.GetString("DeleteUnAuthorized.Action", LocalResourceFile),
                                ModuleActionType.AddContent,
                                "Delete",
                                "action_delete.gif",
                                "",
                                "confirm('" + ClientAPI.GetSafeJSString(Localization.GetString("DeleteItems.Confirm")) + "')",
                                true,
                                SecurityAccessLevel.Edit,
                                true,
                                false);
                }
                if (ProfileProviderConfig.CanEditProviderProperties)
                {
                    Actions.Add(GetNextActionID(),
                                Localization.GetString("ManageProfile.Action", LocalResourceFile),
                                ModuleActionType.AddContent,
                                "",
                                "icon_profile_16px.gif",
                                EditUrl("ManageProfile"),
                                false,
                                SecurityAccessLevel.Edit,
                                true,
                                false);
                }
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
		
		#region "Private Methods"

        protected string UserFilter(bool newFilter)
        {
            var page = !string.IsNullOrEmpty(CurrentPage.ToString()) ? "currentpage=" + CurrentPage : "";
            string filterString;
            string filterPropertyString;
            if (!newFilter)
            {
                filterString = !string.IsNullOrEmpty(Filter) ? "filter=" + Filter : "";
                filterPropertyString = !string.IsNullOrEmpty(FilterProperty) ? "filterproperty=" + FilterProperty : "";
            }
            else
            {
                filterString = !string.IsNullOrEmpty(txtSearch.Text) ? "filter=" + Server.UrlEncode(txtSearch.Text) : "";
                filterPropertyString = !string.IsNullOrEmpty(ddlSearchType.SelectedValue) ? "filterproperty=" + ddlSearchType.SelectedValue : "";
            }
            if (!string.IsNullOrEmpty(filterString))
            {
                filterString += "&";
            }
            if (!string.IsNullOrEmpty(filterPropertyString))
            {
                filterString += filterPropertyString + "&";
            }
            if (!string.IsNullOrEmpty(page))
            {
                filterString += page;
            }
            return filterString;
        }

        private ListItem AddSearchItem(string name)
        {
            var propertyName = Null.NullString;
            if (Request.QueryString["filterProperty"] != null)
            {
                propertyName = Request.QueryString["filterProperty"];
            }
            var text = Localization.GetString(name, LocalResourceFile);
            if (String.IsNullOrEmpty(text))
            {
                text = name;
            }
            var li = new ListItem(text, name);
            if (name == propertyName)
            {
                li.Selected = true;
            }
            return li;
        }

        //private void BindData()
        //{
        //    BindData(null, null);
        //}

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// BindData gets the users from the Database and binds them to the DataGrid
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <param name="SearchText">Text to Search</param>
        /// <param name="SearchField">Field to Search</param>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindData(string searchText, string searchField)
        {
            CreateLetterSearch();

            var strQuerystring = Null.NullString;
            if (!String.IsNullOrEmpty(searchText))
            {
                strQuerystring += "filter=" + searchText;
            }

            if (searchText == Localization.GetString("Unauthorized"))
            {
                Users = UserController.GetUnAuthorizedUsers(UsersPortalId, true, IsSuperUser);
                ctlPagingControl.Visible = false;
            }
            else if (searchText == Localization .GetString("Deleted"))
            {
                Users = UserController.GetDeletedUsers(UsersPortalId);
                ctlPagingControl.Visible = false;
            }
            else if (searchText == Localization.GetString("OnLine"))
            {
                Users = UserController.GetOnlineUsers(UsersPortalId);
                ctlPagingControl.Visible = false;
            }
            else if (searchText == Localization.GetString("All"))
            {
                Users = UserController.GetUsers(UsersPortalId, CurrentPage - 1, PageSize, ref TotalRecords, true, IsSuperUser);
                
            }
            else if (searchText != "None")
            {
                switch (searchField)
                {
                    case "Email":
                        Users = UserController.GetUsersByEmail(UsersPortalId, searchText + "%", CurrentPage - 1, PageSize, ref TotalRecords, true, IsSuperUser);
                        break;
                    case "Username":
                        Users = UserController.GetUsersByUserName(UsersPortalId, searchText + "%", CurrentPage - 1, PageSize, ref TotalRecords, true, IsSuperUser);
                        break;
                    default:
                        Users = UserController.GetUsersByProfileProperty(UsersPortalId, searchField, searchText + "%", CurrentPage - 1, PageSize, ref TotalRecords, true, IsSuperUser);
                        strQuerystring += "&filterProperty=" + searchField;
                        break;
                }
            }
            if (SuppressPager && ctlPagingControl.Visible)
            {
                ctlPagingControl.Visible = (PageSize < TotalRecords);
            }
            grdUsers.DataSource = Users;
            grdUsers.DataBind();
            ctlPagingControl.TotalRecords = TotalRecords;
            ctlPagingControl.PageSize = PageSize;
            ctlPagingControl.CurrentPage = CurrentPage;
            ctlPagingControl.QuerystringParams = strQuerystring;
            ctlPagingControl.TabID = TabId;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Builds the letter filter
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        private void CreateLetterSearch()
        {
            var filters = Localization.GetString("Filter.Text", LocalResourceFile);

            filters += "," + Localization.GetString("All");
            filters += "," + Localization.GetString("OnLine");
            filters += "," + Localization.GetString("Unauthorized");
            filters += "," + Localization.GetString("Deleted");
            var strAlphabet = filters.Split(',');
            rptLetterSearch.DataSource = strAlphabet;
            rptLetterSearch.DataBind();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Deletes all unauthorized users
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/02/2006	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void DeleteUnAuthorizedUsers()
        {
            try
            {
                UserController.DeleteUnauthorizedUsers(PortalId);
                BindData(Filter, ddlSearchType.SelectedItem.Value);
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        private void RemoveDeletedUsers()
        {
            try
            {
                UserController.RemoveDeletedUsers(UsersPortalId);
                BindData(Filter, ddlSearchType.SelectedItem.Value);
            }
            catch (Exception exc)   //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        private bool IsCommandAllowed(UserInfo user, string command)
        {
            var immageVisibility = user.UserID != PortalSettings.AdministratorId && (!user.IsInRole(PortalSettings.AdministratorRoleName) || (PortalSecurity.IsInRole(PortalSettings.AdministratorRoleName))) && user.UserID != UserId;

            if ((immageVisibility))
            {
                switch (command)
                {
                    case "Delete":
                        if ((user.IsDeleted))
                        {
                            immageVisibility = false;
                        }
                        break;
                    case "Restore":
                    case "Remove":
                        immageVisibility = (user.IsDeleted);
                        break;
                }
            }
            return immageVisibility;
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
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        public string DisplayAddress(object unit, object street, object city, object region, object country, object postalCode)
        {
            var address = Null.NullString;
            try
            {
                address = Globals.FormatAddress(unit, street, city, region, country, postalCode);
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
            return address;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// DisplayEmail correctly formats an Email Address
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        public string DisplayEmail(string email)
        {
            var _Email = Null.NullString;
            try
            {
                if (email != null)
                {
                    _Email = HtmlUtils.FormatEmail(email, false);
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
            return _Email;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// DisplayDate correctly formats the Date
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        public string DisplayDate(DateTime userDate)
        {
            var date = Null.NullString;
            try
            {
                date = !Null.IsNull(userDate) ? userDate.ToString() : "";
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
            return date;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// FormatURL correctly formats the Url for the Edit User Link
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/10/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected string FormatURL(string strKeyName, string strKeyValue)
        {
            var url = Null.NullString;
            try
            {
                url = !String.IsNullOrEmpty(Filter) ? EditUrl(strKeyName, strKeyValue, "", "filter=" + Filter) : EditUrl(strKeyName, strKeyValue);
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
            return url;
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
        protected string FilterURL(string filter, string currentPage)
        {
            string url;
            if (!String.IsNullOrEmpty(Filter))
            {
                url = !String.IsNullOrEmpty(currentPage) ? Globals.NavigateURL(TabId, "", "filter=" + filter, "currentpage=" + CurrentPage) : Globals.NavigateURL(TabId, "", "filter=" + filter);
            }
            else
            {
                url = !String.IsNullOrEmpty(currentPage) ? Globals.NavigateURL(TabId, "", "currentpage=" + CurrentPage) : Globals.NavigateURL(TabId, "");
            }
            return url;
        }

		#endregion

		#region "Event Handlers"

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

            if (Request.QueryString["CurrentPage"] != null)
            {
                CurrentPage = Convert.ToInt32(Request.QueryString["CurrentPage"]);
            }
            if (Request.QueryString["filter"] != null)
            {
                Filter = Request.QueryString["filter"];
            }
            if (Request.QueryString["filterproperty"] != null)
            {
                FilterProperty = Request.QueryString["filterproperty"];
            }
            if (String.IsNullOrEmpty(Filter))
            {
				//Get Default View
                var setting = UserModuleBase.GetSetting(UsersPortalId, "Display_Mode");
                var mode = (DisplayMode) Convert.ToInt32(setting);
                switch (mode)
                {
                    case DisplayMode.All:
                        Filter = Localization.GetString("All");
                        break;
                    case DisplayMode.FirstLetter:
                        Filter = Localization.GetString("Filter.Text", LocalResourceFile).Substring(0, 1);
                        break;
                    case DisplayMode.None:
                        Filter = "None";
                        break;
                }
            }
            foreach (DataGridColumn column in grdUsers.Columns)
            {
                bool isVisible;
                var header = column.HeaderText;
                if (String.IsNullOrEmpty(header) || header.ToLower() == "username")
                {
                    isVisible = true;
                }
                else
                {
                    var settingKey = "Column_" + header;
                    var setting = UserModuleBase.GetSetting(UsersPortalId, settingKey);
                    isVisible = Convert.ToBoolean(setting);
                }
                if (ReferenceEquals(column.GetType(), typeof (ImageCommandColumn)))
                {
                    isVisible = IsEditable;

                    //Manage Delete Confirm JS
                    var imageColumn = (ImageCommandColumn) column;
                    switch (imageColumn.CommandName)
                    {
                        case "Delete":
                            imageColumn.OnClickJS = Localization.GetString("DeleteItem");
                            break;
                        case "Remove":
                            imageColumn.OnClickJS = Localization.GetString("RemoveItem");
                            break;
                    }
					
                	//Manage Edit Column NavigateURLFormatString
                	if (imageColumn.CommandName == "Edit")
                    {
                        //so first create the format string with a dummy value and then
                        //replace the dummy value with the FormatString place holder
                        var formatString = EditUrl("UserId", "KEYFIELD", "Edit", UserFilter(false));
                        formatString = formatString.Replace("KEYFIELD", "{0}");
                        imageColumn.NavigateURLFormatString = formatString;
                    }
					
                    //Manage Roles Column NavigateURLFormatString
                    if (imageColumn.CommandName == "UserRoles")
                    {
                        if (IsHostMenu)
                        {
                            isVisible = false;
                        }
                        else
                        {
							//The Friendly URL parser does not like non-alphanumeric characters
                            //so first create the format string with a dummy value and then
                            //replace the dummy value with the FormatString place holder
                            var formatString = EditUrl("UserId", "KEYFIELD", "User Roles", UserFilter(false));
                            formatString = formatString.Replace("KEYFIELD", "{0}");
                            imageColumn.NavigateURLFormatString = formatString;
                        }
                    }
					
					//Localize Image Column Text
                    if (!String.IsNullOrEmpty(imageColumn.CommandName))
                    {
                        imageColumn.Text = Localization.GetString(imageColumn.CommandName, LocalResourceFile);
                    }
                }
                column.Visible = isVisible;
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

            cmdSearch.Click += OnSearchClick;            
            grdUsers.ItemDataBound += grdUsers_ItemDataBound;
            grdUsers.ItemCommand += grdUsers_ItemCommand;

            try
            {
                //Add an Action Event Handler to the Skin
                AddActionHandler(ModuleAction_Click);

                if (!Page.IsPostBack)
                {
					//Load the Search Combo
                    ddlSearchType.Items.Add(AddSearchItem("Username"));
                    ddlSearchType.Items.Add(AddSearchItem("Email"));
                    ProfilePropertyDefinitionCollection profileProperties = ProfileController.GetPropertyDefinitionsByPortal(PortalId, false);
                    foreach (ProfilePropertyDefinition definition in profileProperties)
                    {
                        var controller = new ListController();
                        ListEntryInfo imageDataType = controller.GetListEntryInfo("DataType", "Image");
                        if (imageDataType == null || definition.DataType == imageDataType.EntryID)
                        {
                            break;
                        }
                        ddlSearchType.Items.Add(AddSearchItem(definition.PropertyName));
                    }
                    //Localize the Headers
                    Localization.LocalizeDataGrid(ref grdUsers, LocalResourceFile);
                    BindData(Filter, ddlSearchType.SelectedItem.Value);
                    
					//Sent controls to current Filter
					if ((!String.IsNullOrEmpty(Filter) && Filter.ToUpper() != "NONE") && !String.IsNullOrEmpty(FilterProperty))
                    {
                        txtSearch.Text = Filter;
                        ddlSearchType.SelectedValue = FilterProperty;
                    }
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// ModuleAction_Click handles all ModuleAction events raised from the skin
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <param name="sender"> The object that triggers the event</param>
        /// <param name="e">An ActionEventArgs object</param>
        /// <history>
        /// 	[cnurse]	03/02/2006	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void ModuleAction_Click(object sender, ActionEventArgs e)
        {
            switch (e.Action.CommandArgument)
            {
                case "Delete":
                    DeleteUnAuthorizedUsers();
                    break;
                case "Remove":
                    RemoveDeletedUsers();
                    break;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// btnSearch_Click runs when the user searches for accounts by username or email
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[dancaron]	10/28/2004	Intial Version
        /// </history>
        /// -----------------------------------------------------------------------------
        private void OnSearchClick(Object sender, EventArgs e)
        {
            CurrentPage = 1;
            txtSearch.Text = txtSearch.Text.Trim();
            Response.Redirect(Globals.NavigateURL(TabId, "", UserFilter(true)));
        }

        private void grdUsers_ItemCommand(object source, DataGridCommandEventArgs e)
        {
            switch (e.CommandName)
            {
                case "Delete":
                    grdUsers_DeleteCommand(source, e);
                    break;
                case "Remove":
                    grdUsers_RemoveCommand(source, e);
                    break;
                case "Restore":
                    grdUsers_RestoreCommand(source, e);
                    break;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// grdUsers_DeleteCommand runs when the icon in the delete column is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	01/05/2007	Intial documentation
        /// </history>
        /// -----------------------------------------------------------------------------
        private void grdUsers_DeleteCommand(object source, DataGridCommandEventArgs e)
        {            
            try
            {
                var userId = Int32.Parse(e.CommandArgument.ToString());
                var user = UserController.GetUserById(UsersPortalId, userId);
                if (user != null)
                {
                    if (UserController.DeleteUser(ref user, true, false))
                    {
                        UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("UserDeleted", LocalResourceFile), ModuleMessage.ModuleMessageType.GreenSuccess);
                    }
                    else
                    {
                        UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("UserDeleteError", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                    }
                }
                if (!String.IsNullOrEmpty(txtSearch.Text))
                {
                    Filter = txtSearch.Text;
                }
                BindData(Filter, ddlSearchType.SelectedItem.Value);
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        private void grdUsers_RemoveCommand(object source, DataGridCommandEventArgs e)
        {            
            try
            {
                var userId = Int32.Parse(e.CommandArgument.ToString());
                UserInfo user = UserController.GetUserById(UsersPortalId, userId);

                if ((user != null))
                {
                    if (UserController.RemoveUser(user))
                    {
                        UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("UserRemoved", this.LocalResourceFile), ModuleMessage.ModuleMessageType.GreenSuccess);
                    }
                    else
                    {
                        UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("UserRemoveError", this.LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                    }
                }

                if (!string.IsNullOrEmpty(txtSearch.Text))
                {
                    Filter = txtSearch.Text;
                }
                BindData(Filter, ddlSearchType.SelectedItem.Value);

            }
            catch (Exception exc)   //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        private void grdUsers_RestoreCommand(object source, DataGridCommandEventArgs e)
        {            
            try
            {
                var userId = Int32.Parse(e.CommandArgument.ToString());
                var user = UserController.GetUserById(UsersPortalId, userId);

                if ((user != null))
                {
                    if (UserController.RestoreUser(ref user))
                    {
                        UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("UserRestored", this.LocalResourceFile), ModuleMessage.ModuleMessageType.GreenSuccess);
                    }
                    else
                    {
                        UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("UserRestoreError", this.LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                    }
                }

                if (!string.IsNullOrEmpty(txtSearch.Text))
                {
                    Filter = txtSearch.Text;
                }
                BindData(Filter, ddlSearchType.SelectedItem.Value);

                //Module failed to load
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// grdUsers_ItemDataBound runs when a row in the grid is bound
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	01/05/2007	Intial documentation
        /// </history>
        /// -----------------------------------------------------------------------------
        private void grdUsers_ItemDataBound(object sender, DataGridItemEventArgs e)
        {
            var item = e.Item;
            if (item.ItemType == ListItemType.Item || item.ItemType == ListItemType.AlternatingItem || item.ItemType == ListItemType.SelectedItem)
            {
                var imgApprovedDeleted = item.FindControl("imgApprovedDeleted");
                var imgNotApprovedDeleted = item.FindControl("imgNotApprovedDeleted");
                var imgApproved = item.FindControl("imgApproved");
                var imgNotApproved = item.FindControl("imgNotApproved");

                var user = (UserInfo) item.DataItem;
                if (user != null)
                {
                    if (user.IsDeleted)
                    {
                        foreach (WebControl control in item.Controls)
                        {
                            control.Attributes.Remove("class");
                            control.Attributes.Add("class", "NormalDeleted");
                        }
                        if (imgApprovedDeleted != null && user.Membership.Approved)
                        {
                            imgApprovedDeleted.Visible = true;
                        }
                        else if (imgNotApprovedDeleted != null && !user.Membership.Approved)
                        {
                            imgNotApprovedDeleted.Visible = true;
                        }
                    }
                    else
                    {
                        if (imgApproved != null && user.Membership.Approved)
                        {
                            imgApproved.Visible = true;
                        }
                        else if (imgNotApproved != null && !user.Membership.Approved)
                        {
                            imgNotApproved.Visible = true;
                        }
                    }
                }

                var imgColumnControl = item.Controls[0].Controls[0];
                if (imgColumnControl is HyperLink)
                {
                    var editLink = (HyperLink)imgColumnControl;

                    editLink.Visible = !user.IsInRole(PortalSettings.AdministratorRoleName) || (PortalSecurity.IsInRole(PortalSettings.AdministratorRoleName));
                }

                imgColumnControl = item.Controls[1].Controls[0];
                if (imgColumnControl is ImageButton)
                {
                    var delImage = (ImageButton)imgColumnControl;                    
                    delImage.Visible = IsCommandAllowed(user, "Delete");
                }


                imgColumnControl = item.Controls[2].Controls[0];
                if (imgColumnControl is HyperLink)
                {
                    var rolesLink = (HyperLink) imgColumnControl;

                    rolesLink.Visible = !user.IsInRole(PortalSettings.AdministratorRoleName) || (PortalSecurity.IsInRole(PortalSettings.AdministratorRoleName));
                }

                imgColumnControl = item.Controls[3].FindControl("imgOnline");
                if (imgColumnControl is Image)
                {
                    var userOnlineImage = (System.Web.UI.WebControls.Image)imgColumnControl;
                    userOnlineImage.Visible = user.Membership.IsOnLine;
                }

                imgColumnControl = item.Controls[3].Controls[0];
                if (imgColumnControl is ImageButton)
                {
                    var restoreImage = (ImageButton)imgColumnControl;
                    restoreImage.Visible = IsCommandAllowed(user, "Restore");
                }

                imgColumnControl = item.Controls[4].Controls[0];
                if (imgColumnControl is ImageButton)
                {
                    ImageButton removeImage = (ImageButton)imgColumnControl;
                    removeImage.Visible = IsCommandAllowed(user, "Remove");
                }
            }
        }
		
		#endregion

    }
}