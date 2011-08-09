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

using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Icons;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.WebControls;

using DNNControls = DotNetNuke.UI.WebControls;

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
    /// 	[tamttt] 20/10/2004	Created
    /// </history>
    /// -----------------------------------------------------------------------------

    public partial class ListEditor : PortalModuleBase
    {

		#region "Protected Properties"
		
        protected string Mode
        {
            get
            {
                return lstEntries.Mode;
            }
            set
            {
                lstEntries.Mode = value;
            }
        }

		#endregion

		#region "Private Methods"

        private void BindList(string key)
        {
            lstEntries.SelectedKey = key;
            if (PortalSettings.ActiveTab.IsSuperTab)
            {
                lstEntries.ListPortalID = Null.NullInteger;
            }
            else
            {
                lstEntries.ListPortalID = PortalId;
            }
            lstEntries.ShowDelete = true;
            lstEntries.DataBind();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Loads top level entry list into DNNTree
        /// </summary>        
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt] 20/10/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindTree()
        {
            var ctlLists = new ListController();
            var colLists = ctlLists.GetListInfoCollection();
            var indexLookup = new Hashtable();

            DNNtree.TreeNodes.Clear();

            foreach (ListInfo list in colLists)
            {
                var node = new TreeNode(list.DisplayName);
                {
                    node.Key = list.Key;
                    node.ToolTip = list.EntryCount + " entries";
                    node.ImageIndex = (int) eImageType.Folder;
                }
                if (list.Level == 0)
                {
                    DNNtree.TreeNodes.Add(node);
                }
                else
                {
                    if (indexLookup[list.ParentList] != null)
                    {
                        var parentNode = (TreeNode) indexLookup[list.ParentList];
                        parentNode.TreeNodes.Add(node);
                    }
                }
				
                //Add index key here to find it later, should suggest with Joe to add it to DNNTree
                if (indexLookup[list.Key] == null)
                {
                    indexLookup.Add(list.Key, node);
                }
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Loads top level entry list
        /// </summary>
        /// <param name="ParentKey"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt] 20/10/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private TreeNode GetParentNode(string ParentKey)
        {
            int i;
            for (i = 0; i <= DNNtree.TreeNodes.Count - 1; i++)
            {
                if (DNNtree.TreeNodes[i].Key == ParentKey)
                {
                    return DNNtree.TreeNodes[i];
                }
            }
            return null;
        }

#endregion

#region "Event Handlers"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_Init runs when the control is initialised
        /// </summary>
        /// <history>
        /// 	[cnurse]	02/05/2007  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            //Set the List Entries Control Properties
			lstEntries.ID = "ListEntries";
            
            //ensure that module context is forwarded from parent module to child module
            lstEntries.ModuleContext.Configuration = ModuleContext.Configuration;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Page load, bind tree and enable controls
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt] 20/10/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            DNNtree.NodeClick += DNNTree_NodeClick;
            cmdAddList.Click += cmdAddList_Click;

            try
            {
                if (!Page.IsPostBack)
                {
					//configure tree
                    DNNtree.ImageList.Add(IconController.IconURL("Folder"));
                    DNNtree.ImageList.Add(IconController.IconURL("File"));
                    DNNtree.IndentWidth = 10;
                    DNNtree.CollapsedNodeImage = IconController.IconURL("Max","12X12");
                    DNNtree.ExpandedNodeImage = IconController.IconURL("Min", "12X12");

                    if (Request.QueryString["Key"] != null)
                    {
                        Mode = "ListEntries";
                        BindList(Request.QueryString["Key"]);
                    }
                    else
                    {
                        Mode = "NoList";
                    }
                    BindTree();
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_PreRender runs just prior to the control being rendered
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse] 01/29/2007	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnPreRender(EventArgs e)
        {
            base.OnPreRender(e);

            if (Mode == "NoList")
            {
                divDetails.Visible = false;
            }
            else
            {
                divDetails.Visible = true;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Populate list entries based on value selected in DNNTree
        /// </summary>
        /// <param name="source"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [tamttt] 20/10/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void DNNTree_NodeClick(object source, DNNTreeNodeClickEventArgs e)
        {
            Mode = "ListEntries";
            BindList(e.Node.Key);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        ///     Handles Add New List command
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        ///     Using "CommandName" property of cmdSaveEntry to determine this is a new list
        /// </remarks>
        /// <history>
        ///     [tamttt] 20/10/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void cmdAddList_Click(object sender, EventArgs e)
        {
            Mode = "AddList";
            BindList("");
        }
		
		#endregion

        #region Nested type: eImageType

        private enum eImageType
        {
            Folder = 0,
            Page = 1
        }

        #endregion
    }
}