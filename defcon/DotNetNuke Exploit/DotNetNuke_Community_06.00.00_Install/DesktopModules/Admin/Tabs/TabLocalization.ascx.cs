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
using System.Collections.Generic;
using System.Linq;

using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Security.Permissions;
using DotNetNuke.Services.Localization;

using Telerik.Web.UI;


#endregion

namespace DotNetNuke.Modules.Admin.Tabs
{
    public partial class TabLocalization : PortalModuleBase
    {
        private bool _IsSelf = Null.NullBoolean;
        private bool _ShowEditColumn = true;
        private bool _ShowFooter = true;
        private bool _ShowLanguageColumn = true;
        private bool _ShowViewColumn = true;

        private TabInfo _Tab;

        #region "Contructors"

        public TabLocalization()
        {
            ToLocalizeTabId = Null.NullInteger;
        }

        #endregion

        #region "Protected Properties"

        protected TabInfo Tab
        {
            get
            {
                if (_Tab == null)
                {
                    _Tab = new TabController().GetTab(ToLocalizeTabId, PortalSettings.PortalId, false);
                }
                return _Tab;
            }
        }

        #endregion

        #region "Public Properties"

        public bool IsSelf
        {
            get
            {
                return _IsSelf;
            }
            set
            {
                _IsSelf = value;
            }
        }

        public bool ShowEditColumn
        {
            get
            {
                return _ShowEditColumn;
            }
            set
            {
                _ShowEditColumn = value;
            }
        }

        public bool ShowFooter
        {
            get
            {
                return _ShowFooter;
            }
            set
            {
                _ShowFooter = value;
            }
        }

        public bool ShowLanguageColumn
        {
            get
            {
                return _ShowLanguageColumn;
            }
            set
            {
                _ShowLanguageColumn = value;
            }
        }

        public bool ShowViewColumn
        {
            get
            {
                return _ShowViewColumn;
            }
            set
            {
                _ShowViewColumn = value;
            }
        }

        public int ToLocalizeTabId
        {
            get
            {
                return (int) ViewState["TabId"];
            }
            set
            {
                ViewState["TabId"] = value;
            }
        }

        #endregion

        #region "Private Methods"

        private List<ModuleInfo> GetChildModules(int tabId, string cultureCode)
        {
            var modules = new List<ModuleInfo>();
            var tabCtrl = new TabController();
            Locale locale = LocaleController.Instance.GetLocale(cultureCode);
            if (locale != null)
            {
                modules = (from kvp in tabCtrl.GetTabByCulture(tabId, PortalSettings.PortalId, locale).ChildModules where !kvp.Value.IsDeleted select kvp.Value).ToList();
            }
            return modules;
        }

        private List<ModuleInfo> GetLocalizedModulesList(int tabId, string cultureCode)
        {
            return (from m in GetChildModules(tabId, cultureCode) where m.CultureCode == cultureCode && m.IsLocalized select m).ToList();
        }

        private List<ModuleInfo> GetSharedModulesList(int tabId, string cultureCode)
        {
            return (from m in GetChildModules(tabId, cultureCode) where m.CultureCode == cultureCode select m).ToList();
        }

        private List<ModuleInfo> GetTranslatedModulesList(int tabId, string cultureCode)
        {
            return (from m in GetChildModules(tabId, cultureCode) where m.CultureCode == cultureCode && m.IsTranslated select m).ToList();
        }

        #endregion

        #region "Protected Methods"

        protected bool CanEdit(int editTabId, string cultureCode)
        {
            Locale locale = LocaleController.Instance.GetLocale(cultureCode);
            return TabPermissionController.CanManagePage(new TabController().GetTabByCulture(editTabId, PortalSettings.PortalId, locale));
        }

        protected bool CanView(int viewTabId, string cultureCode)
        {
            Locale locale = LocaleController.Instance.GetLocale(cultureCode);
            TabInfo viewTab = new TabController().GetTabByCulture(viewTabId, PortalSettings.PortalId, locale);
            return CanEdit(viewTabId, cultureCode) || (!viewTab.DisableLink && TabPermissionController.CanViewPage(new TabController().GetTabByCulture(viewTabId, PortalSettings.PortalId, locale)));
        }

        protected string GetLocalizedModules(int tabId, string cultureCode)
        {
            return GetLocalizedModulesList(tabId, cultureCode).Count.ToString();
        }

        protected string GetLocalizedStatus(int tabId, string cultureCode)
        {
            float localizedStatus = 0;
            if (GetSharedModulesList(tabId, cultureCode).Count > 0)
            {
                localizedStatus = GetLocalizedModulesList(tabId, cultureCode).Count/GetSharedModulesList(tabId, cultureCode).Count;
            }
            return string.Format("{0:#0%}", localizedStatus);
        }

        protected string GetSharedModules(int tabId, string cultureCode)
        {
            return GetSharedModulesList(tabId, cultureCode).Count.ToString();
        }

        protected string GetTotalModules(int tabId, string cultureCode)
        {
            return GetChildModules(tabId, cultureCode).Count.ToString();
        }

        protected string GetTranslatedModules(int tabId, string cultureCode)
        {
            return GetTranslatedModulesList(tabId, cultureCode).Count.ToString();
        }

        protected string GetTranslatedStatus(int tabId, string cultureCode)
        {
            float translatedStatus = 0;
            if (GetLocalizedModulesList(tabId, cultureCode).Count > 0)
            {
                translatedStatus = GetTranslatedModulesList(tabId, cultureCode).Count/GetLocalizedModulesList(tabId, cultureCode).Count;
            }
            return string.Format("{0:#0%}", translatedStatus);
        }

        #endregion

        #region "Public Methods"

        public override void DataBind()
        {
            if (ToLocalizeTabId != Null.NullInteger)
            {
                if (IsSelf)
                {
                    var tabs = new List<TabInfo>();
                    tabs.Add(Tab);
                    localizedTabsGrid.DataSource = tabs;
                }
                else
                {
                    localizedTabsGrid.DataSource = Tab.LocalizedTabs.Values;
                }
            }
            localizedTabsGrid.DataBind();
        }

        public void MarkTranslatedSelectedItems(bool translated)
        {
            foreach (GridDataItem row in localizedTabsGrid.SelectedItems)
            {
                var language = (string) row.OwnerTableView.DataKeyValues[row.ItemIndex]["CultureCode"];
                var tabCtrl = new TabController();
                TabInfo localizedTab = null;
                if (Tab.LocalizedTabs.TryGetValue(language, out localizedTab))
                {
                    tabCtrl.UpdateTranslationStatus(localizedTab, translated);
                }
            }

            DataBind();
        }

        #endregion

        #region "EventHandlers"

        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            localizedTabsGrid.PreRender += localizedModulesGrid_PreRender;
            markTabTranslatedButton.Click += markTabTranslatedButton_Click;
            markTabUnTranslatedButton.Click += markTabUnTranslatedButton_Click;
        }

        protected void localizedModulesGrid_PreRender(object sender, EventArgs e)
        {
            foreach (GridColumn column in localizedTabsGrid.Columns)
            {
                if ((column.UniqueName == "Edit"))
                {
                    column.Visible = ShowEditColumn;
                }
                if ((column.UniqueName == "Language"))
                {
                    column.Visible = ShowLanguageColumn;
                }
                if ((column.UniqueName == "View"))
                {
                    column.Visible = ShowViewColumn;
                }
            }
            localizedTabsGrid.Rebind();

            footerPlaceHolder.Visible = ShowFooter;
        }

        protected void markTabTranslatedButton_Click(object sender, EventArgs e)
        {
            MarkTranslatedSelectedItems(true);
        }

        protected void markTabUnTranslatedButton_Click(object sender, EventArgs e)
        {
            MarkTranslatedSelectedItems(false);
        }

        #endregion
    }
}