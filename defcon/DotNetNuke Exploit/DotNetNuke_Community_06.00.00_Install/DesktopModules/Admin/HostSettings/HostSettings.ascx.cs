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
using System.Net;
using System.Security.Principal;
using System.Text;
using System.Threading;
using System.Web.UI.WebControls;
using System.Xml;
using System.Xml.XPath;

using DotNetNuke.Application;
using DotNetNuke.Common;
using DotNetNuke.Common.Lists;
using DotNetNuke.Common.Utilities;
using DotNetNuke.ComponentModel;
using DotNetNuke.Data;
using DotNetNuke.Entities.Controllers;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Framework;
using DotNetNuke.Framework.Providers;
using DotNetNuke.Security;
using DotNetNuke.Services.Cache;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Installer;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Log.EventLog;
using DotNetNuke.Services.Mail;
using DotNetNuke.Services.ModuleCache;
using DotNetNuke.Services.OutputCache;
using DotNetNuke.Services.Scheduling;
using DotNetNuke.Services.Upgrade;
using DotNetNuke.UI.Skins;
using DotNetNuke.UI.Skins.Controls;
using DotNetNuke.Web.UI.WebControls.Extensions;

#endregion

namespace DotNetNuke.Modules.Admin.Host
{
    /// -----------------------------------------------------------------------------
    /// <summary>
    /// The HostSettings PortalModuleBase is used to edit the host settings
    /// for the application.
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    /// 	[cnurse]	9/27/2004	Updated to reflect design changes for Help, 508 support
    ///                       and localisation
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class HostSettings : PortalModuleBase
    {
        #region Private Methods

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// BindData fetches the data from the database and updates the controls
        /// </summary>
        /// <history>
        /// 	[cnurse]	9/27/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        private void BindConfiguration()
        {
            lblProduct.Text = DotNetNukeContext.Current.Application.Description;
            lblVersion.Text = Globals.FormatVersion(DotNetNukeContext.Current.Application.Version, true);

            betaRow.Visible = (DotNetNukeContext.Current.Application.Status != ReleaseMode.Stable);
            chkBetaNotice.Checked = Entities.Host.Host.DisplayBetaNotice;

            chkUpgrade.Checked = Entities.Host.Host.CheckUpgrade;
            hypUpgrade.ImageUrl = Upgrade.UpgradeIndicator(DotNetNukeContext.Current.Application.Version, Request.IsLocal, Request.IsSecureConnection);
            if (String.IsNullOrEmpty(hypUpgrade.ImageUrl))
            {
                hypUpgrade.Visible = false;
            }
            else
            {
                hypUpgrade.NavigateUrl = Upgrade.UpgradeRedirect();
            }
            lblDataProvider.Text = ProviderConfiguration.GetProviderConfiguration("data").DefaultProvider;
            lblFramework.Text = Globals.NETFrameworkVersion.ToString(2);

            if (!Upgrade.IsNETFrameworkCurrent("3.5"))
            {
                UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("FrameworkDownLevel", LocalResourceFile), ModuleMessage.ModuleMessageType.YellowWarning);
            }
            if (WindowsIdentity.GetCurrent() != null)
            {
                // ReSharper disable PossibleNullReferenceException
                lblIdentity.Text = WindowsIdentity.GetCurrent().Name;
                // ReSharper restore PossibleNullReferenceException
            }
            lblHostName.Text = Dns.GetHostName();
            lblIPAddress.Text = Dns.GetHostEntry(lblHostName.Text).AddressList[0].ToString();
            lblPermissions.Text = SecurityPolicy.Permissions;
            if (string.IsNullOrEmpty(lblPermissions.Text))
            {
                lblPermissions.Text = Localization.GetString("None", LocalResourceFile);
            }
            lblApplicationPath.Text = string.IsNullOrEmpty(Globals.ApplicationPath) ? "/" : Globals.ApplicationPath;
            lblApplicationMapPath.Text = Globals.ApplicationMapPath;
            lblServerTime.Text = DateTime.Now.ToString();
            lblGUID.Text = Entities.Host.Host.GUID;
            chkWebFarm.Checked = CachingProvider.Instance().IsWebFarm();
        }

        private void BindFriendlyUrlsRequestFilters()
        {
            chkUseFriendlyUrls.Checked = Entities.Host.Host.UseFriendlyUrls;
            chkEnableRequestFilters.Checked = Entities.Host.Host.EnableRequestFilters;
        }

        private void BindHostDetails()
        {
            var objPortals = new PortalController();
            hostPortalsCombo.DataSource = objPortals.GetPortals();
            hostPortalsCombo.DataBind(Entities.Host.Host.HostPortalID.ToString());

            txtHostTitle.Text = Entities.Host.Host.HostTitle;
            txtHostURL.Text = Entities.Host.Host.HostURL;
            txtHostEmail.Text = Entities.Host.Host.HostEmail;
            valHostEmail.ValidationExpression = Globals.glbEmailRegEx;

            //Load DocTypes
            var docTypes = new Dictionary<string, string>
                               {
                                   { LocalizeString("LegacyDoctype"), "0" }, 
                                   { LocalizeString("TransDoctype"), "1" }, 
                                   { LocalizeString("StrictDoctype"), "2" }
                               };

            docTypeCombo.DataSource = docTypes;
            docTypeCombo.DataBind();

            string docTypesetting = string.Empty;
            if (Globals.DataBaseVersion != null)
            {
                HostController.Instance.GetSettingsDictionary().TryGetValue("DefaultDocType", out docTypesetting);
            }
            if (string.IsNullOrEmpty(docTypesetting))
            {
                docTypesetting = "0";
            }
            docTypeCombo.DataBind(docTypesetting);

            chkRemember.Checked = Entities.Host.Host.RememberCheckbox;
        }

        private void BindJQuery()
        {
            jQueryVersion.Text = jQuery.Version;
            jQueryUIVersion.Text = jQuery.UIVersion;
            chkJQueryDebugVersion.Checked = jQuery.UseDebugScript;
            chkJQueryUseHosted.Checked = jQuery.UseHostedScript;
            txtJQueryHostedUrl.Text = jQuery.HostedUrl;
            txtJQueryUIHostedUrl.Text = jQuery.HostedUIUrl;
        }

        private void BindPerformance()
        {
            cboPageState.Items.FindByValue(Entities.Host.Host.PageStatePersister).Selected = true;
            BindModuleCacheProviderList();
            BindPageCacheProviderList();
            if (cboPerformance.Items.FindByValue(((int)Entities.Host.Host.PerformanceSetting).ToString()) != null)
            {
                cboPerformance.Items.FindByValue(((int)Entities.Host.Host.PerformanceSetting).ToString()).Selected = true;
            }
            else
            {
                cboPerformance.Items.FindByValue("3").Selected = true;
            }
            cboCacheability.Items.FindByValue(Entities.Host.Host.AuthenticatedCacheability).Selected = true;
            if (cboCompression.Items.FindByValue(Entities.Host.Host.HttpCompressionAlgorithm.ToString()) != null)
            {
                cboCompression.Items.FindByValue(Entities.Host.Host.HttpCompressionAlgorithm.ToString()).Selected = true;
            }
            else
            {
                cboCompression.Items.FindByValue("0").Selected = true;
            }
            chkWhitespace.Checked = Entities.Host.Host.WhitespaceFilter;

            string filePath = Globals.ApplicationMapPath + "\\Compression.config";
            if (File.Exists(filePath))
            {
                var fileReader = new FileStream(filePath, FileMode.Open, FileAccess.Read, FileShare.Read);
                var doc = new XPathDocument(fileReader);
                foreach (XPathNavigator nav in doc.CreateNavigator().Select("compression/excludedPaths/path"))
                {
                    txtExcludedPaths.Text += nav.Value.ToLower() + Environment.NewLine;
                }
                txtWhitespaceFilter.Text = doc.CreateNavigator().SelectSingleNode("compression/whitespace").Value;
            }
        }

        private void BindPaymentProcessor()
        {
            var listController = new ListController();
            processorCombo.DataSource = listController.GetListEntryInfoCollection("Processor", "");
            processorCombo.DataBind();
            processorCombo.InsertItem(0, "<" + Localization.GetString("None_Specified") + ">", "");
            processorCombo.Select(Entities.Host.Host.PaymentProcessor, true);

            processorLink.NavigateUrl = Globals.AddHTTP(processorCombo.SelectedItem.Value);

            txtUserId.Text = Entities.Host.Host.ProcessorUserId;
            txtPassword.Attributes.Add("value", Entities.Host.Host.ProcessorPassword);
            txtHostFee.Text = Entities.Host.Host.HostFee.ToString();

            currencyCombo.DataSource = listController.GetListEntryInfoCollection("Currency", "");
            var currency = Entities.Host.Host.HostCurrency;
            if (String.IsNullOrEmpty(currency))
            {
                currency = "USD";
            }
            currencyCombo.DataBind(currency);

            txtHostSpace.Text = Entities.Host.Host.HostSpace.ToString();
            txtPageQuota.Text = Entities.Host.Host.PageQuota.ToString();
            txtUserQuota.Text = Entities.Host.Host.UserQuota.ToString();

            txtDemoPeriod.Text = Entities.Host.Host.DemoPeriod.ToString();
            chkDemoSignup.Checked = Entities.Host.Host.DemoSignup;
        }

        private void BindProxyServer()
        {
            txtProxyServer.Text = Entities.Host.Host.ProxyServer;
            txtProxyPort.Text = Entities.Host.Host.ProxyPort.ToString();
            txtProxyUsername.Text = Entities.Host.Host.ProxyUsername;
            txtProxyPassword.Attributes.Add("value", Entities.Host.Host.ProxyPassword);
            txtWebRequestTimeout.Text = Entities.Host.Host.WebRequestTimeout.ToString();
        }

        private void BindSkins()
        {
            var skins = SkinController.GetSkins(null, SkinController.RootSkin, SkinScope.Host)
                                                     .ToDictionary(skin => skin.Key, skin => skin.Value);
            var containers = SkinController.GetSkins(null, SkinController.RootContainer, SkinScope.Host)
                                                    .ToDictionary(skin => skin.Key, skin => skin.Value);
            hostSkinCombo.DataSource = skins;
            hostSkinCombo.DataBind(Entities.Host.Host.DefaultPortalSkin);

            hostContainerCombo.DataSource = containers;
            hostContainerCombo.DataBind(Entities.Host.Host.DefaultPortalContainer);

            editSkinCombo.DataSource = skins;
            editSkinCombo.DataBind(Entities.Host.Host.DefaultAdminSkin);

            editContainerCombo.DataSource = containers;
            editContainerCombo.DataBind(Entities.Host.Host.DefaultAdminContainer);

            uploadSkinLink.NavigateUrl = Util.InstallURL(ModuleContext.TabId, "");

            if (PortalSettings.EnablePopUps)
            {
                uploadSkinLink.Attributes.Add("onclick", "return " + UrlUtils.PopUpUrl(uploadSkinLink.NavigateUrl, this, PortalSettings, true, false));
            }
        }

        private void BindSmtpServer()
        {
            txtSMTPServer.Text = Entities.Host.Host.SMTPServer;
            if (!string.IsNullOrEmpty(Entities.Host.Host.SMTPAuthentication))
            {
                optSMTPAuthentication.Items.FindByValue(Entities.Host.Host.SMTPAuthentication).Selected = true;
            }
            else
            {
                optSMTPAuthentication.Items.FindByValue("0").Selected = true;
            }
            chkSMTPEnableSSL.Checked = Entities.Host.Host.EnableSMTPSSL;
            txtSMTPUsername.Text = Entities.Host.Host.SMTPUsername;
            txtSMTPPassword.Attributes.Add("value", Entities.Host.Host.SMTPPassword);
        }

        private void BindUpgradeLogs()
        {
            ProviderConfiguration objProviderConfiguration = ProviderConfiguration.GetProviderConfiguration("data");
            string strProviderPath = DataProvider.Instance().GetProviderPath();
            var arrScriptFiles = new ArrayList();
            string[] arrFiles = Directory.GetFiles(strProviderPath, "*." + objProviderConfiguration.DefaultProvider);
            foreach (string strFile in arrFiles)
            {
                arrScriptFiles.Add(Path.GetFileNameWithoutExtension(strFile));
            }
            arrScriptFiles.Sort();
            cboVersion.DataSource = arrScriptFiles;
            cboVersion.DataBind();
        }

        private void BindData()
        {
            BindConfiguration();
            BindHostDetails();
            chkCopyright.Checked = Entities.Host.Host.DisplayCopyright;
            chkUseCustomErrorMessages.Checked = Entities.Host.Host.UseCustomErrorMessages;
            chkUseCustomModuleCssClass.Checked = Entities.Host.Host.EnableCustomModuleCssClass;
            BindSkins();
            BindPaymentProcessor();
            BindFriendlyUrlsRequestFilters();
            BindProxyServer();
            BindSmtpServer();
            BindPerformance();
            BindJQuery();

            foreach (KeyValuePair<string, ModuleControlInfo> kvp in ModuleControlController.GetModuleControlsByModuleDefinitionID(Null.NullInteger))
            {
                if (kvp.Value.ControlType == SecurityAccessLevel.ControlPanel)
                {
                    cboControlPanel.Items.Add(new ListItem(kvp.Value.ControlKey.Replace("CONTROLPANEL:", ""), kvp.Value.ControlSrc));
                }
            }
            if (string.IsNullOrEmpty(Entities.Host.Host.ControlPanel))
            {
                if (cboControlPanel.Items.FindByValue(Globals.glbDefaultControlPanel) != null)
                {
                    cboControlPanel.Items.FindByValue(Globals.glbDefaultControlPanel).Selected = true;
                }
            }
            else
            {
                if (cboControlPanel.Items.FindByValue(Entities.Host.Host.ControlPanel) != null)
                {
                    cboControlPanel.Items.FindByValue(Entities.Host.Host.ControlPanel).Selected = true;
                }
            }

            if (String.IsNullOrEmpty(Entities.Host.Host.SiteLogStorage))
            {
                optSiteLogStorage.Items.FindByValue("D").Selected = true;
            }
            else
            {
                optSiteLogStorage.Items.FindByValue(Entities.Host.Host.SiteLogStorage).Selected = true;
            }
            txtSiteLogBuffer.Text = Entities.Host.Host.SiteLogBuffer.ToString();
            txtSiteLogHistory.Text = Entities.Host.Host.SiteLogHistory.ToString();

            chkUsersOnline.Checked = Entities.Host.Host.EnableUsersOnline;
            txtUsersOnlineTime.Text = Entities.Host.Host.UsersOnlineTimeWindow.ToString();
            txtAutoAccountUnlock.Text = Entities.Host.Host.AutoAccountUnlockDuration.ToString();

            txtFileExtensions.Text = Entities.Host.Host.AllowedExtensionWhitelist.ToStorageString();

            if (cboSchedulerMode.Items.FindByValue(((int)Entities.Host.Host.SchedulerMode).ToString()) != null)
            {
                cboSchedulerMode.Items.FindByValue(((int)Entities.Host.Host.SchedulerMode).ToString()).Selected = true;
            }
            else
            {
                cboSchedulerMode.Items.FindByValue("1").Selected = true;
            }

            chkLogBuffer.Checked = Entities.Host.Host.EventLogBuffer;
            txtHelpURL.Text = Entities.Host.Host.HelpURL;
            chkEnableHelp.Checked = Entities.Host.Host.EnableModuleOnLineHelp;
            chkAutoSync.Checked = Entities.Host.Host.EnableFileAutoSync;
            chkEnableContentLocalization.Checked = Entities.Host.Host.EnableContentLocalization;

            ViewState["SelectedSchedulerMode"] = cboSchedulerMode.SelectedItem.Value;
            ViewState["SelectedLogBufferEnabled"] = chkLogBuffer.Checked;
            ViewState["SelectedUsersOnlineEnabled"] = chkUsersOnline.Checked;

            BindUpgradeLogs();
        }

        private void BindModuleCacheProviderList()
        {
            cboModuleCacheProvider.DataSource = GetFilteredProviders(ModuleCachingProvider.GetProviderList(), "ModuleCachingProvider");
            cboModuleCacheProvider.DataBind();
            if (cboModuleCacheProvider.Items.Count > 0)
            {
                var defaultModuleCache = ComponentFactory.GetComponent<ModuleCachingProvider>();
                string providerKey = (from provider in ModuleCachingProvider.GetProviderList() where provider.Value.Equals(defaultModuleCache) select provider.Key).SingleOrDefault();
                if (!string.IsNullOrEmpty(Entities.Host.Host.ModuleCachingMethod))
                {
                    if (cboModuleCacheProvider.Items.FindByValue(Entities.Host.Host.ModuleCachingMethod) != null)
                    {
                        cboModuleCacheProvider.Items.FindByValue(Entities.Host.Host.ModuleCachingMethod).Selected = true;
                    }
                    else
                    {
                        cboModuleCacheProvider.Items.FindByValue(providerKey).Selected = true;
                    }
                }
                else
                {
                    cboModuleCacheProvider.Items.FindByValue(providerKey).Selected = true;
                }
            }
        }

        private void BindPageCacheProviderList()
        {
            cboPageCacheProvider.DataSource = GetFilteredProviders(OutputCachingProvider.GetProviderList(), "OutputCachingProvider");
            cboPageCacheProvider.DataBind();
            if (cboPageCacheProvider.Items.Count > 0)
            {
                var defaultPageCache = ComponentFactory.GetComponent<OutputCachingProvider>();
                var providerKey = (from provider in OutputCachingProvider.GetProviderList() where provider.Value.Equals(defaultPageCache) select provider.Key).SingleOrDefault();
                if (defaultPageCache != null)
                {
                    PageCacheRow.Visible = true;
                    if (!string.IsNullOrEmpty(Entities.Host.Host.PageCachingMethod))
                    {
                        if (cboPageCacheProvider.Items.FindByValue(Entities.Host.Host.PageCachingMethod) != null)
                        {
                            cboPageCacheProvider.Items.FindByValue(Entities.Host.Host.PageCachingMethod).Selected = true;
                        }
                        else
                        {
                            cboPageCacheProvider.Items.FindByValue(providerKey).Selected = true;
                        }
                    }
                    else
                    {
                        cboPageCacheProvider.Items.FindByValue(providerKey).Selected = true;
                    }
                }
            }
            else
            {
                PageCacheRow.Visible = false;
            }
        }

        private void CheckSecurity()
        {
			//Verify that the current user has access to access this page
            if (!UserInfo.IsSuperUser)
            {
                Response.Redirect(Globals.NavigateURL("Access Denied"), true);
            }
        }

        private static IEnumerable GetFilteredProviders<T>(Dictionary<string, T> providerList, string keyFilter)
        {
            var providers = from provider in providerList let filteredkey = provider.Key.Replace(keyFilter, String.Empty) select new { filteredkey, provider.Key };

            return providers;
        }

        #endregion

        #region Protected Methods

        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);
            jQuery.RequestDnnPluginsRegistration();
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_Load runs when the control is loaded.
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/27/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        ///     [VMasanas]  9/28/2004   Changed redirect to Access Denied
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            cmdEmail.Click += TestEmail;
            cmdRestart.Click += RestartApplication;
            cmdUpdate.Click += UpdateSettings;
            cmdUpgrade.Click += OnUpgradeClick;
            cmdCache.Click += ClearCache;

            try
            {
                CheckSecurity();

                //If this is the first visit to the page, populate the site data
                if (Page.IsPostBack == false)
                {
                    BindData();
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnUpgradeClick(object sender, EventArgs e)
        {
            try
            {
                var strProviderPath = DataProvider.Instance().GetProviderPath();
                if (File.Exists(strProviderPath + cboVersion.SelectedItem.Text + ".log.resources"))
                {
                    var objStreamReader = File.OpenText(strProviderPath + cboVersion.SelectedItem.Text + ".log.resources");
                    var upgradeText = objStreamReader.ReadToEnd();
                    if (String.IsNullOrEmpty(upgradeText.Trim()))
                    {
                        upgradeText = Localization.GetString("LogEmpty", LocalResourceFile);
                    }
                    lblUpgrade.Text = upgradeText.Replace("\n", "<br>");
                    objStreamReader.Close();
                }
                else
                {
                    lblUpgrade.Text = Localization.GetString("NoLog", LocalResourceFile);
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// ClearCache runs when the clear cache button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/27/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void ClearCache(object sender, EventArgs e)
        {
            DataCache.ClearCache();
            Response.Redirect(Request.RawUrl, true);
        }

        protected void RestartApplication(object sender, EventArgs e)
        {
            var objEv = new EventLogController();
            var objEventLogInfo = new LogInfo { BypassBuffering = true, LogTypeKey = EventLogController.EventLogType.HOST_ALERT.ToString() };
            objEventLogInfo.AddProperty("Message", Localization.GetString("UserRestart", LocalResourceFile));
            objEv.AddLog(objEventLogInfo);
            Config.Touch();
            Response.Redirect(Globals.NavigateURL(), true);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// TestEmail runs when the test email button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/27/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void TestEmail(object sender, EventArgs e)
        {
            try
            {
                if (!String.IsNullOrEmpty(txtHostEmail.Text))
                {
                    txtSMTPPassword.Attributes.Add("value", Entities.Host.Host.SMTPPassword);

                    string strMessage = Mail.SendMail(txtHostEmail.Text,
                                                      txtHostEmail.Text,
                                                      "",
                                                      "",
                                                      MailPriority.Normal,
                                                      Localization.GetSystemMessage(PortalSettings, "EMAIL_SMTP_TEST_SUBJECT"),
                                                      MailFormat.Text,
                                                      Encoding.UTF8,
                                                      "",
                                                      "",
                                                      txtSMTPServer.Text,
                                                      optSMTPAuthentication.SelectedItem.Value,
                                                      txtSMTPUsername.Text,
                                                      txtSMTPPassword.Text,
                                                      chkSMTPEnableSSL.Checked);
                    if (!String.IsNullOrEmpty(strMessage))
                    {
                        UI.Skins.Skin.AddModuleMessage(this, "", String.Format(Localization.GetString("EmailErrorMessage", LocalResourceFile), strMessage), ModuleMessage.ModuleMessageType.RedError);
                    }
                    else
                    {
                        UI.Skins.Skin.AddModuleMessage(this, "", Localization.GetString("EmailSentMessage", LocalResourceFile), ModuleMessage.ModuleMessageType.GreenSuccess);
                    }
                }
                else
                {
                    UI.Skins.Skin.AddModuleMessage(this, "", Localization.GetString("SpecifyHostEmailMessage", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void UpdateCompression()
        {
            var xmlCompression = new XmlDocument();
            XmlNode nodeRoot = xmlCompression.CreateElement("compression");
            XmlNode nodeExcludedPaths = xmlCompression.CreateElement("excludedPaths");
            nodeRoot.AppendChild(nodeExcludedPaths);
            foreach (string strItem in txtExcludedPaths.Text.Split('\r', '\n'))
            {
                if (!String.IsNullOrEmpty(strItem.Trim()))
                {
                    XmlUtils.AppendElement(ref xmlCompression, nodeExcludedPaths, "path", strItem.Trim(), false);
                }
            }
            XmlUtils.AppendElement(ref xmlCompression, nodeRoot, "whitespace", txtWhitespaceFilter.Text, false, true);
            xmlCompression.AppendChild(nodeRoot);
            XmlDeclaration xmlDeclaration = xmlCompression.CreateXmlDeclaration("1.0", "utf-8", null);
            xmlCompression.InsertBefore(xmlDeclaration, nodeRoot);
            string strFile = Globals.ApplicationMapPath + "\\Compression.config";
            File.SetAttributes(strFile, FileAttributes.Normal);
            xmlCompression.Save(strFile);
        }

        protected void UpdateSchedule()
        {
            bool restartSchedule = false;
            bool usersOnLineChanged = (Convert.ToBoolean(ViewState["SelectedUsersOnlineEnabled"]) != chkUsersOnline.Checked);
            if (usersOnLineChanged)
            {
                ScheduleItem scheduleItem = SchedulingProvider.Instance().GetSchedule("DotNetNuke.Entities.Users.PurgeUsersOnline, DOTNETNUKE", Null.NullString);
                if (scheduleItem != null)
                {
                    scheduleItem.Enabled = chkUsersOnline.Checked;
                    SchedulingProvider.Instance().UpdateSchedule(scheduleItem);
                    restartSchedule = true;
                }
            }

            bool logBufferChanged = (Convert.ToBoolean(ViewState["SelectedLogBufferEnabled"]) != chkLogBuffer.Checked);
            if (logBufferChanged)
            {
                var scheduleItem = SchedulingProvider.Instance().GetSchedule("DotNetNuke.Services.Log.EventLog.PurgeLogBuffer, DOTNETNUKE", Null.NullString);
                if (scheduleItem != null)
                {
                    scheduleItem.Enabled = chkLogBuffer.Checked;
                    SchedulingProvider.Instance().UpdateSchedule(scheduleItem);
                    restartSchedule = true;
                }
            }

            var originalSchedulerMode = (SchedulerMode)Convert.ToInt32(ViewState["SelectedSchedulerMode"]);
            var newSchedulerMode = (SchedulerMode) Enum.Parse(typeof (SchedulerMode), cboSchedulerMode.SelectedItem.Value);
            if(originalSchedulerMode != newSchedulerMode)
            {
                switch (newSchedulerMode)
                {
                    case SchedulerMode.DISABLED:
                        SchedulingProvider.Instance().Halt("Host Settings");
                        break;
                    case SchedulerMode.TIMER_METHOD:
                        var newThread = new Thread(SchedulingProvider.Instance().Start) { IsBackground = true };
                        newThread.Start();
                        break;
                    default:
                        SchedulingProvider.Instance().Halt("Host Settings");
                        break;
                }
            }


            if (restartSchedule && newSchedulerMode == SchedulerMode.TIMER_METHOD)
            {
                SchedulingProvider.Instance().ReStart("Host Settings");
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdUpdate_Click runs when the Upgrade button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/27/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void UpdateSettings(object sender, EventArgs e)
        {
            if (Page.IsValid)
            {
                try
                {
                    HostController.Instance.Update("CheckUpgrade", chkUpgrade.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("DisplayBetaNotice", chkBetaNotice.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("HostPortalId", hostPortalsCombo.SelectedValue);
                    HostController.Instance.Update("HostTitle", txtHostTitle.Text, false);
                    HostController.Instance.Update("HostURL", txtHostURL.Text, false);
                    HostController.Instance.Update("HostEmail", txtHostEmail.Text.Trim(), false);
                    HostController.Instance.Update("PaymentProcessor", processorCombo.SelectedItem.Text, false);
                    HostController.Instance.Update("ProcessorUserId", txtUserId.Text, false);
                    HostController.Instance.Update("ProcessorPassword", txtPassword.Text, false);
                    HostController.Instance.Update("HostFee", txtHostFee.Text, false);
                    HostController.Instance.Update("HostCurrency", currencyCombo.SelectedValue, false);
                    HostController.Instance.Update("HostSpace", txtHostSpace.Text, false);
                    HostController.Instance.Update("PageQuota", txtPageQuota.Text, false);
                    HostController.Instance.Update("UserQuota", txtUserQuota.Text, false);
                    HostController.Instance.Update("SiteLogStorage", optSiteLogStorage.SelectedItem.Value, false);
                    HostController.Instance.Update("SiteLogBuffer", txtSiteLogBuffer.Text, false);
                    HostController.Instance.Update("SiteLogHistory", txtSiteLogHistory.Text, false);
                    HostController.Instance.Update("DemoPeriod", txtDemoPeriod.Text, false);
                    HostController.Instance.Update("DemoSignup", chkDemoSignup.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("Copyright", chkCopyright.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("DefaultDocType", docTypeCombo.SelectedValue, false);
                    HostController.Instance.Update("RememberCheckbox", chkRemember.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("EnableCustomModuleCssClass", chkUseCustomModuleCssClass.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("DisableUsersOnline", chkUsersOnline.Checked ? "N" : "Y", false);
                    HostController.Instance.Update("AutoAccountUnlockDuration", txtAutoAccountUnlock.Text, false);
                    HostController.Instance.Update("UsersOnlineTime", txtUsersOnlineTime.Text, false);
                    HostController.Instance.Update("ProxyServer", txtProxyServer.Text, false);
                    HostController.Instance.Update("ProxyPort", txtProxyPort.Text, false);
                    HostController.Instance.Update("ProxyUsername", txtProxyUsername.Text, false);
                    HostController.Instance.Update("ProxyPassword", txtProxyPassword.Text, false);
                    HostController.Instance.Update("WebRequestTimeout", txtWebRequestTimeout.Text, false);
                    HostController.Instance.Update("SMTPServer", txtSMTPServer.Text, false);
                    HostController.Instance.Update("SMTPAuthentication", optSMTPAuthentication.SelectedItem.Value, false);
                    HostController.Instance.Update("SMTPUsername", txtSMTPUsername.Text, false);
                    HostController.Instance.Update("SMTPPassword", txtSMTPPassword.Text, false);
                    HostController.Instance.Update("SMTPEnableSSL", chkSMTPEnableSSL.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("FileExtensions", txtFileExtensions.Text, false);
                    HostController.Instance.Update("UseCustomErrorMessages", chkUseCustomErrorMessages.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("UseFriendlyUrls", chkUseFriendlyUrls.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("EnableRequestFilters", chkEnableRequestFilters.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("ControlPanel", cboControlPanel.SelectedItem.Value, false);
                    HostController.Instance.Update("SchedulerMode", cboSchedulerMode.SelectedItem.Value, false);
                    HostController.Instance.Update("PerformanceSetting", cboPerformance.SelectedItem.Value, false);
                    HostController.Instance.Update("AuthenticatedCacheability", cboCacheability.SelectedItem.Value, false);
                    HostController.Instance.Update("PageStatePersister", cboPageState.SelectedItem.Value);
                    HostController.Instance.Update("ModuleCaching", cboModuleCacheProvider.SelectedItem.Value, false);
                    if (PageCacheRow.Visible)
                    {
                        HostController.Instance.Update("PageCaching", cboPageCacheProvider.SelectedItem.Value, false);
                    }
                    HostController.Instance.Update("HttpCompression", cboCompression.SelectedItem.Value, false);
                    HostController.Instance.Update("WhitespaceFilter", chkWhitespace.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("EnableModuleOnLineHelp", chkEnableHelp.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("EnableFileAutoSync", chkAutoSync.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("HelpURL", txtHelpURL.Text, false);
                    HostController.Instance.Update("EnableContentLocalization", chkEnableContentLocalization.Checked ? "Y" : "N", false);

                    HostController.Instance.Update("EventLogBuffer", chkLogBuffer.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("DefaultPortalSkin", hostSkinCombo.SelectedValue, false);
                    HostController.Instance.Update("DefaultAdminSkin", editSkinCombo.SelectedValue, false);
                    HostController.Instance.Update("DefaultPortalContainer", hostContainerCombo.SelectedValue, false);
                    HostController.Instance.Update("DefaultAdminContainer", editContainerCombo.SelectedValue, false);
                    HostController.Instance.Update("jQueryDebug", chkJQueryDebugVersion.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("jQueryHosted", chkJQueryUseHosted.Checked ? "Y" : "N", false);
                    HostController.Instance.Update("jQueryUrl", txtJQueryHostedUrl.Text, false);

                    UpdateCompression();

                    UpdateSchedule();

                    Response.Redirect(Request.RawUrl, true);
                }
                catch (Exception exc)
                {
                    Exceptions.ProcessModuleLoadException(this, exc);
                }
                finally
                {
                    DataCache.ClearHostCache(false);
                }
            }
        }

        #endregion

    }
}