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

using DotNetNuke.Common;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Framework;
using DotNetNuke.Services.Localization;

using Telerik.Web.UI;
using Telerik.Web.UI.Upload;

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
    public partial class LocalizePages : PortalModuleBase
    {
        private string _PortalDefault = "";
        private int timeout = 3600;

        #region "Protected Properties"

        protected string PortalDefault
        {
            get
            {
                return _PortalDefault;
            }
        }

        protected string Locale
        {
            get
            {
                return Request.QueryString["locale"];
            }
        } 

        #endregion

        #region "Private Methods"

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

        private void ProcessLanguage(List<TabInfo> pageList, Locale locale, int languageCount, int totalLanguages)
        {
            var tabCtrl = new TabController();
            RadProgressContext progress = RadProgressContext.Current;

            progress.Speed = "N/A";
            progress.PrimaryTotal = totalLanguages;
            progress.PrimaryValue = languageCount;

            int total = pageList.Count;
            for (int i = 0; i <= total - 1; i++)
            {
                TabInfo currentTab = pageList[i];
                int stepNo = i + 1;

                progress.SecondaryTotal = total;
                progress.SecondaryValue = stepNo;
                float secondaryPercent = ((float) stepNo/(float) total) * 100;
                progress.SecondaryPercent = Convert.ToInt32(secondaryPercent);
                float primaryPercent = ((((float)languageCount + ((float)stepNo / (float)total)) / (float)totalLanguages)) * 100;
                progress.PrimaryPercent = Convert.ToInt32(primaryPercent);
                
                progress.CurrentOperationText = string.Format(Localization.GetString("ProcessingPage", LocalResourceFile), locale.Code, stepNo, total, currentTab.TabName);

                if (!Response.IsClientConnected)
                {
                    //Cancel button was clicked or the browser was closed, so stop processing
                    break;
                }

                progress.TimeEstimated = (total - stepNo)*100;

                tabCtrl.CreateLocalizedCopy(currentTab, locale);

                //Add a delay for debug testing
                //Threading.Thread.Sleep(500)
            }
        }

        #endregion

        #region "Event Handlers"

        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);
            cancelButton.Click += cancelButton_Click;
            updateButton.Click += updateButton_Click;

            LocalResourceFile = Localization.GetResourceFile(this, "LocalizePages.ascx");

            //Set AJAX timeout to 1 hr for large sites
            AJAX.GetScriptManager(Page).AsyncPostBackTimeout = timeout;
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            _PortalDefault = PortalSettings.DefaultLanguage;
            defaultLanguageLabel.Language = PortalSettings.DefaultLanguage;
            defaultLanguageLabel.Visible = true;

            if (!IsPostBack)
            {
                //Do not display SelectedFilesCount progress indicator.
                pageCreationProgressArea.ProgressIndicators &= ~ProgressIndicators.SelectedFilesCount;
            }
            pageCreationProgressArea.ProgressIndicators &=  ~ProgressIndicators.TimeEstimated;
            pageCreationProgressArea.ProgressIndicators &=  ~ProgressIndicators.TransferSpeed;

            pageCreationProgressArea.Localization.Total = Localization.GetString("TotalLanguages", LocalResourceFile);
            pageCreationProgressArea.Localization.TotalFiles = Localization.GetString("TotalPages", LocalResourceFile);
            pageCreationProgressArea.Localization.Uploaded = Localization.GetString("TotalProgress", LocalResourceFile);
            pageCreationProgressArea.Localization.UploadedFiles = Localization.GetString("Progress", LocalResourceFile);
            pageCreationProgressArea.Localization.CurrentFileName = Localization.GetString("Processing", LocalResourceFile);

            localizeLabel.Text = String.Format(Localization.GetString("localize", LocalResourceFile), Locale, _PortalDefault);
        }

        protected void cancelButton_Click(object sender, EventArgs e)
        {
            //Redirect to refresh page (and skinobjects)
            Response.Redirect(Globals.NavigateURL(), true);
        }

        protected void updateButton_Click(object sender, EventArgs e)
        {
            var tabCtrl = new TabController();
            var portalCtrl = new PortalController();
            var locale = LocaleController.Instance.GetLocale(Locale);
            List<TabInfo> pageList = tabCtrl.GetCultureTabList(PortalId);

            int scriptTimeOut = Server.ScriptTimeout;
            Server.ScriptTimeout = timeout;

            //add translator role
            Localization.AddTranslatorRole(PortalId, locale);

            //populate pages
            ProcessLanguage(pageList, locale, 0, 1);

            //Map special pages
            portalCtrl.MapLocalizedSpecialPages(PortalSettings.PortalId, locale.Code);

            //Restore Script Timeout
            Server.ScriptTimeout = scriptTimeOut;
            //'Redirect to refresh page (and skinobjects)
            Response.Redirect(Globals.NavigateURL(), true);
        }

        #endregion
    }
}