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
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Utilities;
using DotNetNuke.UI.WebControls;

#endregion

namespace DotNetNuke.Common.Lists
{
    /// -----------------------------------------------------------------------------
    /// <summary>
    /// Manages Entry List
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    ///     [tamttt]  20/10/2004	Created
    ///     [cnurse]  01/30/2007	Extracted to separate user control
    /// </history>
    /// -----------------------------------------------------------------------------

    public partial class ListEntries : PortalModuleBase
    {

		#region "Protected Properties"

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Gets and sets the DefinitionID of the current List
        /// </summary>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separate user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected int DefinitionID
        {
            get
            {
                if (ViewState["DefinitionID"] == null)
                {
                    ViewState["DefinitionID"] = Null.NullInteger;
                }
                return Convert.ToInt32(ViewState["DefinitionID"]);
            }
            set
            {
                ViewState["DefinitionID"] = value;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Property to determine if this list has custom sort order
        /// </summary>
        /// <remarks>
        ///     Up/Down button in datagrid will be visibled based on this property.
        ///     If disable, list will be sorted anphabetically
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separate user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected bool EnableSortOrder
        {
            get
            {
                if (ViewState["EnableSortOrder"] == null)
                {
                    ViewState["EnableSortOrder"] = false;
                }
                return Convert.ToBoolean(ViewState["EnableSortOrder"]);
            }
            set
            {
                ViewState["EnableSortOrder"] = value;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets the selected ListInfo
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse]  01/31/2007	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected ListInfo SelectedList
        {
            get
            {
                return GetList(SelectedKey, true);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets the selected collection of List Items
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse]  01/31/2007	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected ListEntryInfoCollection SelectedListItems
        {
            get
            {
                ListEntryInfoCollection list = null;
                if (SelectedList != null)
                {
                    var ctlLists = new ListController();
                    list = ctlLists.GetListEntryInfoCollection(SelectedList.Name, SelectedList.ParentKey, SelectedList.PortalID);
                }
                return list;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Property to determine if this list is system (DNN core)
        /// </summary>
        /// <remarks>
        ///     Default entries in system list can not be deleted
        ///     Entries in system list is sorted anphabetically
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separate user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected bool SystemList
        {
            get
            {
                if (ViewState["SystemList"] == null)
                {
                    ViewState["SystemList"] = false;
                }
                return Convert.ToBoolean(ViewState["SystemList"]);
            }
            set
            {
                ViewState["SystemList"] = value;
            }
        }

		#endregion

		#region "Public Properties"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Get or set the ListName for this set of List Entries
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse]  01/31/2007	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public string ListName
        {
            get
            {
                return ViewState["ListName"] != null ? ViewState["ListName"].ToString() : "";
            }
            set
            {
                ViewState["ListName"] = value;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets the portalId for this set of List Entries
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse]  01/31/2007	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public int ListPortalID
        {
            get
            {
                if (ViewState["ListPortalID"] == null)
                {
                    ViewState["ListPortalID"] = Null.NullInteger;
                }
                return Convert.ToInt32(ViewState["ListPortalID"]);
            }
            set
            {
                ViewState["ListPortalID"] = value;
            }
        }

        public string Mode
        {
            get
            {
                return ViewState["Mode"] != null ? ViewState["Mode"].ToString() : "";
            }
            set
            {
                ViewState["Mode"] = value;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Get or set the ParentKey for this set of List Entries
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse]  02/05/2007	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public string ParentKey
        {
            get
            {
                return ViewState["ParentKey"] != null ? ViewState["ParentKey"].ToString() : "";
            }
            set
            {
                ViewState["ParentKey"] = value;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets or sets the Selected key
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separate user control
        /// </history>
        /// -----------------------------------------------------------------------------
        public string SelectedKey
        {
            get
            {
                return ViewState["SelectedKey"] != null ? ViewState["SelectedKey"].ToString() : "";
            }
            set
            {
                ViewState["SelectedKey"] = value;
            }
        }

        public bool ShowDelete
        {
            get
            {
                return ViewState["ShowDelete"] != null && Convert.ToBoolean(ViewState["ShowDelete"]);
            }
            set
            {
                ViewState["ShowDelete"] = value;
            }
        }

        public event EventHandler ListCreated;
        public event EventHandler ListEntryCreated;

		#endregion

		#region "Private Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Loads top level entry list
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separate user control
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindGrid()
        {
            foreach (DataGridColumn column in grdEntries.Columns)
            {
                if (ReferenceEquals(column.GetType(), typeof (ImageCommandColumn)))
                {
					//Manage Delete Confirm JS
                    var imageColumn = (ImageCommandColumn) column;
                    if (imageColumn.CommandName == "Delete")
                    {
                        imageColumn.OnClickJS = Localization.GetString("DeleteItem");
                        if (SystemList)
                        {
                            column.Visible = false;
                        }
                        else
                        {
                            column.Visible = true;
                        }
                    }
					
					//Localize Image Column Text
                    if (!String.IsNullOrEmpty(imageColumn.CommandName))
                    {
                        imageColumn.Text = Localization.GetString(imageColumn.CommandName, LocalResourceFile);
                    }
                }
            }
            grdEntries.DataSource = SelectedListItems; //selList
            grdEntries.DataBind();
            if (SelectedListItems == null)
            {
                lblEntryCount.Text = "0 " + Localization.GetString("Entries", LocalResourceFile);
            }
            else
            {
                lblEntryCount.Text = SelectedListItems.Count + " " + Localization.GetString("Entries", LocalResourceFile);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Loads top level entry list
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separate user control
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindListInfo()
        {
            lblListName.Text = ListName;
            lblListParent.Text = ParentKey;
            rowListParent.Visible = (!String.IsNullOrEmpty(ParentKey));
            chkEnableSortOrder.Checked = EnableSortOrder;
            if (!SystemList && ShowDelete)
            {
                cmdDeleteList.Visible = true;
                ClientAPI.AddButtonConfirm(cmdDeleteList, Localization.GetString("DeleteItem"));
            }
            else
            {
                cmdDeleteList.Visible = false;
            }
            switch (Mode)
            {
                case "ListEntries":
                    EnableView(true);
                    break;
                case "EditEntry":
                    EnableView(false);
                    EnableEdit(false);
                    break;
                case "AddEntry":
                    EnableView(false);
                    EnableEdit(false);
                    if (SelectedList != null)
                    {
                        txtParentKey.Text = SelectedList.ParentKey;
                    }
                    else
                    {
                        rowEnableSortOrder.Visible = true;
                    }
                    txtEntryName.Text = ListName;
                    rowListName.Visible = false;
                    txtEntryValue.Text = "";
                    txtEntryText.Text = "";
                    cmdSaveEntry.CommandName = "SaveEntry";
                    break;
                case "AddList":
                    EnableView(false);
                    EnableEdit(true);

                    rowListName.Visible = true;
                    txtParentKey.Text = "";
                    txtEntryName.Text = "";
                    txtEntryValue.Text = "";
                    txtEntryText.Text = "";
                    txtEntryName.ReadOnly = false;
                    cmdSaveEntry.CommandName = "SaveList";

                    var ctlLists = new ListController();

                    ddlSelectList.Enabled = true;
                    ddlSelectList.DataSource = ctlLists.GetListInfoCollection();
                    ddlSelectList.DataTextField = "DisplayName";
                    ddlSelectList.DataValueField = "Key";
                    ddlSelectList.DataBind();
                    ddlSelectList.Items.Insert(0, new ListItem(Localization.GetString("None_Specified"), ""));
                    
					//Reset dropdownlist
					ddlSelectParent.ClearSelection();
                    ddlSelectParent.Enabled = false;

                    break;
            }
        }

        private void DeleteItem(int entryId)
        {
            if (SelectedListItems.Count > 1)
            {
                try
                {
                    var ctlLists = new ListController();
                    ctlLists.DeleteListEntryByID(entryId, true);
                    DataBind();
                }
                catch (Exception exc) //Module failed to load
                {
                    Exceptions.ProcessModuleLoadException(this, exc);
                }
            }
            else
            {
                DeleteList();
            }
        }

        private void DeleteList()
        {
            var ctlLists = new ListController();

            ctlLists.DeleteList(SelectedList, true);

            Response.Redirect(Globals.NavigateURL(TabId));
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Switching to edit mode, change controls visibility for editing depends on AddList params
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separate user control
        /// </history>
        /// -----------------------------------------------------------------------------
        private void EnableEdit(bool AddList)
        {
            rowListdetails.Visible = (!AddList);
            rowSelectList.Visible = AddList;
            rowSelectParent.Visible = AddList;
            rowEnableSortOrder.Visible = AddList;
            rowParentKey.Visible = false;
            cmdDelete.Visible = false;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Switching to view mode, change controls visibility for viewing
        /// </summary>
        /// <param name="ViewMode">Boolean value to determine View or Edit mode</param>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separate user control
        /// </history>
        /// -----------------------------------------------------------------------------
        private void EnableView(bool ViewMode)
        {
            rowListdetails.Visible = true;
            rowEntryGrid.Visible = ViewMode;
            rowEntryEdit.Visible = (!ViewMode);
        }

        private ListInfo GetList(string key, bool update)
        {
            var ctlLists = new ListController();
            int index = key.IndexOf(":");
            string _ListName = key.Substring(index + 1);
            string _ParentKey = Null.NullString;
            if (index > 0)
            {
                _ParentKey = key.Substring(0, index);
            }
            if (update)
            {
                ListName = _ListName;
                ParentKey = _ParentKey;
            }
            return ctlLists.GetListInfo(_ListName, _ParentKey, ListPortalID);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Loads top level entry list
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separate user control
        /// </history>
        /// -----------------------------------------------------------------------------
        private void InitList()
        {
            if (SelectedList != null)
            {
                DefinitionID = SelectedList.DefinitionID;
                EnableSortOrder = SelectedList.EnableSortOrder;
                SystemList = SelectedList.SystemList;
            }
        }

		#endregion

		#region "Public Methods"

        public override void DataBind()
        {
            InitList();
            BindListInfo();
            BindGrid();
        }
		
		#endregion

        #region Event Handlers

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Page load, bind tree and enable controls
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separte user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            try
            {
                if (!Page.IsPostBack)
                {
                    Mode = "ListEntries";
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            grdEntries.ItemCommand += EntriesGridItemCommand;
            ddlSelectList.SelectedIndexChanged += SelectListIndexChanged;
            cmdAddEntry.Click += OnAddEntryClick;
            cmdCancel.Click += OnCancelClick;
            cmdDelete.Click += OnDeleteClick;
            cmdDeleteList.Click += OnDeleteListClick;
            cmdSaveEntry.Click += OnSaveEntryClick;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Handles events when clicking image button in the grid (Edit/Up/Down)
        /// </summary>
        /// <param name="source"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separte user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void EntriesGridItemCommand(object source, DataGridCommandEventArgs e)
        {
            try
            {
                var ctlLists = new ListController();
                int entryID = Convert.ToInt32(((DataGrid) source).DataKeys[e.Item.ItemIndex]);

                switch (e.CommandName.ToLower())
                {
                    case "delete":
                        Mode = "ListEntries";
                        DeleteItem(entryID);
                        break;
                    case "edit":
                        Mode = "EditEntry";

                        ListEntryInfo entry = ctlLists.GetListEntryInfo(entryID);
                        txtEntryID.Text = entryID.ToString();
                        txtParentKey.Text = entry.ParentKey;
                        txtEntryValue.Text = entry.Value;
                        txtEntryText.Text = entry.Text;
                        rowListName.Visible = false;
                        cmdSaveEntry.CommandName = "Update";

                        if (!SystemList)
                        {
                            cmdDelete.Visible = true;
                            ClientAPI.AddButtonConfirm(cmdDelete, Localization.GetString("DeleteItem"));
                        }
                        else
                        {
                            cmdDelete.Visible = false;
                        }
                        DataBind();
                        break;
                    case "up":
                        ctlLists.UpdateListSortOrder(entryID, true);
                        DataBind();
                        break;
                    case "down":
                        ctlLists.UpdateListSortOrder(entryID, false);
                        DataBind();
                        break;
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Select a list in dropdownlist
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>        
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separte user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void SelectListIndexChanged(object sender, EventArgs e)
        {
            var ctlLists = new ListController();
            if(!String.IsNullOrEmpty(ddlSelectList.SelectedValue))
            {
                ListInfo selList = GetList(ddlSelectList.SelectedItem.Value, false);
                {
                    ddlSelectParent.Enabled = true;
                    ddlSelectParent.DataSource = ctlLists.GetListEntryInfoCollection(selList.Name, selList.ParentKey);
                    ddlSelectParent.DataTextField = "DisplayName";
                    ddlSelectParent.DataValueField = "EntryID";
                    ddlSelectParent.DataBind();
                }
            }
            else
            {
                ddlSelectParent.Enabled = false;
                ddlSelectParent.Items.Clear();
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Handles Add New Entry command
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        ///     Using "CommandName" property of cmdSaveEntry to determine this is a new entry of an existing list
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separte user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnAddEntryClick(object sender, EventArgs e)
        {
            Mode = "AddEntry";
            DataBind();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Handles cmdSaveEntry.Click
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        ///     Using "CommandName" property of cmdSaveEntry to determine action to take (ListUpdate/AddEntry/AddList)
        /// </remarks>
        /// <history>
        ///     [tamttt] 20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separte user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnSaveEntryClick(object sender, EventArgs e)
        {
            var ctlLists = new ListController();
            var entry = new ListEntryInfo();
            {
                entry.DefinitionID = Null.NullInteger;
                entry.PortalID = ListPortalID;
                entry.ListName = txtEntryName.Text;
                entry.Value = txtEntryValue.Text;
                entry.Text = txtEntryText.Text;
            }
            if (Page.IsValid)
            {
                Mode = "ListEntries";
                switch (cmdSaveEntry.CommandName.ToLower())
                {
                    case "update":
                        entry.ParentKey = SelectedList.ParentKey;
                        entry.EntryID = Int16.Parse(txtEntryID.Text);

                        ctlLists.UpdateListEntry(entry);

                        DataBind();
                        break;
                    case "saveentry":
                        if (SelectedList != null)
                        {
                            entry.ParentKey = SelectedList.ParentKey;
                            entry.ParentID = SelectedList.ParentID;
                            entry.Level = SelectedList.Level;
                        }
                        if (chkEnableSortOrder.Checked)
                        {
                            entry.SortOrder = 1;
                        }
                        else
                        {
                            entry.SortOrder = 0;
                        }
                        ctlLists.AddListEntry(entry);

                        DataBind();
                        break;
                    case "savelist":
                        if (ddlSelectParent.SelectedIndex != -1)
                        {
                            int parentID = Int32.Parse(ddlSelectParent.SelectedItem.Value);
                            ListEntryInfo parentEntry = ctlLists.GetListEntryInfo(parentID);
                            entry.ParentID = parentID;
                            entry.DefinitionID = parentEntry.DefinitionID;
                            entry.Level = parentEntry.Level + 1;
                            entry.ParentKey = parentEntry.Key;
                        }
                        if (chkEnableSortOrder.Checked)
                        {
                            entry.SortOrder = 1;
                        }
                        else
                        {
                            entry.SortOrder = 0;
                        }
                        ctlLists.AddListEntry(entry);

                        SelectedKey = entry.ParentKey.Replace(":", ".") + ":" + entry.ListName;

                        Response.Redirect(Globals.NavigateURL(TabId, "", "Key=" + SelectedKey));
                        break;
                }
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Delete List
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separte user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnDeleteListClick(object sender, EventArgs e)
        {
            DeleteList();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Delete List
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        ///     If deleting entry is not the last one in the list, rebinding the grid, otherwise return back to main page (rebinding DNNTree)
        /// </remarks>
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separte user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnDeleteClick(object sender, EventArgs e)
        {
            DeleteItem(Convert.ToInt32(txtEntryID.Text));
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Cancel
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>       
        /// <history>
        ///     [tamttt]  20/10/2004	Created
        ///     [cnurse]  01/30/2007	Extracted to separte user control
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnCancelClick(object sender, EventArgs e)
        {
            try
            {
                Mode = "ListEntries";
                if (!String.IsNullOrEmpty(SelectedKey))
                {
                    DataBind();
                }
                else
                {
                    Response.Redirect(Globals.NavigateURL(TabId));
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnListCreated(EventArgs e)
        {
            if (ListCreated != null)
            {
                ListCreated(this, e);
            }
        }

        protected void OnListEntryCreated(EventArgs e)
        {
            if (ListEntryCreated != null)
            {
                ListEntryCreated(this, e);
            }
        }

        #endregion

    }
}