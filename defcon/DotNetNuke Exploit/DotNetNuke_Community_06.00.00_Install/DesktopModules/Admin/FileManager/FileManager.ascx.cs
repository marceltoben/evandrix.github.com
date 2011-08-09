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
using System.Data;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using System.Web.UI;
using System.Web.UI.HtmlControls;
using System.Web.UI.WebControls;

using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Icons;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Modules.Actions;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Instrumentation;
using DotNetNuke.Security;
using DotNetNuke.Security.Permissions;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.FileSystem;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Skins.Controls;
using DotNetNuke.UI.Utilities;
using DotNetNuke.UI.WebControls;

using ICSharpCode.SharpZipLib.Zip;

using Microsoft.VisualBasic;

using DataCache = DotNetNuke.Common.Utilities.DataCache;
using DNNTreeNode = DotNetNuke.UI.WebControls.TreeNode;
using DNNTreeNodeCollection = DotNetNuke.UI.WebControls.TreeNodeCollection;
using FileInfo = DotNetNuke.Services.FileSystem.FileInfo;
using Globals = DotNetNuke.Common.Globals;

#endregion

namespace DotNetNuke.Modules.Admin.FileManager
{
    /// -----------------------------------------------------------------------------
    /// Project	 : DotNetNuke
    /// Class	 : FileManager
    /// 
    /// -----------------------------------------------------------------------------
    /// <summary>
    /// Supplies the functionality for uploading files to the Portal
    /// Synchronizing Files within the folder and the database
    /// and Provides status of available disk space for the portal
    /// as well as limiting uploads to the restricted allocated file space
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    /// 	[DYNST]	        2/1/2004	Created
    ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
    ///     [cnurse]        12/2/2004   Database Synchronization added
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class FileManager : PortalModuleBase, IActionable
    {
		#region "Private Members"

        private string _ErrorMessage =
            "<TABLE><TR><TD height=100% class=NormalRed>{0}</TD></TR><TR valign=bottom><TD align=center><INPUT id=btnClearError onclick=clearErrorMessage(); type=button value=OK></TD></TR></TABLE>";

        private SortedList<int, string> _folderMappings;

		#endregion

		#region "Protected Properties"

        protected bool IsAdminRole
        {
            get
            {
                return PortalSecurity.IsInRole(PortalSettings.AdministratorRoleName);
            }
        }

		#endregion

		#region "Public Properties"

        public int FolderPortalID
        {
            get
            {
                if (IsHostMenu)
                {
                    return Null.NullInteger;
                }
                else
                {
                    return PortalId;
                }
            }
        }

        public string RootFolderName
        {
            get
            {
                if (ViewState["RootFolderName"] != null)
                {
                    return ViewState["RootFolderName"].ToString();
                }
                else
                {
                    return "";
                }
            }
            set
            {
                ViewState["RootFolderName"] = value;
            }
        }

        public string RootFolderPath
        {
            get
            {
                string _CurRootFolder;
                if (IsHostMenu)
                {
                    _CurRootFolder = Globals.HostMapPath;
                }
                else
                {
                    _CurRootFolder = PortalSettings.HomeDirectoryMapPath;
                }
                return _CurRootFolder;
            }
        }

        public string Sort
        {
            get
            {
                return ViewState["strSort"].ToString();
            }
            set
            {
                ViewState.Add("strSort", value);
            }
        }

        public string LastSort
        {
            get
            {
                return ViewState["strLastSort"].ToString();
            }
            set
            {
                ViewState.Add("strLastSort", value);
            }
        }

        public string FilterFiles
        {
            get
            {
                return ViewState["strFilterFiles"].ToString();
            }
            set
            {
                ViewState.Add("strFilterFiles", value);
            }
        }

        public string LastPath
        {
            get
            {
                return UnMaskPath(ClientAPI.GetClientVariable(Page, "LastPath"));
            }
            set
            {
                value = MaskPath(value);
                ClientAPI.RegisterClientVariable(Page, "LastPath", value, true);
            }
        }

        public string DestPath
        {
            get
            {
                return ClientAPI.GetClientVariable(Page, "DestPath");
            }
            set
            {
                ClientAPI.RegisterClientVariable(Page, "DestPath", value, true);
            }
        }

        public string SourcePath
        {
            get
            {
                return ClientAPI.GetClientVariable(Page, "SourcePath");
            }
            set
            {
                ClientAPI.RegisterClientVariable(Page, "SourcePath", value, true);
            }
        }

        public string MoveFiles
        {
            get
            {
                return ClientAPI.GetClientVariable(Page, "MoveFiles");
            }
            set
            {
                ClientAPI.RegisterClientVariable(Page, "MoveFiles", value, true);
            }
        }

        public bool IsRefresh
        {
            get
            {
                return Convert.ToBoolean(ClientAPI.GetClientVariable(Page, "IsRefresh"));
            }
            set
            {
                ClientAPI.RegisterClientVariable(Page, "IsRefresh", Convert.ToString(Convert.ToInt32(value)), true);
            }
        }

        public bool DisabledButtons
        {
            get
            {
                return Convert.ToBoolean(ClientAPI.GetClientVariable(Page, "DisabledButtons"));
            }
            set
            {
                ClientAPI.RegisterClientVariable(Page, "DisabledButtons", Convert.ToString(Convert.ToInt32(value)), true);
            }
        }

        public string MoveStatus
        {
            get
            {
                return ClientAPI.GetClientVariable(Page, "MoveStatus");
            }
            set
            {
                ClientAPI.RegisterClientVariable(Page, "MoveStatus", value, true);
            }
        }

        public string LastFolderPath
        {
            get
            {
                if (ViewState["LastFolderPath"] != null)
                {
                    return ViewState["LastFolderPath"].ToString();
                }
                else
                {
                    return "";
                }
            }
            set
            {
                ViewState["LastFolderPath"] = value;
            }
        }

        public int PageSize
        {
            get
            {
                return Convert.ToInt32(selPageSize.SelectedValue);
            }
        }

        public int PageIndex
        {
            get
            {
                if (ViewState["PageIndex"] != null)
                {
                    return Convert.ToInt32(ViewState["PageIndex"]);
                }
                else
                {
                    return 0;
                }
            }
            set
            {
                if (value >= 0 && value < dgFileList.PageCount)
                {
                    ViewState["PageIndex"] = value;
                }
            }
        }

        private SortedList<int, string> FolderMappings
        {
            get
            {
                if (_folderMappings == null)
                {
                    _folderMappings = new SortedList<int, string>();

                    var folderMappingController = FolderMappingController.Instance;
                    var folderMappings = folderMappingController.GetFolderMappings(FolderPortalID);
                    folderMappings.ForEach(f => _folderMappings.Add(f.FolderMappingID, f.MappingName));
                }

                return _folderMappings;
            }
        }

		#endregion

		#region "Private Methods"

        protected bool HasPermission(string permissionKey)
        {
            var hasPermision = UserInfo.IsSuperUser;
            var strSourcePath = UnMaskPath(DestPath).Replace(RootFolderPath, "").Replace("\\", "/");
            var objFolder = FolderManager.Instance.GetFolder(FolderPortalID, strSourcePath);
            if (!hasPermision && objFolder != null)
            {
                hasPermision = IsEditable && FolderPermissionController.HasFolderPermission(objFolder.FolderPermissions, permissionKey);
            }
            return hasPermision;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Adds a File to the DataTable used for the File List grid
        /// </summary>
        /// <param name="tblFiles">The DataTable</param>
        /// <param name="objFile">The FileInfo object to add</param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	    12/3/2004	documented
        ///     [cnurse]        04/24/2006  Updated to use new Secure Storage
        /// </history>
        /// -----------------------------------------------------------------------------
        private void AddFileToTable(DataTable tblFiles, FileInfo objFile)
        {
            DataRow dRow = tblFiles.NewRow();

            dRow["FileType"] = "File";
            dRow["FileId"] = objFile.FileId;
            dRow["FileName"] = objFile.FileName;
            dRow["FileSize"] = objFile.Size.ToString("##,##0");
            dRow["IntFileSize"] = objFile.Size;
            
            if (!String.IsNullOrEmpty(objFile.Extension) || objFile.Extension != null)
            {
                dRow["Extension"] = objFile.Extension;
            }
            else
            {
                dRow["Extension"] = "none";
            }

            if (objFile.SupportsFileAttributes)
            {
                dRow["SupportsFileAttributes"] = true;

                if (objFile.FileAttributes.HasValue)
                {
                    dRow["DateModified"] = objFile.LastModificationTime;
                    dRow["Archive"] = objFile.FileAttributes.Value & FileAttributes.Archive;
                    dRow["ReadOnly"] = objFile.FileAttributes.Value & FileAttributes.ReadOnly;
                    dRow["Hidden"] = objFile.FileAttributes.Value & FileAttributes.Hidden;
                    dRow["System"] = objFile.FileAttributes.Value & FileAttributes.System;
                    dRow["AttributeString"] = GetAttributeString(objFile.FileAttributes.Value);
                }
            }
            else
            {
                dRow["SupportsFileAttributes"] = false;
                dRow["Archive"] = false;
                dRow["ReadOnly"] = false;
                dRow["Hidden"] = false;
                dRow["System"] = false;
                dRow["AttributeString"] = "";
            }

            tblFiles.Rows.Add(dRow);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Adds node to tree
        /// </summary>
        /// <param name="strName">Name of folder to display</param>
        /// <param name="strKey">Masked Key of folder location</param>
        /// <param name="eImage">Type of image</param>
        /// <param name="objNodes">Node collection to add to</param>
        /// <returns></returns>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	10/26/2004	Created
        /// 	[Jon Henning]	8/24/2005	Added Populate on Demand (POD) logic
        /// </history>
        /// -----------------------------------------------------------------------------
        private DNNTreeNode AddNode(string strName, string strKey, int imageIndex, DNNTreeNodeCollection objNodes)
        {
            DNNTreeNode objNode;
            objNode = new DNNTreeNode(strName);
            objNode.Key = strKey;
            objNode.ToolTip = strName;
            objNode.ImageIndex = imageIndex;
            objNode.CssClass = "FileManagerTreeNode";
            objNodes.Add(objNode);

            if (objNode.Key == DestPath)
            {
                objNode.Selected = true;
                objNode.MakeNodeVisible();
            }
            return objNode;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Adds node to tree
        /// </summary>
        /// <param name="folder">The FolderInfo object to add</param>
        /// <param name="objNodes">Node collection to add to</param>
        /// <returns></returns>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	04/24/2006	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private DNNTreeNode AddNode(FolderInfo folder, DNNTreeNodeCollection objNodes)
        {
            DNNTreeNode objNode;
            string strName = folder.FolderName;
            string strKey = MaskPath(RootFolderPath + folder.FolderPath);
            var subFolders = FolderManager.Instance.GetFolders(folder).ToList();

            var imageIndex = FolderMappings.IndexOfKey(folder.FolderMappingID);

            objNode = AddNode(strName, strKey, imageIndex, objNodes);
            objNode.HasNodes = subFolders.Count > 0;

            return objNode;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// BindFileList 
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindFileList()
        {
            string strCurPage;

            LastPath = PathUtils.Instance.RemoveTrailingSlash(UnMaskPath(DestPath));
            dgFileList.PageSize = PageSize;
            dgFileList.CurrentPageIndex = PageIndex;

            GetFilesByFolder(PathUtils.Instance.StripFolderPath(DestPath).Replace("\\", "/"));

            if (dgFileList.PageCount > 1)
            {
                tblMessagePager.Visible = true;
                strCurPage = Localization.GetString("Pages");
                lblCurPage.Text = string.Format(strCurPage, (dgFileList.CurrentPageIndex + 1), (dgFileList.PageCount));
                lnkMoveFirst.Text = "<img border=0 Alt='" + Localization.GetString("First") + "' src='" + IconController.IconURL("MoveFirst") + "'>";
                lnkMovePrevious.Text = "<img border=0 Alt='" + Localization.GetString("Previous") + "' src='" + IconController.IconURL("MovePrevious") + "'>";
                lnkMoveNext.Text = "<img border=0 Alt='" + Localization.GetString("Next") + "' src='" + IconController.IconURL("MoveNext") + "'>";
                lnkMoveLast.Text = "<img border=0 Alt='" + Localization.GetString("Last") + "' src='" + IconController.IconURL("Movelast") + "'>";
            }
            else
            {
                tblMessagePager.Visible = false;
            }
            lblCurFolder.Text = Regex.Replace(DestPath, "^0\\\\", RootFolderName + "\\");
            MoveFiles = "";

            UpdateSpaceUsed();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cpaterra]	4/6/2006	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindStorageLocationTypes()
        {
            ddlStorageLocation.Items.Clear();

            foreach (var folderMapping in FolderMappingController.Instance.GetFolderMappings(FolderPortalID))
            {
                ddlStorageLocation.Items.Add(new ListItem(folderMapping.MappingName, folderMapping.FolderMappingID.ToString()));
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The BindFolderTree helper method is used to bind the list of
        /// files for this portal or for the hostfolder, to an asp:DATAGRID server control
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	        2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        ///     [cnurse]        12/2/2004   Updated to use Localization for Root
        /// 	[Jon Henning]	8/24/2005	Added Populate on Demand (POD) logic
        ///     [cnurse]        04/24/2006  Updated to use new Secure Storage
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindFolderTree()
        {
            DNNTreeNode objNode;

            //Clear the Tree Nodes Collection
            DNNTree.TreeNodes.Clear();

            objNode = AddNode(RootFolderName, MaskPath(RootFolderPath), FolderMappings.IndexOfValue("Standard"), DNNTree.TreeNodes);

            var folders = FolderManager.Instance.GetFolders(FolderPortalID).ToList();
            objNode.HasNodes = folders.Count > 1;
            if (DNNTree.PopulateNodesFromClient == false || DNNTree.IsDownLevel)
            {
                PopulateTree(objNode.TreeNodes, RootFolderPath);
            }
            if (DNNTree.SelectedTreeNodes.Count == 0)
            {
                objNode.Selected = true;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// GetCheckAllString 
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private string GetCheckAllString()
        {
            int intCount = dgFileList.Items.Count;

            CheckBox chkFile;
            int i;
            string strResult;
            strResult = "setMoveFiles('');" + Environment.NewLine;
            for (i = 0; i <= intCount - 1; i++)
            {
                chkFile = (CheckBox) dgFileList.Items[i].FindControl("chkFile");
                if ((chkFile) != null)
                {
                    strResult = strResult + "var chk1 = dnn.dom.getById('" + chkFile.ClientID + "');";
                    strResult = strResult + "chk1.checked = blValue;" + Environment.NewLine;
                    strResult = strResult + "if (!chk1.onclick) {chk1.parentElement.onclick();}else{chk1.onclick();}" + Environment.NewLine;
                }
            }
            strResult = "function CheckAllFiles(blValue) {" + strResult + "}" + Environment.NewLine;

            strResult = "<script language=javascript>" + strResult + "</script>";

            return strResult;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// GeneratePermissionsGrid generates the permissions grid for the folder
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse]        12/2/2004   documented
        /// </history>
        /// -----------------------------------------------------------------------------
        private void GeneratePermissionsGrid()
        {
            var folderPath = PathUtils.Instance.StripFolderPath(DestPath).Replace("\\", "/");

            dgPermissions.FolderPath = folderPath;

            var objFolderInfo = FolderManager.Instance.GetFolder(FolderPortalID, folderPath);
            if (objFolderInfo != null && ddlStorageLocation.Items.FindByValue(Convert.ToString(objFolderInfo.FolderMappingID)) != null)
            {
                ddlStorageLocation.SelectedValue = Convert.ToString(objFolderInfo.FolderMappingID);

                phSecureFolderWarning.Visible = !objFolderInfo.IsStorageSecure;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// GetAttributeString generates the attributes string from the FileAttributes
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse]        12/2/2004   documented
        /// </history>
        /// -----------------------------------------------------------------------------
        private string GetAttributeString(FileAttributes attributes)
        {
            string strResult = "";
            if ((attributes & FileAttributes.Archive) == FileAttributes.Archive)
            {
                strResult += "A";
            }
            if ((attributes & FileAttributes.ReadOnly) == FileAttributes.ReadOnly)
            {
                strResult += "R";
            }
            if ((attributes & FileAttributes.Hidden) == FileAttributes.Hidden)
            {
                strResult += "H";
            }
            if ((attributes & FileAttributes.System) == FileAttributes.System)
            {
                strResult += "S";
            }
            return strResult;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// GetFilesByFolder gets the Files/Folders to display
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse]        12/2/2004   documented and modified to display Folders in 
        ///                                 the grid
        ///     [cnurse]        04/24/2006  Updated to use new Secure Storage
        /// </history>
        /// -----------------------------------------------------------------------------
        private void GetFilesByFolder(string strFolderName)
        {
            DataTable tblFiles = GetFileTable();

            var objFolder = FolderManager.Instance.GetFolder(FolderPortalID, strFolderName);
            if (objFolder != null)
            {
                var arrFiles = FolderManager.Instance.GetFiles(objFolder);
                foreach (FileInfo objFile in arrFiles)
                {
                    AddFileToTable(tblFiles, objFile);
                }
            }
            var dv = new DataView();
            dv.Table = tblFiles;
            dv.Sort = Sort;
            if (!String.IsNullOrEmpty(FilterFiles))
            {
                dv.RowFilter = "FileName like '%" + FilterFiles + "%'";
            }
            dgFileList.DataSource = dv;
            dgFileList.DataBind();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// GetFileTable creates the DataTable used to store the list of files and folders
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///     [cnurse]        12/3/2004   documented and modified to display Folders in 
        ///                                 the grid
        /// </history>
        /// -----------------------------------------------------------------------------
        private DataTable GetFileTable()
        {
            var tblFiles = new DataTable("Files");

            var myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.String");
            myColumns.ColumnName = "FileType";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.Int32");
            myColumns.ColumnName = "FileId";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.String");
            myColumns.ColumnName = "FileName";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.String");
            myColumns.ColumnName = "FileSize";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.Int32");
            myColumns.ColumnName = "IntFileSize";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.DateTime");
            myColumns.ColumnName = "DateModified";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.Boolean");
            myColumns.ColumnName = "ReadOnly";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.Boolean");
            myColumns.ColumnName = "Hidden";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.Boolean");
            myColumns.ColumnName = "System";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.Boolean");
            myColumns.ColumnName = "Archive";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.String");
            myColumns.ColumnName = "AttributeString";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.String");
            myColumns.ColumnName = "Extension";
            tblFiles.Columns.Add(myColumns);

            myColumns = new DataColumn();
            myColumns.DataType = Type.GetType("System.Boolean");
            myColumns.ColumnName = "SupportsFileAttributes";
            tblFiles.Columns.Add(myColumns);

            return tblFiles;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets the size of the all the files in the zip file
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	12/4/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private long GetZipFileExtractSize(string strFileName)
        {
            ZipEntry objZipEntry;
            ZipInputStream objZipInputStream;
            try
            {
                objZipInputStream = new ZipInputStream(File.OpenRead(strFileName));
            }
            catch (Exception ex)
            {
                DnnLog.Error(ex);
                ShowErrorMessage(MaskString(ex.Message));
                return -1;
            }
            objZipEntry = objZipInputStream.GetNextEntry();
            long iTemp = 0;
            while (objZipEntry != null)
            {
                iTemp = iTemp + objZipEntry.Size;
                objZipEntry = objZipInputStream.GetNextEntry();
            }
            objZipInputStream.Close();
            return iTemp;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Sets common properties on DNNTree control
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// 	[Jon Henning]	8/24/2005	Added Populate on Demand (POD) logic
        /// </history>
        /// -----------------------------------------------------------------------------
        private void InitializeTree()
        {
            DNNTree.SystemImagesPath = ResolveUrl("~/images/");

            PreloadFolderImages();

            DNNTree.ImageList.Add(IconController.IconURL("File"));
            DNNTree.IndentWidth = 10;
            DNNTree.CollapsedNodeImage = IconController.IconURL("Max","12X12");
            DNNTree.ExpandedNodeImage = IconController.IconURL("Min", "12X12");
            DNNTree.PopulateNodesFromClient = true;
            DNNTree.JSFunction = "nodeSelected();";
        }

        private void PreloadFolderImages()
        {
            IFolderMappingController folderMappingController = FolderMappingController.Instance;
            FolderMappingInfo folderMappingInfo = null;
            string imageUrl = String.Empty;

            foreach (var folderMapping in FolderMappings)
            {
                folderMappingInfo = folderMappingController.GetFolderMapping(folderMapping.Key);
                imageUrl = folderMappingInfo.ImageUrl;
                DNNTree.ImageList.Add(imageUrl);
            }
        }

        private void ManageToolbarButton(HtmlGenericControl wrapperControl, Image imageControl, string js, string imageRootName, bool enableButton)
        {
            if (enableButton)
            {
                wrapperControl.Attributes.Add("style", "cursor: pointer");
                wrapperControl.Attributes.Add("onclick", js);
                imageControl.ImageUrl = IconController.IconURL(imageRootName);
            }
            else
            {
                wrapperControl.Attributes.Remove("style");
                wrapperControl.Attributes.Remove("onclick");                
                imageControl.ImageUrl = IconController.IconURL(imageRootName + "Disabled");
            }
        }

        private void ManageSecurity()
        {
            ManageToolbarButton(addFolder, lnkAddFolderIMG, "return canAddFolder();", "AddFolder", HasPermission("ADD"));
            ManageToolbarButton(deleteFolder, lnkDelFolderIMG, "return deleteFolder();", "DeleteFolder", HasPermission("DELETE"));
            ManageToolbarButton(syncFolder, lnkSyncFolderIMG, "__doPostBack(m_sUCPrefixName + 'lnkSyncFolder', '');", "Synchronize", HasPermission("MANAGE"));
            chkRecursive.Enabled = HasPermission("MANAGE");

            ManageToolbarButton(refresh, lnkRefreshIMG, "__doPostBack(m_sUCPrefixName + 'lnkRefresh', '');", "Refresh", true);
            ManageToolbarButton(copy, lnkCopy, "copyCheckedFiles();", "CopyFile", HasPermission("COPY"));
            ManageToolbarButton(move, lnkMove, "moveFiles();", "MoveFile", HasPermission("COPY"));
            ManageToolbarButton(upload, lnkUploadIMG, "__doPostBack(m_sUCPrefixName + 'lnkUpload', '');", "UploadFile", HasPermission("ADD"));
            ManageToolbarButton(delete, lnkDelete, "deleteCheckedFiles();", "Delete", HasPermission("DELETE"));
            ManageToolbarButton(filter, lnkFilterIMG, "__doPostBack(m_sUCPrefixName + 'lnkFilter', '');", "Search", true);

            lnkCopy.Enabled = IsEditable;
            lnkMove.Enabled = IsEditable;
            lnkUpload.Enabled = IsEditable;
            lnkDelete.Enabled = IsEditable;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Masks the path
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private string MaskPath(string strOrigPath)
        {
            return strOrigPath.Replace(PathUtils.Instance.RemoveTrailingSlash(RootFolderPath), "0").Replace("/", "\\");
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Masks a string 
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private string MaskString(string strSource)
        {
            var search = PathUtils.Instance.RemoveTrailingSlash(RootFolderPath).ToUpper();
            var replace = Localization.GetString("PortalRoot", LocalResourceFile);
            var result = "";
            var temp = strSource.ToUpper();
            var position = temp.IndexOf(search);
            while (position >= 0)
            {
                result += strSource.Substring(0, position) + replace;
                strSource = strSource.Substring(position + search.Length);
                temp = temp.Substring(position + search.Length);
                position = temp.IndexOf(search);
            }
            return result + strSource;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Populates DNNTree control with folder hiearachy
        /// </summary>
        /// <param name="objNodes">Node collection to add children to</param>
        /// <param name="strPath">Path of parent node</param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	10/26/2004	Created
        /// 	[Jon Henning]	8/24/2005	Added Populate on Demand (POD) logic
        ///     [cnurse]        04/24/2006  Updated to use new Secure Storage
        /// </history>
        /// -----------------------------------------------------------------------------
        private void PopulateTree(DNNTreeNodeCollection objNodes, string strPath)
        {
            var folderPath = strPath.Replace(RootFolderPath, "").Replace("\\", "/");
            var parentFolder = FolderManager.Instance.GetFolder(FolderPortalID, folderPath);
            var folders = FolderManager.Instance.GetFolders(parentFolder);
            DNNTreeNode objNode;

            //Iterate through the SubFolders
            foreach (var folder in folders)
            {
                if (FolderPermissionController.CanViewFolder((FolderInfo)folder))
                {
                    objNode = AddNode((FolderInfo)folder, objNodes);
                    if (DNNTree.PopulateNodesFromClient == false)
                    {
                        PopulateTree(objNode.TreeNodes, folder.FolderPath);
                    }
                }
            }
        }

        private void SetFolder(DNNTreeNode node)
        {
            dgFileList.EditItemIndex = -1;
            if (DNNTree.IsDownLevel)
            {
                DestPath = node.Key;
                LastPath = node.Key;
            }
            ManageSecurity();

            BindFileList();
            GeneratePermissionsGrid();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Sets up the file manager for Edit Mode
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void SetEditMode()
        {
            if (dgFileList.EditItemIndex > -1)
            {
				//In Edit Mode
                int intCount = dgFileList.Items.Count;
                CheckBox chkFile2;
                CheckBox chkFile;
                ImageButton lnkDeleteFile;
                ImageButton lnkEditFile;
                int i;
                for (i = 0; i <= intCount - 1; i++)
                {
                    if (i != dgFileList.EditItemIndex)
                    {
                        chkFile2 = (CheckBox) dgFileList.Items[i].FindControl("chkFile2");
                        chkFile = (CheckBox) dgFileList.Items[i].FindControl("chkFile");
                        lnkDeleteFile = (ImageButton) dgFileList.Items[i].FindControl("lnkDeleteFile");
                        lnkEditFile = (ImageButton) dgFileList.Items[i].FindControl("lnkEditFile");
                        if ((chkFile2) != null)
                        {
                            chkFile2.Enabled = false;
                        }
                        if ((chkFile) != null)
                        {
                            chkFile.Enabled = false;
                        }
                        if ((lnkDeleteFile) != null)
                        {
                            lnkDeleteFile.Enabled = false;
                            lnkDeleteFile.ImageUrl = IconController.IconURL("TrashDisabled");
                            lnkDeleteFile.AlternateText = "";
                        }
                        if ((lnkEditFile) != null)
                        {
                            lnkEditFile.Enabled = false;
                            lnkEditFile.ImageUrl = IconController.IconURL("EditDisabled");
                            lnkEditFile.AlternateText = "";
                        }
                        chkFile2 = null;
                        chkFile = null;
                        lnkDeleteFile = null;
                        lnkEditFile = null;
                    }
                }
                DisabledButtons = true;
            }
            else
            {
            }
            dgFileList.Columns[0].HeaderStyle.Width = Unit.Percentage(5);
            dgFileList.Columns[1].HeaderStyle.Width = Unit.Percentage(25);
            dgFileList.Columns[2].HeaderStyle.Width = Unit.Percentage(25);
            dgFileList.Columns[3].HeaderStyle.Width = Unit.Percentage(7);
            dgFileList.Columns[4].HeaderStyle.Width = Unit.Percentage(15);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Sets up the Error Message
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void ShowErrorMessage(string strMessage)
        {
            strMessage = strMessage.Replace("\\", "\\\\");
            strMessage = strMessage.Replace("'", "\\'");
            strMessage = strMessage.Replace(Environment.NewLine, "\\n");
            strMessage = string.Format(_ErrorMessage, strMessage);
            ClientAPI.RegisterClientVariable(Page, "ErrorMessage", strMessage, true);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Synchronizes the complete File System
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void Synchronize()
        {
            if (IsHostMenu)
            {
                FolderManager.Instance.Synchronize(Null.NullInteger);
            }
            else
            {
                FolderManager.Instance.Synchronize(PortalId);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Unmasks the path
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private string UnMaskPath(string strOrigPath)
        {
            strOrigPath = PathUtils.Instance.AddTrailingSlash(RootFolderPath) + PathUtils.Instance.StripFolderPath(strOrigPath);
            return strOrigPath.Replace("/", "\\");
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Updates the space Used label
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void UpdateSpaceUsed()
        {
            string strDestFolder = PathUtils.Instance.AddTrailingSlash(UnMaskPath(DestPath));
            var objPortalController = new PortalController();
            string strUsed;
            string strQuota;

            if (PortalSettings.HostSpace == 0)
            {
                strQuota = Localization.GetString("UnlimitedSpace", LocalResourceFile);
            }
            else
            {
                strQuota = PortalSettings.HostSpace + "MB";
            }
            if (IsHostMenu)
            {
                lblFileSpace.Text = "&nbsp;";
            }
            else
            {
                long spaceUsed = objPortalController.GetPortalSpaceUsedBytes(FolderPortalID);
                if (spaceUsed < 1024)
                {
                    strUsed = spaceUsed.ToString("0.00") + "B";
                }
                else if (spaceUsed < (1024*1024))
                {
                    strUsed = (spaceUsed/1024).ToString("0.00") + "KB";
                }
                else
                {
                    strUsed = (spaceUsed/(1024*1024)).ToString("0.00") + "MB";
                }
                lblFileSpace.Text = string.Format(Localization.GetString("SpaceUsed", LocalResourceFile), strUsed, strQuota);
            }
        }

		#endregion

		#region "Protected Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The DeleteFiles helper method is used to delete the files in the list
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <param name="strFiles">The list of files to delete</param>
        /// <history>
        /// 	[DYNST]	        2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void DeleteFiles(string strFiles)
        {
            var arFiles = strFiles.Split(';');

            if (arFiles.Length == 0)
            {
                return;
            }
                        
            var strErrorMessage = "";
            
            var strSourcePath = Globals.GetSubFolderPath(PathUtils.Instance.AddTrailingSlash(LastPath) + arFiles[0], FolderPortalID);
            var folder = FolderManager.Instance.GetFolder(FolderPortalID, strSourcePath);

            for (var i = 0; i <= arFiles.Length - 1; i++)
            {
                if (!String.IsNullOrEmpty(arFiles[i]))
                {
                    var file = Services.FileSystem.FileManager.Instance.GetFile(folder, arFiles[i]);

                    try
                    {
                        Services.FileSystem.FileManager.Instance.DeleteFile(file);
                    }
                    catch (Exception ex)
                    {
                        DnnLog.Error(ex);
                        strErrorMessage += Localization.GetString("ErrorDeletingFile", LocalResourceFile) +
                            PathUtils.Instance.AddTrailingSlash(UnMaskPath(DestPath)) +
                            arFiles[i] +
                            "<br/>&nbsp;&nbsp;&nbsp;" + ex.Message + "<br/>";
                    }
                }
            }
            
            if (!String.IsNullOrEmpty(strErrorMessage))
            {
                strErrorMessage = MaskString(strErrorMessage);
                ShowErrorMessage(strErrorMessage);
            }
            
            BindFileList();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Renders the page output
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	11/1/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void Render(HtmlTextWriter output)
        {
			//mark various controls as valid for event validation
            Page.ClientScript.RegisterForEventValidation(lnkAddFolder.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkDeleteFolder.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkDeleteAllCheckedFiles.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkRefresh.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkSelectFolder.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkSyncFolder.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkFilter.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkCopy.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkUpload.UniqueID);

            Page.ClientScript.RegisterForEventValidation(lnkMove.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkMoveFirst.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkMoveLast.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkMoveNext.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkMovePrevious.UniqueID);
            Page.ClientScript.RegisterForEventValidation(lnkMoveFiles.UniqueID);

            string strTemp = GetCheckAllString();

            pnlScripts2.Controls.Add(new LiteralControl(strTemp));
            if (dgFileList.Items.Count <= 10 && dgFileList.PageCount == 1)
            {
                dgFileList.PagerStyle.Visible = false;
            }
            base.Render(output);
        }

		#endregion

		#region "Public Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The CheckDestFolderAccess helper method Checks to make sure file copy/move 
        /// operation will not exceed portal available space
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	        2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        ///     [cnurse]        12/2/2004   Updated to use Localization
        /// </history>
        /// -----------------------------------------------------------------------------
        public string CheckDestFolderAccess(long intSize)
        {
            if (Request.IsAuthenticated)
            {
                string strDestFolder = PathUtils.Instance.AddTrailingSlash(UnMaskPath(DestPath));
                var objPortalController = new PortalController();

				if (objPortalController.HasSpaceAvailable(FolderPortalID, intSize) || Globals.IsHostTab(PortalSettings.ActiveTab.TabID))
                {
                    return "";
                }
                else
                {
                    return Localization.GetString("NotEnoughSpace", LocalResourceFile);
                }
            }
            else
            {
                return Localization.GetString("PleaseLogin", LocalResourceFile);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets the Image associated with the File/Folder
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	12/4/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public string GetImageUrl(string type)
        {
            string url = "";
            try
            {
                if (type == "folder")
                {                    
                    url = IconController.IconURL("ExtClosedFolder");
                }
                else
                {
                    if (!String.IsNullOrEmpty(type) && File.Exists(Server.MapPath(IconController.IconURL("Ext" + type))))
                    {
                        url = IconController.IconURL("Ext" + type);
                    }
                    else
                    {                        
                        url = IconController.IconURL("ExtFile");
                    }
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
            return url;
        }

		#endregion

		#region "Event Handlers"

        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            cmdUpdate.Click += cmdUpdate_Click;
            dgFileList.ItemDataBound += dgFileList_ItemDataBound;
            dgFileList.SortCommand += dgFileList_SortCommand;
            DNNTree.NodeClick += DNNTree_NodeClick;
            DNNTree.PopulateOnDemand += DNNTree_PopulateOnDemand;
            lnkAddFolder.Command += lnkAddFolder_Command;
            lnkDeleteFolder.Command += lnkDeleteFolder_Command;
            lnkFilter.Command += lnkFilter_Command;
            lnkDeleteAllCheckedFiles.Command += lnkDeleteAllCheckedFiles_Command;
            lnkMoveFiles.Command += lnkMoveFiles_Command;
            lnkMoveFirst.Command += lnkMoveFirst_Command;
            lnkMoveLast.Command += lnkMoveLast_Command;
            lnkMoveNext.Command += lnkMoveNext_Command;
            lnkMovePrevious.Command += lnkMovePrevious_Command;
            lnkRefresh.Command += lnkRefresh_Command;
            lnkSelectFolder.Command += lnkSelectFolder_Command;
            lnkSyncFolder.Command += lnkSyncFolder_Command;
            lnkSyncFolders.Click += lnkSyncFolders_Click;
            lnkUpload.Command += lnkUpload_Command;
            selPageSize.SelectedIndexChanged += selPageSize_SelectedIndexChanged;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The Page_Load server event handler on this user control is used
        /// to populate the current files from the appropriate PortalUpload Directory or the HostFolder
        /// and binds this list to the Datagrid
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            try
            {
				//FileManager requires at a bare minimum the dnn namespace, so regardless of wheter the ClientAPI is disabled of not we 
                //need to register it.
                ClientAPI.RegisterClientReference(Page, ClientAPI.ClientNamespaceReferences.dnn);
                DNNClientAPI.AddBodyOnloadEventHandler(Page, "initFileManager();");
                ClientAPI.RegisterClientVariable(Page, "UCPrefixID", DNNTree.ClientID.Replace(DNNTree.ID, ""), true);
                ClientAPI.RegisterClientVariable(Page, "UCPrefixName", DNNTree.UniqueID.Replace(DNNTree.ID, ""), true);

                DisabledButtons = DNNTree.IsDownLevel;

                if (IsHostMenu)
                {
                    RootFolderName = Localization.GetString("HostRoot", LocalResourceFile);
                    pnlSecurity.Visible = false;
                }
                else
                {
                    RootFolderName = Localization.GetString("PortalRoot", LocalResourceFile);
                    //Only Administrators can manage Folder Security
                    pnlSecurity.Visible = HasPermission("WRITE");
                }

                if (!Page.IsPostBack)
                {
                    DataCache.ClearFolderCache(FolderPortalID);
                    Localization.LocalizeDataGrid(ref dgFileList, LocalResourceFile);
                    InitializeTree();
                    BindFolderTree();
                    IsRefresh = true;
                    PageIndex = 0;
                    Sort = "FileType ASC, FileName ASC";
                    LastSort = "FileType ASC, FileName ASC";
                    MoveStatus = "";
                    FilterFiles = "";
                    DestPath = "0\\";
                    BindFileList();
                    BindStorageLocationTypes();

                    ManageSecurity();
                }
                else
                {
                    FilterFiles = txtFilter.Text;
                }

                if (LastFolderPath != DestPath)
                {
                    PageIndex = 0;
                    GeneratePermissionsGrid();
                }

                LastFolderPath = DestPath;
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The cmdUpdate_Click server event handler on this user control runs when the
        /// Update button is clicked
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	        2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        ///     [Jon Henning]	4/21/2004	Rebind grid after update to reflect update - DNN-178
        /// </history>
        /// -----------------------------------------------------------------------------
        private void cmdUpdate_Click(Object sender, EventArgs e)
        {
            var strFolderPath = PathUtils.Instance.StripFolderPath(LastFolderPath).Replace("\\", "/");
            var objFolderInfo = FolderManager.Instance.GetFolder(FolderPortalID, strFolderPath);
            if (objFolderInfo == null)
            {
				//file system needs synchronizing
                //with database...this folder is new.
                Synchronize();
                objFolderInfo = FolderManager.Instance.GetFolder(FolderPortalID, strFolderPath);
            }
            objFolderInfo.FolderPermissions.Clear();
            objFolderInfo.FolderPermissions.AddRange(dgPermissions.Permissions);
            try
            {
                FolderPermissionController.SaveFolderPermissions((FolderInfo)objFolderInfo);
                UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("PermissionsUpdated", LocalResourceFile), ModuleMessage.ModuleMessageType.GreenSuccess);
            }
            catch (Exception ex)
            {
                Exceptions.LogException(ex);
                UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("PermissionsError", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
            }
            GeneratePermissionsGrid(); //rebind the grid to reflect updated values - it is possible for the grid controls and the database to become out of sync
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The dgFileList_ItemDataBound server event handler on this user control runs when a
        /// File or Folder is added to the Files Table
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        ///     [cnurse]        12/3/2004   modified to handle folders and to use
        ///                                 custom images
        /// </history>
        /// -----------------------------------------------------------------------------
        private void dgFileList_ItemDataBound(object sender, DataGridItemEventArgs e)
        {
            ImageButton lnkEditFile;
            CheckBox chkFile;
            ImageButton lnkDeleteFile;
            Image lnkUnzip;
            ImageButton lnkOkRename;
            
            if (e.Item.ItemType == ListItemType.Item || e.Item.ItemType == ListItemType.EditItem || e.Item.ItemType == ListItemType.AlternatingItem || e.Item.ItemType == ListItemType.SelectedItem)
            {
                chkFile = (CheckBox) e.Item.FindControl("chkFile");
                if (chkFile != null)
                {
                    string sDefCssClass = dgFileList.ItemStyle.CssClass;
                    if (e.Item.ItemType == ListItemType.AlternatingItem)
                    {
                        sDefCssClass = dgFileList.AlternatingItemStyle.CssClass;
                    }
                    chkFile.Attributes.Add("onclick",
                                           "addFileToMoveList('" + ClientAPI.GetSafeJSString(chkFile.Attributes["filename"]) + "', this, '" + dgFileList.SelectedItemStyle.CssClass + "', '" +
                                           sDefCssClass + "');");
                }
                lnkEditFile = (ImageButton) e.Item.FindControl("lnkEditFile");
                if (lnkEditFile != null)
                {
                    lnkEditFile.CommandName = e.Item.ItemIndex.ToString();
                }
                lnkUnzip = (Image) e.Item.FindControl("lnkUnzip");
                if (lnkUnzip != null)
                {
                    if (lnkUnzip.Attributes["extension"] != "zip")
                    {
                        lnkUnzip.Visible = false;
                    }
                    else
                    {
                        if (e.Item.ItemType == ListItemType.EditItem)
                        {
                            lnkUnzip.Visible = false;
                        }
                        else
                        {
                            lnkUnzip.Attributes.Add("onclick", "return unzipFile('" + ClientAPI.GetSafeJSString(lnkUnzip.Attributes["filename"]) + "');");
                        }
                    }
                }
                lnkDeleteFile = (ImageButton) e.Item.FindControl("lnkDeleteFile");
                if (lnkDeleteFile != null)
                {
                    if (dgFileList.EditItemIndex == -1)
                    {
                        ClientAPI.AddButtonConfirm(lnkDeleteFile, string.Format(Localization.GetString("EnsureDeleteFile", LocalResourceFile), lnkDeleteFile.CommandName));
                    }
                }
                lnkOkRename = (ImageButton) e.Item.FindControl("lnkOkRename");
                if (lnkOkRename != null)
                {
                    lnkOkRename.CommandName = e.Item.ItemIndex.ToString();
                }
                
                if (Framework.AJAX.IsEnabled())
                {
                    var lnkDLFile = (LinkButton) e.Item.FindControl("lnkDLFile");
                    if (lnkDLFile != null)
                    {
                        Framework.AJAX.RegisterPostBackControl(lnkDLFile);
                    }
                }
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The dgFileList_SortCommand server event handler on this user control runs when one
        /// of the Column Header Links is clicked
        /// </summary>
        /// <param name="source"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	01/12/2007	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void dgFileList_SortCommand(object source, DataGridSortCommandEventArgs e)
        {
            BindFolderTree();
            IsRefresh = true;
            LastSort = Sort;
            if (Sort.Replace(" ASC", "").Replace(" DESC", "") == e.SortExpression)
            {
				//Switch order
                if (Sort.Contains("ASC"))
                {
                    Sort = Sort.Replace("ASC", "DESC");
                }
                else
                {
                    Sort = Sort.Replace("DESC", "ASC");
                }
            }
            else
            {
                Sort = e.SortExpression + " ASC";
            }
            MoveStatus = "";
            FilterFiles = "";
            BindFileList();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The DNNTree_NodeClick server event handler on this user control runs when a
        /// Node (Folder in the) in the TreeView is clicked
        /// </summary>
        /// <param name="source"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        ///     [cnurse]        12/3/2004   modified to handle folders and to use
        ///                                 custom images
        /// </history>
        /// -----------------------------------------------------------------------------
        private void DNNTree_NodeClick(object source, DNNTreeNodeClickEventArgs e)
        {
            SetFolder(e.Node);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// This method is called from the client to populate send new nodes down to the client
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	8/24/2005	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void DNNTree_PopulateOnDemand(object source, DNNTreeEventArgs e)
        {
            DestPath = e.Node.Key;
            PopulateTree(e.Node.TreeNodes, UnMaskPath(e.Node.Key.Replace("\\\\", "\\")));
            GeneratePermissionsGrid();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkAddFolder_Command server event handler on this user control runs when the
        /// Add Folder button is clicked
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        private void lnkAddFolder_Command(object sender, CommandEventArgs e)
        {
            if (String.IsNullOrEmpty(txtNewFolder.Text))
            {
                return;
            }
            var strSourcePath = UnMaskPath(DestPath);

            try
            {
                if (DNNTree.TreeNodes[0].DNNNodes.Count == 0)
                {
                    PopulateTree(DNNTree.TreeNodes[0].TreeNodes, RootFolderPath);
                }

                var colNodes = DNNTree.SelectedTreeNodes;
                if (colNodes.Count > 0)
                {
                    var parentNode = (DNNTreeNode) colNodes[1];
                    var filterFolderName = txtNewFolder.Text.Replace(".", "_");

                    var folderPath = PathUtils.Instance.FormatFolderPath(
                        PathUtils.Instance.FormatFolderPath(
                        PathUtils.Instance.StripFolderPath(DestPath).Replace("\\", "/")) + filterFolderName);
                    
					//Add Folder to Database
                    FolderManager.Instance.AddFolder(FolderMappingController.Instance.GetFolderMapping(int.Parse(ddlStorageLocation.SelectedValue)), folderPath);

                    DestPath = MaskPath(PathUtils.Instance.AddTrailingSlash(strSourcePath) + filterFolderName + "\\");
                    LastFolderPath = DestPath;

                    //Add new folder to folders tree
                    parentNode.Selected = false;

                    var imageIndex = FolderMappings.IndexOfKey(int.Parse(ddlStorageLocation.SelectedValue));

                    var objNode = AddNode(filterFolderName, parentNode.Key.Replace("\\\\", "\\") + filterFolderName + "\\", imageIndex, parentNode.TreeNodes);
                    objNode.HasNodes = false;
                    objNode.MakeNodeVisible();
                    objNode.Selected = true;

                    SetFolder(objNode);
                }
            }
            catch (Exception ex)
            {
                DnnLog.Error(ex);
                var strErrorMessage = MaskString(ex.Message);
                ShowErrorMessage(strErrorMessage);
            }
            txtNewFolder.Text = "";
        }

		/// -----------------------------------------------------------------------------
		/// <summary>
		/// The lnkDeleteFolder_Command server event handler on this user control runs when the
		/// Add Folder ibutton is clicked
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		/// <remarks>
		/// </remarks>
		/// <history>
		/// 	[DYNST]	2/1/2004	Created
		///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
		/// </history>
		/// -----------------------------------------------------------------------------
		private void lnkDeleteFolder_Command(object sender, CommandEventArgs e)
        {
            string strSourcePath;
            var ctrlError = new LiteralControl();

            if (DestPath == DNNTree.TreeNodes[0].Key)
            {
				//Delete Root Node?  Then what? :/
                ShowErrorMessage(Localization.GetString("NotAllowedToDeleteRootFolder", LocalResourceFile));
                BindFileList();
                return;
            }
            else
            {
                strSourcePath = UnMaskPath(DestPath);
            }
            var dinfo = new DirectoryInfo(strSourcePath);
            if (dinfo.Exists == false)
            {
				//ODD...
                ShowErrorMessage(Localization.GetString("FolderAlreadyRemoved", LocalResourceFile));
                BindFileList();
                return;
            }
            if ((Directory.GetDirectories(strSourcePath).Length > 0) || (dgFileList.Items.Count > 0))
            {
				//Files and/or folders exist in directory..
                //Files in current folder, make them delete first
                //Recursive Folder-delete can be enabled by adjusting this Sub
                ShowErrorMessage(Localization.GetString("PleaseRemoveFilesBeforeDeleting", LocalResourceFile));
                BindFileList();
                return;
            }
            try
            {
				//Delete Folder
                var folder = FolderManager.Instance.GetFolder(FolderPortalID, PathUtils.Instance.StripFolderPath(DestPath).Replace("\\", "/"));
                FolderManager.Instance.DeleteFolder(folder);

                if (DestPath.EndsWith("\\"))
                {
                    DestPath = DestPath.Substring(0, DestPath.Length - 1);
                }
                var intEnd = DestPath.LastIndexOf("\\");
                DestPath = DestPath.Substring(0, intEnd);

                //since we removed folder, we will select parent folder
                var colNodes = DNNTree.SelectedTreeNodes;
                if (colNodes.Count > 0)
                {
                    var objNode = (DNNTreeNode) colNodes[1];
                    objNode.Selected = false;
                    objNode.Parent.Selected = true;
                    objNode.Parent.DNNNodes.Remove(objNode);
                }
                BindFileList();
                GeneratePermissionsGrid();
            }
            catch (Exception ex)
            {
                DnnLog.Error(ex);

                ShowErrorMessage(Localization.GetString("ErrorDeletingFolder", LocalResourceFile) + ex.Message);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkDLFile_Command server event handler on this user control runs when the
        /// Download File button is clicked
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// The method calls the FileSystemUtils DownLoad method
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void lnkDLFile_Command(object sender, CommandEventArgs e)
        {
            var fileManager = Services.FileSystem.FileManager.Instance;
            var file = fileManager.GetFile(Convert.ToInt32(e.CommandArgument));
            fileManager.WriteFileToResponse(file, ContentDisposition.Inline);

            BindFolderTree();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkEditFile_Command server event handler on this user control runs when the
        /// Edit File button is clicked
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// The DataGrid is switched to Edit Mode
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void lnkEditFile_Command(object sender, CommandEventArgs e)
        {
            dgFileList.EditItemIndex = Convert.ToInt32(e.CommandName);
            BindFileList();
            SetEditMode();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkCancelRename_Command server event handler on this user control runs when the
        /// Cancel Edit button is clicked when in Edit Mode
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void lnkCancelRename_Command(object sender, CommandEventArgs e)
        {
            dgFileList.EditItemIndex = -1;
            BindFileList();
            SetEditMode();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkDeleteAllCheckedFiles_Command server event handler on this user control runs when the
        /// Javascript in the page triggers the event
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        private void lnkDeleteAllCheckedFiles_Command(object sender, CommandEventArgs e)
        {
            if (!String.IsNullOrEmpty(MoveFiles))
            {
                DeleteFiles(MoveFiles);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkDeleteFile_Command server event handler on this user control runs when the
        /// Javascript in the page triggers the event
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void lnkDeleteFile_Command(object sender, CommandEventArgs e)
        {
            DeleteFiles(e.CommandName);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkFilter_Command server event handler on this user control runs when the
        /// Filter Files button is clicked.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// The method calls the relevant FileSystemUtils method
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        private void lnkFilter_Command(object sender, CommandEventArgs e)
        {
            dgFileList.CurrentPageIndex = 0;
            BindFileList();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkMoveFiles_Command server event handler on this user control runs when the
        /// Move Files button is clicked.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// The method calls the relevant FileSystemUtils method
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        private void lnkMoveFiles_Command(object sender, CommandEventArgs e)
        {
            var arFiles = MoveFiles.Split(';');

            var strErrorMessages = "";


            //Check that the user has write permssion on the dest folder
            if (!HasPermission("ADD"))
            {
                strErrorMessages = Localization.GetString("NoWritePermission", LocalResourceFile);
            }
            else
            {
                var sourceFolder = FolderManager.Instance.GetFolder(FolderPortalID, UnMaskPath(SourcePath).Replace(RootFolderPath, "").Replace("\\", "/"));
                var destinationFolder = FolderManager.Instance.GetFolder(FolderPortalID, UnMaskPath(DestPath).Replace(RootFolderPath, "").Replace("\\", "/"));
                IFileInfo sourceFile;

                for (var i = 0; i <= arFiles.Length - 1; i++)
                {
                    if (!String.IsNullOrEmpty(arFiles[i]))
                    {
                        sourceFile = Services.FileSystem.FileManager.Instance.GetFile(sourceFolder, arFiles[i]);

                        try
                        {
                            switch (MoveStatus)
                            {
                                case "copy":
                                    Services.FileSystem.FileManager.Instance.CopyFile(sourceFile, destinationFolder);
                                    break;
                                case "move":
                                    Services.FileSystem.FileManager.Instance.MoveFile(sourceFile, destinationFolder);
                                    break;
                                case "unzip":
                                    Services.FileSystem.FileManager.Instance.UnzipFile(sourceFile, destinationFolder);
                                    BindFolderTree();
                                    break;
                            }

							//reload page to make treeview update.
							Response.Redirect(Globals.NavigateURL(), true);
                        }
                        catch (Exception ex)
                        {
							//Unmask paths here, remask with title before showining error message
                            DnnLog.Error(ex);
                            if (MoveStatus == "copy")
                            {
                                strErrorMessages += Localization.GetString("ErrorCopyingFile", LocalResourceFile) +
                                    PathUtils.Instance.AddTrailingSlash(UnMaskPath(SourcePath)) +
                                    arFiles[i] + "&nbsp;&nbsp; to " + PathUtils.Instance.AddTrailingSlash(UnMaskPath(DestPath)) +
                                    "<br />&nbsp;&nbsp;&nbsp;" + ex.Message + "<br />";
                            }
                            else
                            {
                                strErrorMessages += Localization.GetString("ErrorMovingFile", LocalResourceFile) +
                                    PathUtils.Instance.AddTrailingSlash(UnMaskPath(SourcePath)) +
                                    arFiles[i] + "&nbsp;&nbsp; to " + PathUtils.Instance.AddTrailingSlash(UnMaskPath(DestPath)) +
                                    "<br />&nbsp;&nbsp;&nbsp;" + ex.Message + "<br />";
                            }
                        }
                    }
                }
            }

            if (String.IsNullOrEmpty(strErrorMessages))
            {
                LastPath = PathUtils.Instance.RemoveTrailingSlash(DestPath);
            }
            else
            {
                strErrorMessages = MaskString(strErrorMessages);
                strErrorMessages = MaskString(strErrorMessages);
                ShowErrorMessage(strErrorMessages);
            }

            ManageSecurity();
            BindFileList();
            MoveStatus = "";
            SourcePath = "";
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkMoveFirst_Command server event handler on this user control runs when the
        /// Move First Page button is clicked.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// The method calls the relevant FileSystemUtils method
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void lnkMoveFirst_Command(object sender, CommandEventArgs e)
        {
            PageIndex = 0;
            BindFileList();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkMoveLast_Command server event handler on this user control runs when the
        /// Move Last Page button is clicked.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// The method calls the relevant FileSystemUtils method
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void lnkMoveLast_Command(object sender, CommandEventArgs e)
        {
            PageIndex = dgFileList.PageCount - 1;
            BindFileList();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkMoveNext_Command server event handler on this user control runs when the
        /// Move Next Page button is clicked.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// The method calls the relevant FileSystemUtils method
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void lnkMoveNext_Command(object sender, CommandEventArgs e)
        {
            PageIndex += 1;
            if (PageIndex > dgFileList.PageCount - 1)
            {
                PageIndex = dgFileList.PageCount - 1;
            }
            BindFileList();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkMoveNext_Command server event handler on this user control runs when the
        /// Move Previous Page button is clicked.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// The method calls the relevant FileSystemUtils method
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void lnkMovePrevious_Command(object sender, CommandEventArgs e)
        {
            PageIndex -= 1;
            if (PageIndex < 0)
            {
                PageIndex = 0;
            }
            BindFileList();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkOkRename_Command server event handler on this user control runs when the
        /// Save Changes (Ok) button is clicked when in Edit Mode
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void lnkOkRename_Command(object sender, CommandEventArgs e)
        {
            var strSourcePath = PathUtils.Instance.AddTrailingSlash(UnMaskPath(DestPath));
            var intItemID = Convert.ToInt32(e.CommandName);
            var strFileName = e.CommandArgument.ToString();
            var txtEdit = (TextBox)dgFileList.Items[intItemID].FindControl("txtEditFileName");
            var strSourceFile = strSourcePath + e.CommandArgument;
            var strDestFile = strSourcePath + txtEdit.Text;
            var strError = "";

            var sourceFolder = FolderManager.Instance.GetFolder(FolderPortalID, UnMaskPath(DestPath).Replace(RootFolderPath, "").Replace("\\", "/"));
            var file = Services.FileSystem.FileManager.Instance.GetFile(sourceFolder, strFileName);

            if (strSourceFile != strDestFile)
            {
				//move(rename) file
                try
                {
                    Services.FileSystem.FileManager.Instance.RenameFile(file, txtEdit.Text);
                }
                catch (Exception ex)
                {
                    DnnLog.Error(ex);
                    strError = ex.Message;
                }

                if (!String.IsNullOrEmpty(strError))
                {
                    strError = Localization.GetString("Rename.Error", LocalResourceFile) + strError;
                }
                else
                {
                    strSourceFile = strDestFile;
                }
            }
            
            if (String.IsNullOrEmpty(strError))
            {
                var chkReadOnly = (CheckBox) dgFileList.Items[intItemID].FindControl("chkReadOnly");
                var chkHidden = (CheckBox) dgFileList.Items[intItemID].FindControl("chkHidden");
                var chkSystem = (CheckBox) dgFileList.Items[intItemID].FindControl("chkSystem");
                var chkArchive = (CheckBox) dgFileList.Items[intItemID].FindControl("chkArchive");
                
                if ((chkReadOnly.Attributes["original"] != chkReadOnly.Checked.ToString()) || (chkHidden.Attributes["original"] != chkHidden.Checked.ToString()) ||
                    (chkSystem.Attributes["original"] != chkSystem.Checked.ToString()) || (chkArchive.Attributes["original"] != chkArchive.Checked.ToString()))
                {
					//attributes were changed
                    int iAttr = 0;
                    
                    if (chkReadOnly.Checked)
                    {
                        iAttr += (int) FileAttributes.ReadOnly;
                    }
                    
                    if (chkHidden.Checked)
                    {
                        iAttr += (int) FileAttributes.Hidden;
                    }
                    
                    if (chkSystem.Checked)
                    {
                        iAttr += (int) FileAttributes.System;
                    }
                    
                    if (chkArchive.Checked)
                    {
                        iAttr += (int) FileAttributes.Archive;
                    }
                    
                    try
                    {
                        Services.FileSystem.FileManager.Instance.SetAttributes(file, (FileAttributes)iAttr);
                    }
                    catch (Exception ex)
                    {
                        DnnLog.Error(ex);
                        strError = ex.Message;
                    }
                    if (!String.IsNullOrEmpty(strError))
                    {
                        strError = Localization.GetString("SetAttrubute.Error", LocalResourceFile) + strError;
                    }
                }
            }
            
            if (!String.IsNullOrEmpty(strError))
            {
                ShowErrorMessage(MaskString(strError));
            }
            
            dgFileList.EditItemIndex = -1;
            BindFileList();
            SetEditMode();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkRefresh_Command server event handler on this user control runs when the
        /// Refresh button is clicked.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        private void lnkRefresh_Command(object sender, CommandEventArgs e)
        {
            BindFolderTree();
            IsRefresh = true;
            Sort = "FileType ASC, FileName ASC";
            LastSort = "FileType ASC, FileName ASC";
            MoveStatus = "";
            FilterFiles = "";
            BindFileList();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkSelectFolder_Command server event handler on this user control runs when a
        /// Folder is selected.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        private void lnkSelectFolder_Command(object sender, CommandEventArgs e)
        {
            string strSourcePath = DestPath;
            string strFriendlyPath = Regex.Replace(strSourcePath, "^0\\\\", "Portal Root\\");
            dgFileList.CurrentPageIndex = 0;
            ClientAPI.AddButtonConfirm(lnkDeleteFolder, string.Format(Localization.GetString("EnsureDeleteFolder", LocalResourceFile), strFriendlyPath));
            strSourcePath = UnMaskPath(strSourcePath.Replace("\\\\", "\\"));
            LastPath = strSourcePath;
            GetFilesByFolder(PathUtils.Instance.AddTrailingSlash(strSourcePath));
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkSyncFolder_Command server event handler on this user control runs when the
        /// Synchronize Folder button is clicked.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	04/24/2006	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void lnkSyncFolder_Command(object sender, CommandEventArgs e)
        {
            string syncFolderPath = UnMaskPath(DestPath);
            bool isRecursive = chkRecursive.Checked;
            string relPath = syncFolderPath.Replace(RootFolderPath, "").Replace("\\", "/");
            FolderManager.Instance.Synchronize(FolderPortalID, relPath, isRecursive, true);
            
			//reload page to make treeview update.
			Response.Redirect(Globals.NavigateURL(), true);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkSyncFolders_Click server event handler on this user control runs when the
        /// Synchronize Folders button is clicked.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void lnkSyncFolders_Click(object sender, ImageClickEventArgs e)
        {
            if (IsHostMenu)
            {
                FolderManager.Instance.Synchronize(Null.NullInteger, "", true, false);
            }
            else
            {
                FolderManager.Instance.Synchronize(PortalId, "", true, false);
            }
            
			//reload page to make treeview update.
			Response.Redirect(Globals.NavigateURL(), true);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The lnkUpload_Command server event handler on this user control runs when the
        /// Upload button is clicked
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        private void lnkUpload_Command(object sender, CommandEventArgs e)
        {
            string strDestPath = Regex.Replace(DestPath, "^0\\\\", "");
            string WebUploadParam = "ftype=" + UploadType.File;
            string returnTab = "rtab=" + TabId;

            var parameters = new string[3 + ((String.IsNullOrEmpty(strDestPath)) ? 0: 1)];
            parameters[0] = "mid=" + ModuleId.ToString();
            parameters[1] = WebUploadParam;
            parameters[2] = returnTab;
            if (!String.IsNullOrEmpty(strDestPath))
            {
                parameters[3] = "dest=" + Globals.QueryStringEncode(strDestPath);
            }

            string destUrl = Globals.NavigateURL(TabId, "Edit", parameters);
            Response.Redirect(destUrl);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The selPageSize_SelectedIndexChanged server event handler on this user control 
        /// runs when the Page Size combo's index/value is changed
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[DYNST]	2/1/2004	Created
        ///     [Jon Henning]	11/1/2004	Updated to use ClientAPI/DNNTree
        /// </history>
        /// -----------------------------------------------------------------------------
        private void selPageSize_SelectedIndexChanged(Object sender, EventArgs e)
        {
            PageIndex = 0;
            BindFileList();
        }
		
		#endregion

        #region Nested type: eImageType

        private enum eImageType
        {
            Folder = 0,
            SecureFolder = 1,
            DatabaseFolder = 2,
            Page = 3
        }

        #endregion

        public ModuleActionCollection ModuleActions
        {
            get
            {
                var Actions = new ModuleActionCollection();

                if (FolderProvider.GetProviderList().Count > 3)
                {
                    Actions.Add(GetNextActionID(),
                                Localization.GetString("ManageFolderTypes.Action", LocalResourceFile),
                                ModuleActionType.EditContent,
                                "",
                                "icon_profile_16px.gif",
                                EditUrl("FolderMappings"),
                                false,
                                SecurityAccessLevel.Edit,
                                true,
                                false);
                }
                return Actions;
            }
        }
    }
}
