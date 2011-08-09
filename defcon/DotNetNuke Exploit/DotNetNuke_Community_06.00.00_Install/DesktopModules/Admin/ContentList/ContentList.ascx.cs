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
using System.Data;
using System.Linq;
using System.Web;
using System.Web.UI.WebControls;
using DotNetNuke.Common;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Content;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Security;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Skins.Controls;

#endregion

namespace DotNetNuke.Modules.ContentList
{

    public partial class ContentList : PortalModuleBase
    {

        #region Private Members

        private int _currentPage = 1;
        private string _tagQuery = Null.NullString;

        #endregion

        #region Properties

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

        /// <summary>
        ///   Gets the Page Size for the Grid
        /// </summary>
        /// <history>
        ///   [cnurse]	03/12/2008  Created
        /// </history>
        protected int PageSize
        {
            get
            {
                var itemsPage = 10;
                if (!string.IsNullOrEmpty(Convert.ToString(Settings["perpage"])))
                {
                    itemsPage = int.Parse(Convert.ToString(Settings["perpage"]));
                }
                return itemsPage;
            }
        }

        #endregion

        #region Private Methods

        private void BindData()
        {
            using (var dt = new DataTable())
            {
                dt.Columns.Add(new DataColumn("TabId", typeof (Int32)));
                dt.Columns.Add(new DataColumn("ContentKey", typeof (String)));
                dt.Columns.Add(new DataColumn("Title", typeof (String)));
                dt.Columns.Add(new DataColumn("Description", typeof (String)));
                dt.Columns.Add(new DataColumn("PubDate", typeof (DateTime)));

                var results = new ContentController().GetContentItemsByTerm(_tagQuery).ToList();

                if (_tagQuery.Length > 0)
                {
                    foreach (var item in results)
                    {
                        var dr = dt.NewRow();
                        dr["TabId"] = item.TabID;
                        dr["ContentKey"] = item.ContentKey;
                        dr["Title"] = item.Content;
                        if (item.Content.Length > 1000)
                        {
                            dr["Description"] = item.Content.Substring(0, 1000);
                        }
                        else
                        {
                            dr["Description"] = item.Content;
                        }
                        dr["PubDate"] = item.CreatedOnDate;
                        dt.Rows.Add(dr);
                    }
                }

                //Bind Search Results Grid
                var dv = new DataView(dt);
                dgResults.PageSize = PageSize;
                dgResults.DataSource = dv;
                dgResults.DataBind();
                if (results.Count == 0)
                {
                    dgResults.Visible = false;
                    lblMessage.Text = string.Format(Localization.GetString("NoResults", LocalResourceFile), _tagQuery);
                }
                else
                {
                    lblMessage.Text = string.Format(Localization.GetString("Results", LocalResourceFile), _tagQuery);
                }
                if (results.Count <= dgResults.PageSize)
                {
                    ctlPagingControl.Visible = false;
                }
                else
                {
                    ctlPagingControl.Visible = true;
                }
                ctlPagingControl.TotalRecords = results.Count;
            }
            ctlPagingControl.PageSize = dgResults.PageSize;
            ctlPagingControl.CurrentPage = CurrentPage;
        }

        #endregion

        #region Protected Methods

        protected string FormatDate(DateTime pubDate)
        {
            return pubDate.ToString();
        }

        protected string FormatURL(int tabID, string link)
        {
            var strURL = string.IsNullOrEmpty(link) ? Globals.NavigateURL(tabID) : Globals.NavigateURL(tabID, "", link);

            return strURL;
        }

        protected bool ShowDescription()
        {
            bool show;

            show = string.IsNullOrEmpty(Convert.ToString(Settings["showdescription"])) || Convert.ToString(Settings["showdescription"]) == "Y";

            return show;
        }

        #endregion

        #region Event Handlers

        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            ctlPagingControl.PageChanged += OnPagerIndexChanged;
            dgResults.PageIndexChanged += OnGridPageIndexChanged;
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            var objSecurity = new PortalSecurity();
            if ((Request.Params["Tag"] != null))
            {
                _tagQuery = HttpContext.Current.Server.HtmlEncode(objSecurity.InputFilter(Request.Params["Tag"], PortalSecurity.FilterFlag.NoScripting | PortalSecurity.FilterFlag.NoMarkup));
            }

            if (_tagQuery.Length > 0)
            {
                if (!Page.IsPostBack)
                {
                    BindData();
                }
            }
            else
            {
                if (IsEditable)
                {
                   UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("ModuleHidden", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                }
                else
                {
                    ContainerControl.Visible = false;
                }
            }
        }

        protected void OnGridPageIndexChanged(object source, DataGridPageChangedEventArgs e)
        {
            dgResults.CurrentPageIndex = e.NewPageIndex;
            BindData();
        }

        protected void OnPagerIndexChanged(object sender, EventArgs e)
        {
            CurrentPage = ctlPagingControl.CurrentPage;

            dgResults.CurrentPageIndex = CurrentPage - 1;
            BindData();
        }

        #endregion

    }
}