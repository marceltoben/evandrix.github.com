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
using System.Web.UI;
using System.Web.UI.WebControls;

using DotNetNuke.Common;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Host;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Installer;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Personalization;
using DotNetNuke.UI.Skins.Controls;
using DotNetNuke.Web.UI;
using DotNetNuke.Web.UI.WebControls;

using Telerik.Web.UI;

//
// DotNetNuke® - http://www.dotnetnuke.com
// Copyright (c) 2002-2009
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
//

#endregion

namespace DotNetNuke.Modules.Admin.Languages
{
    /// -----------------------------------------------------------------------------
    /// <summary>
    ///   Manage languages for the portal
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    ///   [erikvb]    20100224  Created
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class LanguageEnabler : PortalModuleBase
    {
        private readonly TabController _TabController = new TabController();
        private string _PortalDefault = "";

        #region "Private Properties"

        private string ViewType
        {
            get
            {
                return Localization.GetLanguageDisplayMode(PortalId);
            }
        }

        #endregion

        #region "Protected Properties"

        protected string PortalDefault
        {
            get
            {
                return _PortalDefault;
            }
        }

        #endregion

        #region "Private Methods"

        private void BindDefaultLanguageSelector()
        {
            languagesComboBox.DataBind();
            languagesComboBox.SetLanguage(PortalDefault);
        }

        private void BindGrid()
        {
            languagesGrid.DataSource = LocaleController.Instance.GetLocales(Null.NullInteger).Values;
            languagesGrid.DataBind();
        }

        private TabCollection GetLocalizedPages(string code, bool includeNeutral)
        {
            return _TabController.GetTabsByPortal(PortalId).WithCulture(code, includeNeutral);
        }

        #endregion

        #region "Protected Methods"

        protected bool CanEnableDisable(string code)
        {
            bool canEnable = true;
            if (IsLanguageEnabled(code))
            {
                canEnable = !IsDefaultLanguage(code) && !IsLanguagePublished(code);
            }
            else
            {
                canEnable = !IsDefaultLanguage(code);
            }
            return canEnable;
        }

        protected bool CanLocalize(string code)
        {
            return PortalSettings.ContentLocalizationEnabled && IsLanguageEnabled(code) && !IsDefaultLanguage(code);
        }

        protected string GetEditUrl(string id)
        {
            return ModuleContext.NavigateUrl(TabId, "Edit", false, string.Format("mid={0}", ModuleId), string.Format("locale={0}", id));
        }

        protected string GetEditKeysUrl(string code, string mode)
        {
            return ModuleContext.NavigateUrl(TabId, "Editor", false, string.Format("mid={0}", ModuleId), string.Format("locale={0}", code), string.Format("mode={0}", mode));
        }

        protected string GetLocalizedPages(string code)
        {
            string status = "";
            if (!IsDefaultLanguage(code) && IsLocalized(code))
            {
                status = GetLocalizedPages(code, false).Where(t => !t.Value.IsDeleted).Count().ToString();
            }
            return status;
        }

        protected string GetLocalizedStatus(string code)
        {
            string status = "";
            if (!IsDefaultLanguage(code) && IsLocalized(code))
            {
                int defaultPageCount = GetLocalizedPages(PortalSettings.DefaultLanguage, false).Count;
                int currentPageCount = GetLocalizedPages(code, false).Count;
                status = string.Format("{0:#0%}", currentPageCount / (float)defaultPageCount);
            }
            return status;
        }

        protected string GetTranslatedPages(string code)
        {
            string status = "";
            if (!IsDefaultLanguage(code) && IsLocalized(code))
            {
                int translatedCount = (from t in new TabController().GetTabsByPortal(PortalId).WithCulture(code, false).Values where t.IsTranslated && !t.IsDeleted select t).Count();
                status = translatedCount.ToString();
            }
            return status;
        }

        protected string GetTranslatedStatus(string code)
        {
            string status = "";
            if (!IsDefaultLanguage(code) && IsLocalized(code))
            {
                int localizedCount = GetLocalizedPages(code, false).Count;
                int translatedCount = (from t in new TabController().GetTabsByPortal(PortalId).WithCulture(code, false).Values where t.IsTranslated select t).Count();
                status = string.Format("{0:#0%}", translatedCount / (float)localizedCount);
            }
            return status;
        }

        protected bool IsDefaultLanguage(string code)
        {
            bool returnValue = false;
            if (code == PortalDefault)
            {
                returnValue = true;
            }
            return returnValue;
        }

        protected bool IsLanguageEnabled(string Code)
        {
            Locale enabledLanguage = null;
            return LocaleController.Instance.GetLocales(ModuleContext.PortalId).TryGetValue(Code, out enabledLanguage);
        }

        protected bool IsLanguagePublished(string Code)
        {
            bool isPublished = Null.NullBoolean;
            Locale enabledLanguage = null;
            if (LocaleController.Instance.GetLocales(ModuleContext.PortalId).TryGetValue(Code, out enabledLanguage))
            {
                isPublished = enabledLanguage.IsPublished;
            }
            return isPublished;
        }

        protected bool IsLocalized(string code)
        {
            return GetLocalizedPages(code, false).Count > 0;
        }

        #endregion

        #region "Event Handlers"

        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            languagesComboBox.ModeChanged += languagesComboBox_ModeChanged;
            languagesGrid.ItemCreated += languagesGrid_ItemCreated;
            languagesGrid.PreRender += languagesGrid_PreRender;
            updateButton.Click += updateButton_Click;
            cmdEnableLocalizedContent.NavigateUrl = ModuleContext.NavigateUrl(ModuleContext.TabId, "EnableContent", false, "mid=" + ModuleContext.ModuleId);
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            try
            {
                _PortalDefault = PortalSettings.DefaultLanguage;
                if (!Page.IsPostBack)
                {
                    BindDefaultLanguageSelector();
                    BindGrid();
                    chkBrowser.Checked = ModuleContext.PortalSettings.EnableBrowserLanguage;
                }

                if (!UserInfo.IsSuperUser)
                {
                    UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("HostOnlyMessage", LocalResourceFile), ModuleMessage.ModuleMessageType.BlueInfo);
                }

                systemDefaultLanguageLabel.Language = Localization.SystemLocale;
                if (PortalSettings.ContentLocalizationEnabled)
                {
                    defaultLanguageLabel.Language = PortalSettings.DefaultLanguage;
                    defaultLanguageLabel.Visible = true;
                    languagesComboBox.Visible = false;
                    updateButton.Visible = false;
                    cmdEnableLocalizedContent.Visible = false;
                    defaultPortalMessage.Text = Localization.GetString("PortalDefaultPublished.Text", LocalResourceFile);
                    enabledPublishedPlaceHolder.Visible = true;
                }
                else
                {
                    defaultLanguageLabel.Visible = false;
                    languagesComboBox.Visible = true;
                    updateButton.Visible = true;
                    cmdEnableLocalizedContent.Visible = Host.EnableContentLocalization;
                    defaultPortalMessage.Text = Localization.GetString("PortalDefaultEnabled.Text", LocalResourceFile);
                    enabledPublishedPlaceHolder.Visible = false;
                }

                addLanguageLink.Visible = UserInfo.IsSuperUser;
                addLanguageLink.NavigateUrl = ModuleContext.EditUrl("Edit");

                createLanguagePackLink.Visible = UserInfo.IsSuperUser;
                createLanguagePackLink.NavigateUrl = ModuleContext.EditUrl("PackageWriter");

                verifyLanguageResourcesLink.Visible = UserInfo.IsSuperUser;
                verifyLanguageResourcesLink.NavigateUrl = ModuleContext.EditUrl("Verify");

                installLanguagePackLink.Visible = UserInfo.IsSuperUser;
                installLanguagePackLink.NavigateUrl = Util.InstallURL(ModuleContext.TabId, "");                         
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void enabledCheckbox_CheckChanged(object sender, EventArgs e)
        {
            try
            {
                if ((sender) is DnnCheckBox)
                {
                    var enabledCheckbox = (DnnCheckBox) sender;
                    int languageId = int.Parse(enabledCheckbox.CommandArgument);
                    Locale locale = LocaleController.Instance.GetLocale(languageId);
                    Locale defaultLocale = LocaleController.Instance.GetDefaultLocale(PortalId);

                    Dictionary<string, Locale> enabledLanguages = LocaleController.Instance.GetLocales(PortalId);
                    if (enabledCheckbox.Enabled)
                    {
                        // do not touch default language
                        if (enabledCheckbox.Checked)
                        {
                            if (!enabledLanguages.ContainsKey(locale.Code))
                            {
                                //Add language to portal
                                Localization.AddLanguageToPortal(PortalId, languageId, true);
                            }
                        }
                        else
                        {
                            //remove language from portal
                            Localization.RemoveLanguageFromPortal(PortalId, languageId);
                        }
                    }

                    //Redirect to refresh page (and skinobjects)
                    Response.Redirect(Globals.NavigateURL(), true);
                }
            }
            catch (Exception ex)
            {
                Exceptions.ProcessModuleLoadException(this, ex);
            }
        }

        protected void languagesComboBox_ModeChanged(object sender, EventArgs e)
        {
            BindGrid();
        }

        protected void languagesGrid_ItemCreated(object sender, GridItemEventArgs e)
        {
            var gridItem = e.Item as GridDataItem;
            if (gridItem != null)
            {
                var languge = gridItem.DataItem as Locale;
                if (languge != null)
                {
                    var localizeLink = gridItem.FindControl("localizeLink") as HyperLink;
                    if (localizeLink != null)
                    {
                        Locale defaultLocale = LocaleController.Instance.GetLocale(PortalDefault);
                        CultureDropDownTypes DisplayType = default(CultureDropDownTypes);
                        string _ViewType = Convert.ToString(Personalization.GetProfile("LanguageDisplayMode", "ViewType" + PortalId));
                        switch (_ViewType)
                        {
                            case "NATIVE":
                                DisplayType = CultureDropDownTypes.NativeName;
                                break;
                            case "ENGLISH":
                                DisplayType = CultureDropDownTypes.EnglishName;
                                break;
                            default:
                                DisplayType = CultureDropDownTypes.DisplayName;
                                break;
                        }

                        localizeLink.NavigateUrl = ModuleContext.NavigateUrl(ModuleContext.TabId, 
                                                                            "LocalizePages", 
                                                                            false, 
                                                                            "mid=" + ModuleContext.ModuleId,
                                                                            "locale=" + languge.Code);

                        var publishButton = gridItem.FindControl("publishButton") as ImageButton;
                        if (publishButton != null)
                        {
                            string msgPublish = String.Format(Localization.GetString("Publish.Confirm", LocalResourceFile), Localization.GetLocaleName(languge.Code, DisplayType));
                            msgPublish = msgPublish.Replace("'", "\'");
                            publishButton.Attributes.Add("onclick", "alert('" + msgPublish + "');");
                        }
                    }
                }
            }
        }

        protected void languagesGrid_PreRender(object sender, EventArgs e)
        {
            foreach (GridColumn column in languagesGrid.Columns)
            {
                if ((column.UniqueName == "ContentLocalization"))
                {
                    column.Visible = PortalSettings.ContentLocalizationEnabled;
                }
            }
            languagesGrid.Rebind();
        }

        protected void publishedCheckbox_CheckChanged(object sender, EventArgs e)
        {
            try
            {
                if ((sender) is DnnCheckBox)
                {
                    var publishedCheckbox = (DnnCheckBox) sender;
                    int languageId = int.Parse(publishedCheckbox.CommandArgument);
                    Locale locale = LocaleController.Instance.GetLocale(languageId);

                    if (publishedCheckbox.Enabled)
                    {
                        LocaleController.Instance.PublishLanguage(PortalId, locale.Code, publishedCheckbox.Checked);
                    }

                    //Redirect to refresh page (and skinobjects)
                    Response.Redirect(Globals.NavigateURL(), true);
                }
            }
            catch (Exception ex)
            {
                Exceptions.ProcessModuleLoadException(this, ex);
            }
        }

        protected void PublishPages(object sender, CommandEventArgs e)
        {
            var cultureCode = (string) e.CommandArgument;

            LocaleController.Instance.PublishLanguage(PortalId, cultureCode, true);

            //Redirect to refresh page (and skinobjects)
            Response.Redirect(Globals.NavigateURL(), true);
        }

        protected void updateButton_Click(object sender, EventArgs e)
        {
            Locale language = null;

            PortalController.UpdatePortalSetting(ModuleContext.PortalId, "EnableBrowserLanguage", chkBrowser.Checked.ToString());

            // first check whether or not portal default language has changed
            string newDefaultLanguage = languagesComboBox.SelectedValue;
            if (newDefaultLanguage != PortalSettings.DefaultLanguage)
            {
                if (!IsLanguageEnabled(newDefaultLanguage))
                {
                    language = LocaleController.Instance.GetLocale(newDefaultLanguage);
                    Localization.AddLanguageToPortal(ModuleContext.PortalId, language.LanguageId, true);
                }

                // update portal default language
                var objPortalController = new PortalController();
                PortalInfo objPortal = objPortalController.GetPortal(PortalId);
                objPortal.DefaultLanguage = newDefaultLanguage;
                objPortalController.UpdatePortalInfo(objPortal);

                _PortalDefault = newDefaultLanguage;
            }

            BindDefaultLanguageSelector();
            BindGrid();
        }

        #endregion
    }
}