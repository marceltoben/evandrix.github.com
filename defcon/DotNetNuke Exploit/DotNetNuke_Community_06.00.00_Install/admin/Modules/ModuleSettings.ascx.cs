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
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using System.Web.UI;
using System.Web.UI.WebControls;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Modules.Definitions;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Framework;
using DotNetNuke.Security;
using DotNetNuke.Security.Permissions;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.ModuleCache;
using DotNetNuke.UI;
using DotNetNuke.UI.Modules;
using DotNetNuke.UI.Skins;
using DotNetNuke.UI.Skins.Controls;
using Globals = DotNetNuke.Common.Globals;
using DotNetNuke.Instrumentation;
using DotNetNuke.Web.UI.WebControls.Extensions;

#endregion

namespace DotNetNuke.Modules.Admin.Modules
{

    /// <summary>
    /// The ModuleSettingsPage PortalModuleBase is used to edit the settings for a 
    /// module.
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    /// 	[cnurse]	10/18/2004	documented
    /// 	[cnurse]	10/19/2004	modified to support custm module specific settings
    /// </history>
    public partial class ModuleSettingsPage : PortalModuleBase
    {

        #region Private Members

        private int _moduleId = -1;
        private Control _control;
        private ModuleInfo _module;
        private ModuleController _moduleCtrl;
        private TabController _tabCtrl;

        private ModuleInfo Module
        {
            get
            {
                if (_module == null)
                {
                    _module = ModuleCtrl.GetModule(_moduleId, TabId, false);
                }
                return _module;
            }
        }

        private ModuleController ModuleCtrl
        {
            get
            {
                if ((_moduleCtrl == null))
                {
                    _moduleCtrl = new ModuleController();
                }
                return _moduleCtrl;
            }
        }

        private ISettingsControl SettingsControl
        {
            get
            {
                return _control as ISettingsControl;
            }
        }

        private TabController TabCtrl
        {
            get
            {
                if ((_tabCtrl == null))
                {
                    _tabCtrl = new TabController();
                }
                return _tabCtrl;
            }
        }

        #endregion

        #region Private Methods

        /// <summary>
        /// BindData loads the settings from the Database
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	10/18/2004	documented
        /// </history>
        private void BindData()
        {
            if (Module != null)
            {
                var desktopModule = DesktopModuleController.GetDesktopModule(Module.DesktopModuleID, PortalId);
                dgPermissions.ResourceFile = Globals.ApplicationPath + "/DesktopModules/" + desktopModule.FolderName + "/" + Localization.LocalResourceDirectory + "/" +
                                             Localization.LocalSharedResourceFile;
                chkInheritPermissions.Checked = Module.InheritViewPermissions;
                dgPermissions.InheritViewPermissionsFromTab = Module.InheritViewPermissions;
                txtFriendlyName.Text = Module.DesktopModule.FriendlyName;
                txtTitle.Text = Module.ModuleTitle;
                ctlIcon.Url = Module.IconFile;
                if (cboTab.Items.FindByValue(Module.TabID.ToString()) != null)
                {
                    cboTab.Items.FindByValue(Module.TabID.ToString()).Selected = true;
                }
                rowTab.Visible = cboTab.Items.Count != 1;
                chkAllTabs.Checked = Module.AllTabs;
                cboVisibility.SelectedIndex = (int)Module.Visibility;
                chkAdminBorder.Checked = Settings["hideadminborder"] != null ? bool.Parse(Settings["hideadminborder"].ToString()) : false;

                var objModuleDef = ModuleDefinitionController.GetModuleDefinitionByID(Module.ModuleDefID);
                if (objModuleDef.DefaultCacheTime == Null.NullInteger)
                {
                    lblCacheDurationWarning.Visible = true;
                    txtCacheDuration.Text = Module.CacheTime.ToString();
                }
                else
                {
                    lblCacheDurationWarning.Visible = false;
                    txtCacheDuration.Text = Module.CacheTime.ToString();
                }
                BindModuleCacheProviderList();

                ShowCacheRows();

                cboAlign.Items.FindByValue(Module.Alignment).Selected = true;
                txtColor.Text = Module.Color;
                txtBorder.Text = Module.Border;

                txtHeader.Text = Module.Header;
                txtFooter.Text = Module.Footer;

                if (!Null.IsNull(Module.StartDate))
                {
                    startDatePicker.SelectedDate = Module.StartDate;
                }
                if (!Null.IsNull(Module.EndDate))
                {
                    endDatePicker.SelectedDate = Module.EndDate;
                }

                BindContainers();

                chkDisplayTitle.Checked = Module.DisplayTitle;
                chkDisplayPrint.Checked = Module.DisplayPrint;
                chkDisplaySyndicate.Checked = Module.DisplaySyndicate;

                // TODO: toggle visiblity client-side, avoid postback.
                chkWebSlice.Checked = Module.IsWebSlice;
                webSliceTitle.Visible = Module.IsWebSlice;
                webSliceExpiry.Visible = Module.IsWebSlice;
                webSliceTTL.Visible = Module.IsWebSlice;

                txtWebSliceTitle.Text = Module.WebSliceTitle;
                if (!Null.IsNull(Module.WebSliceExpiryDate))
                {
                    diWebSliceExpiry.SelectedDate = Module.WebSliceExpiryDate;
                }
                if (!Null.IsNull(Module.WebSliceTTL))
                {
                    txtWebSliceTTL.Text = Module.WebSliceTTL.ToString();
                }
                if (Module.ModuleID == PortalSettings.Current.DefaultModuleId && Module.TabID == PortalSettings.Current.DefaultTabId)
                {
                    chkDefault.Checked = true;
                }
            }
        }

        private void BindContainers()
        {
            var portalController = new PortalController();
            var portal = portalController.GetPortal(PortalId);
            var containers = SkinController.GetSkins(portal, SkinController.RootContainer, SkinScope.All)
                                    .ToDictionary(skin => skin.Key, skin => skin.Value);

            moduleContainerCombo.DataSource = containers;
            moduleContainerCombo.DataBind();
            moduleContainerCombo.InsertItem(0, "<" + Localization.GetString("None_Specified") + ">", "");
            moduleContainerCombo.Select(Module.ContainerSrc, false);

        }

        private void BindModuleCacheProviderList()
        {
            cboCacheProvider.DataSource = GetFilteredProviders(ModuleCachingProvider.GetProviderList(), "ModuleCachingProvider");
            cboCacheProvider.DataBind();

            cboCacheProvider.Items.Insert(0, new ListItem(Localization.GetString("None_Specified"), ""));

            if (!string.IsNullOrEmpty(Module.GetEffectiveCacheMethod()) && cboCacheProvider.Items.FindByValue(Module.GetEffectiveCacheMethod()) != null)
            {
                cboCacheProvider.Items.FindByValue(Module.GetEffectiveCacheMethod()).Selected = true;
            }
            else
            {
                //select the None Specified value
                cboCacheProvider.Items[0].Selected = true;
            }

            lblCacheInherited.Visible = Module.CacheMethod != Module.GetEffectiveCacheMethod();
        }

        /// <summary>
        ///   GetFilteredProviders takes a Dictionary and a string and returns an IEnumerable list
        ///   where the key is modified by the filter string.
        /// </summary>
        /// <typeparam name = "T"></typeparam>
        /// <param name = "providerList">A dictionary object containing the list of objects</param>
        /// <param name = "keyFilter">A string used for filtering the key name</param>
        /// <returns>An enumeration with the modified and unmodified keys.</returns>
        /// <remarks>
        /// </remarks>
        /// <history>
        ///   [jbrinkman]    11/17/2009  Initial release
        /// </history>
        private IEnumerable GetFilteredProviders<T>(Dictionary<string, T> providerList, string keyFilter)
        {
            var providers = from provider in providerList let filteredkey = provider.Key.Replace(keyFilter, String.Empty) select new { filteredkey, provider.Key };

            return providers;
        }

        private void ShowCacheRows()
        {
            if (!string.IsNullOrEmpty(cboCacheProvider.SelectedValue))
            {
                divCacheDuration.Visible = true;
            }
            else
            {
                divCacheDuration.Visible = false;
            }
        }

        #endregion

        protected string GetInstalledOnLink(object dataItem)
        {
            var returnValue = new StringBuilder();
            if ((dataItem is TabInfo))
            {
                var tab = (TabInfo)dataItem;
                var index = 0;
                TabCtrl.PopulateBreadCrumbs(ref tab);
                foreach (TabInfo t in tab.BreadCrumbs)
                {
                    if ((index > 0))
                    {
                        returnValue.Append(" > ");
                    }
                    if ((tab.BreadCrumbs.Count - 1 == index))
                    {
                        returnValue.AppendFormat("<a href=\"{0}\">{1}</a>", t.FullUrl, t.LocalizedTabName);
                    }
                    else
                    {
                        returnValue.AppendFormat("{0}", t.LocalizedTabName);
                    }
                    index = index + 1;
                }
            }
            return returnValue.ToString();
        }

        #region Event Handlers

        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            jQuery.RequestDnnPluginsRegistration();

            var objModules = new ModuleController();
            ModuleControlInfo objModuleControlInfo;

            //get ModuleId
            if ((Request.QueryString["ModuleId"] != null))
            {
                _moduleId = Int32.Parse(Request.QueryString["ModuleId"]);
            }
            if (Module.ContentItemId == Null.NullInteger && Module.ModuleID != Null.NullInteger)
            {
                //This tab does not have a valid ContentItem
                objModules.CreateContentItem(Module);

                objModules.UpdateModule(Module);
            }

            //Verify that the current user has access to edit this module
            if (!ModulePermissionController.HasModuleAccess(SecurityAccessLevel.Edit, "MANAGE", Module))
            {
                Response.Redirect(Globals.AccessDeniedURL(), true);
            }
            if (Module != null)
            {
                //get module
                TabModuleId = Module.TabModuleID;

                //get Settings Control
                objModuleControlInfo = ModuleControlController.GetModuleControlByControlKey("Settings", Module.ModuleDefID);

                if (objModuleControlInfo != null)
                {
                    _control = ControlUtilities.LoadControl<Control>(Page, objModuleControlInfo.ControlSrc);

                    var settingsControl = _control as ISettingsControl;
                    if (settingsControl != null)
                    {
                        //Set ID
                        _control.ID = Path.GetFileNameWithoutExtension(objModuleControlInfo.ControlSrc).Replace('.', '-');

                        //add module settings
                        settingsControl.ModuleContext.Configuration = Module;

                        hlSpecificSettings.Text = Localization.GetString("ControlTitle_settings", settingsControl.LocalResourceFile);
                        if(String.IsNullOrEmpty(hlSpecificSettings.Text))
                        {
                            hlSpecificSettings.Text = String.Format(Localization.GetString("ControlTitle_settings", LocalResourceFile), Module.DesktopModule.FriendlyName);
                        }
                        pnlSpecific.Controls.Add(_control);
                    }
                }
            }
        }

        /// <summary>
        /// Page_Load runs when the control is loaded
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	10/18/2004	documented
        /// 	[cnurse]	10/19/2004	modified to support custm module specific settings
        ///     [vmasanas]  11/28/2004  modified to support modules in admin tabs
        /// </history>
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            chkAllTabs.CheckedChanged += OnAllTabsCheckChanged;
            chkInheritPermissions.CheckedChanged += OnInheritPermissionsChanged;
            chkWebSlice.CheckedChanged += OnWebSliceCheckChanged;
            cboCacheProvider.TextChanged += OnCacheProviderIndexChanged;
            cmdDelete.Click += OnDeleteClick;
            cmdUpdate.Click += OnUpdateClick;
            dgOnTabs.NeedDataSource += OnPagesGridNeedDataSource;

            startDatePicker.MinDate = DateTime.Now;
            endDatePicker.MinDate = DateTime.Now;

            try
            {
                cancelHyperLink.NavigateUrl = Globals.NavigateURL();

                if (_moduleId != -1)
                {
                    ctlAudit.Entity = Module;
                }
                if (Page.IsPostBack == false)
                {
                    ctlIcon.FileFilter = Globals.glbImageFileTypes;

                    dgPermissions.TabId = PortalSettings.ActiveTab.TabID;
                    dgPermissions.ModuleID = _moduleId;


                    cboTab.DataSource = TabController.GetPortalTabs(PortalId, -1, false, Null.NullString, true, false, true, false, true);
                    cboTab.DataBind();

                    //if tab is a  host tab, then add current tab
                    if (Globals.IsHostTab(PortalSettings.ActiveTab.TabID))
                    {
                        cboTab.Items.Insert(0, new ListItem(PortalSettings.ActiveTab.LocalizedTabName, PortalSettings.ActiveTab.TabID.ToString()));
                    }
                    if (Module != null)
                    {
                        //parent tab might not be loaded in cbotab if user does not have edit rights on it
                        if (cboTab.Items.FindByValue(Module.TabID.ToString()) == null)
                        {
                            var objtabs = new TabController();
                            var objTab = objtabs.GetTab(Module.TabID, Module.PortalID, false);
                            cboTab.Items.Add(new ListItem(objTab.LocalizedTabName, objTab.TabID.ToString()));
                        }
                    }

                    //only Portal Administrators can manage the visibility on all Tabs
                    rowAllTabs.Visible = PortalSecurity.IsInRole("Administrators");

                    //tab administrators can only manage their own tab
                    if (!TabPermissionController.CanAdminPage())
                    {
                        chkAllModules.Enabled = false;
                        chkDefault.Enabled = false;
                        cboTab.Enabled = false;
                    }
                    if (_moduleId != -1)
                    {
                        BindData();
                        cmdDelete.Visible = ModulePermissionController.CanDeleteModule(Module) || TabPermissionController.CanAddContentToPage();
                    }
                    else
                    {
                        cboVisibility.SelectedIndex = 0; //maximized
                        chkAllTabs.Checked = false;
                        cmdDelete.Visible = false;
                    }
                    cmdUpdate.Visible = ModulePermissionController.HasModulePermission(Module.ModulePermissions, "EDIT,MANAGE") || TabPermissionController.CanAddContentToPage();
                    permissionsRow.Visible = ModulePermissionController.CanAdminModule(Module) || TabPermissionController.CanAddContentToPage();

                    //Set visibility of Specific Settings
                    if (SettingsControl == null == false)
                    {
                        //Get the module settings from the PortalSettings and pass the
                        //two settings hashtables to the sub control to process
                        SettingsControl.LoadSettings();
                        specificSettingsTab.Visible = true;
                        fsSpecific.Visible = true;
                    }
                    else
                    {
                        specificSettingsTab.Visible = false;
                        fsSpecific.Visible = false;
                    }

                    termsSelector.PortalId = Module.PortalID;
                    termsSelector.Terms = Module.Terms;
                    termsSelector.DataBind();
                }
                cultureLanguageLabel.Language = Module.CultureCode;
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnAllTabsCheckChanged(object sender, EventArgs e)
        {
            trnewPages.Visible = chkAllTabs.Checked;
        }

        /// <summary>
        /// chkInheritPermissions_CheckedChanged runs when the Inherit View Permissions
        ///	check box is changed
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	10/18/2004	documented
        /// </history>
        protected void OnInheritPermissionsChanged(Object sender, EventArgs e)
        {
            dgPermissions.InheritViewPermissionsFromTab = chkInheritPermissions.Checked;
        }

        protected void OnWebSliceCheckChanged(object sender, EventArgs e)
        {
            // TODO: need to remove postback.
            webSliceTitle.Visible = chkWebSlice.Checked;
            webSliceExpiry.Visible = chkWebSlice.Checked;
            webSliceTTL.Visible = chkWebSlice.Checked;
        }

        protected void OnCacheProviderIndexChanged(object sender, EventArgs e)
        {
            ShowCacheRows();
        }

        /// <summary>
        /// cmdDelete_Click runs when the Delete LinkButton is clicked.
        /// It deletes the current portal form the Database.  It can only run in Host
        /// (SuperUser) mode
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	10/18/2004	documented
        /// </history>
        protected void OnDeleteClick(Object sender, EventArgs e)
        {
            try
            {
                var objModules = new ModuleController();
                objModules.DeleteTabModule(TabId, _moduleId, true);
                Response.Redirect(Globals.NavigateURL(), true);
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// <summary>
        /// cmdUpdate_Click runs when the Update LinkButton is clicked.
        /// It saves the current Site Settings
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	10/18/2004	documented
        /// 	[cnurse]	10/19/2004	modified to support custm module specific settings
        /// </history>
        protected void OnUpdateClick(object sender, EventArgs e)
        {
            try
            {
                if (Page.IsValid)
                {
                    var objModules = new ModuleController();
                    var allTabsChanged = false;

                    //tab administrators can only manage their own tab
                    if (!TabPermissionController.CanAdminPage())
                    {
                        chkAllTabs.Enabled = false;
                        chkDefault.Enabled = false;
                        chkAllModules.Enabled = false;
                        cboTab.Enabled = false;
                    }
                    Module.ModuleID = _moduleId;
                    Module.ModuleTitle = txtTitle.Text;
                    Module.Alignment = cboAlign.SelectedItem.Value;
                    Module.Color = txtColor.Text;
                    Module.Border = txtBorder.Text;
                    Module.IconFile = ctlIcon.Url;
                    if (!String.IsNullOrEmpty(txtCacheDuration.Text))
                    {
                        Module.CacheTime = Int32.Parse(txtCacheDuration.Text);
                    }
                    else
                    {
                        Module.CacheTime = 0;
                    }
                    Module.CacheMethod = cboCacheProvider.SelectedValue;
                    Module.TabID = TabId;
                    if (Module.AllTabs != chkAllTabs.Checked)
                    {
                        allTabsChanged = true;
                    }
                    Module.AllTabs = chkAllTabs.Checked;
                    objModules.UpdateTabModuleSetting(Module.TabModuleID, "hideadminborder", chkAdminBorder.Checked.ToString());
                    switch (Int32.Parse(cboVisibility.SelectedItem.Value))
                    {
                        case 0:
                            Module.Visibility = VisibilityState.Maximized;
                            break;
                        case 1:
                            Module.Visibility = VisibilityState.Minimized;
                            break;
                        case 2:
                            Module.Visibility = VisibilityState.None;
                            break;
                    }
                    Module.IsDeleted = false;
                    Module.Header = txtHeader.Text;
                    Module.Footer = txtFooter.Text;

                    if (startDatePicker.SelectedDate != null)
                    {
                        Module.StartDate = startDatePicker.SelectedDate.Value;
                    }
                    else
                    {
                        Module.StartDate = Null.NullDate;
                    }

                    if (endDatePicker.SelectedDate != null)
                    {
                        Module.EndDate = endDatePicker.SelectedDate.Value;
                    }
                    else
                    {
                        Module.EndDate = Null.NullDate;
                    }

                    Module.ContainerSrc = moduleContainerCombo.SelectedValue;
                    Module.ModulePermissions.Clear();
                    Module.ModulePermissions.AddRange(dgPermissions.Permissions);
                    Module.Terms.Clear();
                    Module.Terms.AddRange(termsSelector.Terms);
                    Module.InheritViewPermissions = chkInheritPermissions.Checked;
                    Module.DisplayTitle = chkDisplayTitle.Checked;
                    Module.DisplayPrint = chkDisplayPrint.Checked;
                    Module.DisplaySyndicate = chkDisplaySyndicate.Checked;
                    Module.IsWebSlice = chkWebSlice.Checked;
                    Module.WebSliceTitle = txtWebSliceTitle.Text;

                    if (diWebSliceExpiry.SelectedDate != null)
                    {
                        Module.WebSliceExpiryDate = diWebSliceExpiry.SelectedDate.Value;
                    }
                    else
                    {
                        Module.WebSliceExpiryDate = Null.NullDate;
                    }

                    if (!string.IsNullOrEmpty(txtWebSliceTTL.Text))
                    {
                        Module.WebSliceTTL = Convert.ToInt32(txtWebSliceTTL.Text);
                    }
                    Module.IsDefaultModule = chkDefault.Checked;
                    Module.AllModules = chkAllModules.Checked;
                    objModules.UpdateModule(Module);

                    //Update Custom Settings
                    if (SettingsControl != null)
                    {
                        try
                        {
                            SettingsControl.UpdateSettings();
                        }
                        catch (ThreadAbortException exc)
                        {
                            DnnLog.Debug(exc);

                            Thread.ResetAbort(); //necessary
                        }
                        catch (Exception ex)
                        {
                            Exceptions.LogException(ex);
                        }
                    }

                    //These Module Copy/Move statements must be 
                    //at the end of the Update as the Controller code assumes all the 
                    //Updates to the Module have been carried out.

                    //Check if the Module is to be Moved to a new Tab
                    if (!chkAllTabs.Checked)
                    {
                        var newTabId = Int32.Parse(cboTab.SelectedItem.Value);
                        if (TabId != newTabId)
                        {
                            //First check if there already is an instance of the module on the target page
                            var tmpModule = objModules.GetModule(_moduleId, newTabId);
                            if (tmpModule == null)
                            {
                                //Move module
                                objModules.MoveModule(_moduleId, TabId, newTabId, "");
                            }
                            else
                            {
                                //Warn user
                                UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("ModuleExists", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                                return;
                            }
                        }
                    }

                    //Check if Module is to be Added/Removed from all Tabs
                    if (allTabsChanged)
                    {
                        var listTabs = TabController.GetPortalTabs(PortalSettings.PortalId, Null.NullInteger, false, true);
                        if (chkAllTabs.Checked)
                        {
                            if (!chkNewTabs.Checked)
                            {
                                foreach (var destinationTab in listTabs)
                                {
                                    objModules.CopyModule(Module, destinationTab, Null.NullString, true);
                                }
                            }
                        }
                        else
                        {
                            objModules.DeleteAllModules(_moduleId, TabId, listTabs);
                        }
                    }

                    //Navigate back to admin page
                    Response.Redirect(Globals.NavigateURL(), true);
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnPagesGridNeedDataSource(object sender, Telerik.Web.UI.GridNeedDataSourceEventArgs e)
        {
            var tabsByModule = TabCtrl.GetTabsByModuleID(_moduleId);
            tabsByModule.Remove(TabId);
            dgOnTabs.DataSource = tabsByModule.Values;
        }

        #endregion

    }
}