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
using System.Web;
using System.Web.UI.WebControls;

using DotNetNuke.Common;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Security;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Search;
using DotNetNuke.UI.Skins.Controls;

#endregion

namespace DotNetNuke.Modules.SearchResults
{
    /// -----------------------------------------------------------------------------
    /// Namespace:  DotNetNuke.Modules.SearchResults
    /// Project:    DotNetNuke.SearchResults
    /// Class:      SearchResults
    /// -----------------------------------------------------------------------------
    /// <summary>
    /// The SearchResults Class provides the UI for displaying the Search Results
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    ///		[cnurse]	11/11/2004	Improved Formatting of results, and moved Search Options
    ///                             to Settings
    ///     [cnurse]    12/13/2004  Switched to using a DataGrid for Search Results
    ///     [cnurse]    01/04/2005  Modified so "Nos" stay in order
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class SearchResults : PortalModuleBase
    {
		#region "Private Members"
		
        protected int TotalPages = -1;
        protected int TotalRecords;
        private int _CurrentPage = 1;
        private string _SearchQuery;

		#endregion

		#region "Protected Members"

        protected int CurrentPage
        {
            get
            {
                return _CurrentPage;
            }
            set
            {
                _CurrentPage = value;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets the Page Size for the Grid
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/12/2008  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected int PageSize
        {
            get
            {
                int itemsPage = 10;
                if (!String.IsNullOrEmpty(Convert.ToString(Settings["perpage"])))
                {
                    itemsPage = int.Parse(Convert.ToString(Settings["perpage"]));
                }
                return itemsPage;
            }
        }
		
		#endregion
		
		#region "Private Methods"

        private int BindSearchResults(DataTable dt)
        {
            SearchResultsInfoCollection Results = SearchDataStoreProvider.Instance().GetSearchResults(PortalId, _SearchQuery);

            //Get the maximum items to display
            int maxItems = 0;
            if (!String.IsNullOrEmpty(Convert.ToString(Settings["maxresults"])))
            {
                maxItems = int.Parse(Convert.ToString(Settings["maxresults"]));
            }
            else
            {
                maxItems = Results.Count;
            }
            if (Results.Count < maxItems || maxItems < 1)
            {
                maxItems = Results.Count;
            }
			
            //Get the titlelength/descriptionlength
            int titleLength = 0;
            if (!String.IsNullOrEmpty(Convert.ToString(Settings["titlelength"])))
            {
                titleLength = int.Parse(Convert.ToString(Settings["titlelength"]));
            }
            int descLength = 0;
            if (!String.IsNullOrEmpty(Convert.ToString(Settings["descriptionlength"])))
            {
                descLength = int.Parse(Convert.ToString(Settings["descriptionlength"]));
            }
            int i = 0;
            SearchResultsInfo ResultItem;
            for (i = 0; i <= maxItems - 1; i++)
            {
                ResultItem = Results[i];
                DataRow dr = dt.NewRow();
                dr["TabId"] = ResultItem.TabId;
                dr["Guid"] = ResultItem.Guid;
                if (titleLength > 0 && titleLength < ResultItem.Title.Length)
                {
                    dr["Title"] = ResultItem.Title.Substring(0, titleLength);
                }
                else
                {
                    dr["Title"] = ResultItem.Title;
                }
                dr["Relevance"] = ResultItem.Relevance;
                if (descLength > 0 && descLength < ResultItem.Description.Length)
                {
                    dr["Description"] = ResultItem.Description.Substring(0, descLength);
                }
                else
                {
                    dr["Description"] = ResultItem.Description;
                }
                dr["PubDate"] = ResultItem.PubDate;
                dt.Rows.Add(dr);
            }
            return Results.Count;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// BindData binds the Search Results to the Grid
        /// </summary>
        /// <history>
        /// 	[cnurse]	12/13/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindData()
        {
            using (var dt = new DataTable())
            {
                var dc = new DataColumn("TabId");
                dt.Columns.Add(new DataColumn("TabId", typeof (Int32)));
                dt.Columns.Add(new DataColumn("Guid", typeof (String)));
                dt.Columns.Add(new DataColumn("Title", typeof (String)));
                dt.Columns.Add(new DataColumn("Relevance", typeof (Int32)));
                dt.Columns.Add(new DataColumn("Description", typeof (String)));
                dt.Columns.Add(new DataColumn("PubDate", typeof (DateTime)));

                int count = Null.NullInteger;

                if (_SearchQuery.Length > 0)
                {
                    count = BindSearchResults(dt);
                }
				
                //Bind Search Results Grid
                var dv = new DataView(dt);
                dv.Sort = "Relevance DESC";
                dgResults.PageSize = PageSize;
                dgResults.DataSource = dv;
                dgResults.DataBind();
                if (count == 0)
                {
                    dgResults.Visible = false;
                    lblMessage.Text = string.Format(Localization.GetString("NoResults", LocalResourceFile), _SearchQuery);
                }
                else
                {
                    lblMessage.Text = string.Format(Localization.GetString("Results", LocalResourceFile), _SearchQuery);
                }
                if (count <= dgResults.PageSize)
                {
                    ctlPagingControl.Visible = false;
                }
                else
                {
                    ctlPagingControl.Visible = true;
                }
                ctlPagingControl.TotalRecords = count;
            }

            ctlPagingControl.PageSize = dgResults.PageSize;
            ctlPagingControl.CurrentPage = CurrentPage;
        }

		#endregion

		#region "Protected Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// FormatDate displays the publication Date
        /// </summary>
        /// <param name="pubDate">The publication Date</param>
        /// <returns>The formatted date</returns>
        /// <history>
        /// 	[cnurse]	11/11/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected string FormatDate(DateTime pubDate)
        {
            return pubDate.ToString();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// FormatRelevance displays the relevance value
        /// </summary>
        /// <param name="relevance">The publication Date</param>
        /// <returns>A String</returns>
        /// <history>
        /// 	[cnurse]	11/12/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected string FormatRelevance(int relevance)
        {
            string relevanceString = Null.NullString;
            if (relevance > 0)
            {
                relevanceString = Localization.GetString("Relevance", LocalResourceFile) + relevance;
            }
            return relevanceString;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// FormatURL the correctly formatted url to the Search Result
        /// </summary>
        /// <param name="TabID">The Id of the Tab where the content is located</param>
        /// <param name="Link">The module provided querystring to access the correct content</param>
        /// <returns>The formatted url</returns>
        /// <history>
        /// 	[cnurse]	11/11/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected string FormatURL(int TabID, string Link)
        {
            string strURL;
            if (String.IsNullOrEmpty(Link))
            {
                strURL = Globals.NavigateURL(TabID);
            }
            else
            {
                strURL = Globals.NavigateURL(TabID, "", Link);
            }
            return strURL;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// ShowDescription determines whether the description should be shown
        /// </summary>
        /// <returns>True or False string</returns>
        /// <history>
        /// 	[cnurse]	12/13/2004	created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected string ShowDescription()
        {
            string strShow;

            if (!String.IsNullOrEmpty(Convert.ToString(Settings["showdescription"])))
            {
                if (Convert.ToString(Settings["showdescription"]) == "Y")
                {
                    strShow = "True";
                }
                else
                {
                    strShow = "False";
                }
            }
            else
            {
                strShow = "True";
            }
            return strShow;
        }

		#endregion

		#region "Event Handlers"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_Load runs when the control is loaded
        /// </summary>
        /// <history>
        /// 	[cnurse]	11/11/2004	documented
        ///     [cnurse]    12/13/2004  Switched to using a DataGrid for Search Results
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            dgResults.PageIndexChanged += dgResults_PageIndexChanged;
            ctlPagingControl.PageChanged += ctlPagingControl_PageChanged;

            var objSecurity = new PortalSecurity();
            if (Request.Params["Search"] != null)
            {
                _SearchQuery = HttpContext.Current.Server.HtmlEncode(objSecurity.InputFilter(Request.Params["Search"], PortalSecurity.FilterFlag.NoScripting | PortalSecurity.FilterFlag.NoMarkup));
            }
            if (!String.IsNullOrEmpty(_SearchQuery))
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

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// dgResults_PageIndexChanged runs when one of the Page buttons is clicked
        /// </summary>
        /// <history>
        ///     [cnurse]    12/13/2004  created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void dgResults_PageIndexChanged(object source, DataGridPageChangedEventArgs e)
        {
            dgResults.CurrentPageIndex = e.NewPageIndex;
            BindData();
        }

        protected void ctlPagingControl_PageChanged(object sender, EventArgs e)
        {
            CurrentPage = ctlPagingControl.CurrentPage;

            dgResults.CurrentPageIndex = CurrentPage - 1;
            BindData();
        }
		
		#endregion
    }
}