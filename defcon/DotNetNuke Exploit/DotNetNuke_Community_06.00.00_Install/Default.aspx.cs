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
using System.Globalization;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Web;
using System.Web.UI;
using System.Web.UI.HtmlControls;
using System.Web.UI.WebControls;

using DotNetNuke.Application;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Host;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Entities.Tabs;
using DotNetNuke.Entities.Users;
using DotNetNuke.Instrumentation;
using DotNetNuke.Security.Permissions;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.FileSystem;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Log.SiteLog;
using DotNetNuke.Services.Personalization;
using DotNetNuke.Services.Vendors;
using DotNetNuke.UI;
using DotNetNuke.UI.Internals;
using DotNetNuke.UI.Modules;
using DotNetNuke.UI.Skins.Controls;
using DotNetNuke.UI.Utilities;

using DataCache = DotNetNuke.UI.Utilities.DataCache;
using Globals = DotNetNuke.Common.Globals;

#endregion

namespace DotNetNuke.Framework
{
    /// -----------------------------------------------------------------------------
    /// Project	 : DotNetNuke
    /// Class	 : CDefault
    /// 
    /// -----------------------------------------------------------------------------
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    /// 	[sun1]	1/19/2004	Created
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class DefaultPage : CDefault, IClientAPICallbackEventHandler
    {
        #region "Properties"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Property to allow the programmatic assigning of ScrollTop position
        /// </summary>
        /// <value></value>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[Jon Henning]	3/23/2005	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public int PageScrollTop
        {
            get
            {
                int pageScrollTop = Null.NullInteger;
                if (ScrollTop != null && !String.IsNullOrEmpty(ScrollTop.Value) && Regex.IsMatch(ScrollTop.Value, "^\\d+$"))
                {
                    pageScrollTop = Convert.ToInt32(ScrollTop.Value);
                }
                return pageScrollTop;
            }
            set { ScrollTop.Value = value.ToString(); }
        }

        protected string HtmlAttributeList
        {
            get
            {
                if ((HtmlAttributes != null) && (HtmlAttributes.Count > 0))
                {
                    var attr = new StringBuilder("");
                    foreach (string attributeName in HtmlAttributes.Keys)
                    {
                        if ((!String.IsNullOrEmpty(attributeName)) && (HtmlAttributes[attributeName] != null))
                        {
                            string attributeValue = HtmlAttributes[attributeName];
                            if ((attributeValue.IndexOf(",") > 0))
                            {
                                var attributeValues = attributeValue.Split(',');
                                for (var attributeCounter = 0;
                                     attributeCounter <= attributeValues.Length - 1;
                                     attributeCounter++)
                                {
                                    attr.Append(" " + attributeName + "=\"" + attributeValues[attributeCounter] + "\"");
                                }
                            }
                            else
                            {
                                attr.Append(" " + attributeName + "=\"" + attributeValue + "\"");
                            }
                        }
                    }
                    return attr.ToString();
                }
                return "";
            }
        }

        private bool IsPopUp
        {
            get
            {
                return HttpContext.Current.Request.Url.ToString().Contains("popUp=true");
            }
        }
        #endregion

        #region IClientAPICallbackEventHandler Members

        public string RaiseClientAPICallbackEvent(string eventArgument)
        {
            var dict = ParsePageCallBackArgs(eventArgument);
            if (dict.ContainsKey("type"))
            {
                if (DNNClientAPI.IsPersonalizationKeyRegistered(dict["namingcontainer"] + ClientAPI.CUSTOM_COLUMN_DELIMITER + dict["key"]) == false)
                {
                    throw new Exception(string.Format("This personalization key has not been enabled ({0}:{1}).  Make sure you enable it with DNNClientAPI.EnableClientPersonalization", dict["namingcontainer"], dict["key"]));
                }
                switch ((DNNClientAPI.PageCallBackType)Enum.Parse(typeof(DNNClientAPI.PageCallBackType), dict["type"]))
                {
                    case DNNClientAPI.PageCallBackType.GetPersonalization:
                        return Personalization.GetProfile(dict["namingcontainer"], dict["key"]).ToString();
                    case DNNClientAPI.PageCallBackType.SetPersonalization:
                        Personalization.SetProfile(dict["namingcontainer"], dict["key"], dict["value"]);
                        return dict["value"];
                    default:
                        throw new Exception("Unknown Callback Type");
                }
            }
            return "";
        }

        #endregion

        #region "Private Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// - Obtain PortalSettings from Current Context
        /// - redirect to a specific tab based on name
        /// - if first time loading this page then reload to avoid caching
        /// - set page title and stylesheet
        /// - check to see if we should show the Assembly Version in Page Title 
        /// - set the background image if there is one selected
        /// - set META tags, copyright, keywords and description
        /// </remarks>
        /// <history>
        /// 	[sun1]	1/19/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void InitializePage()
        {
            var objTabs = new TabController();
            TabInfo objTab;

            //redirect to a specific tab based on name
            if (!String.IsNullOrEmpty(Request.QueryString["tabname"]))
            {
                objTab = objTabs.GetTabByName(Request.QueryString["TabName"],
                                              ((PortalSettings)HttpContext.Current.Items["PortalSettings"]).PortalId);
                if (objTab != null)
                {
                    var parameters = new List<string>(); //maximum number of elements
                    for (int intParam = 0; intParam <= Request.QueryString.Count - 1; intParam++)
                    {
                        switch (Request.QueryString.Keys[intParam].ToLower())
                        {
                            case "tabid":
                            case "tabname":
                                break;
                            default:
                                parameters.Add(
                                    Request.QueryString.Keys[intParam] + "=" + Request.QueryString[intParam]);
                                break;
                        }
                    }
                    Response.Redirect(Globals.NavigateURL(objTab.TabID, Null.NullString, parameters.ToArray()), true);
                }
                else
                {
                    //404 Error - Redirect to ErrorPage
                    Exceptions.ProcessHttpException(Request);
                }
            }
            if (Request.IsAuthenticated)
            {
                switch (Host.AuthenticatedCacheability)
                {
                    case "0":
                        Response.Cache.SetCacheability(HttpCacheability.NoCache);
                        break;
                    case "1":
                        Response.Cache.SetCacheability(HttpCacheability.Private);
                        break;
                    case "2":
                        Response.Cache.SetCacheability(HttpCacheability.Public);
                        break;
                    case "3":
                        Response.Cache.SetCacheability(HttpCacheability.Server);
                        break;
                    case "4":
                        Response.Cache.SetCacheability(HttpCacheability.ServerAndNoCache);
                        break;
                    case "5":
                        Response.Cache.SetCacheability(HttpCacheability.ServerAndPrivate);
                        break;
                }
            }

            //page comment
            if (Host.DisplayCopyright)
            {
                Comment += string.Concat(Environment.NewLine,
                                         "<!--**********************************************************************************-->",
                                         Environment.NewLine,
                                         "<!-- DotNetNuke - http://www.dotnetnuke.com                                          -->",
                                         Environment.NewLine,
                                         "<!-- Copyright (c) 2002-2011                                                          -->",
                                         Environment.NewLine,
                                         "<!-- by DotNetNuke Corporation                                                        -->",
                                         Environment.NewLine,
                                         "<!--**********************************************************************************-->",
                                         Environment.NewLine);
            }
            Page.Header.Controls.AddAt(0, new LiteralControl(Comment));

            if (PortalSettings.ActiveTab.PageHeadText != Null.NullString && !Globals.IsAdminControl())
            {
                Page.Header.Controls.Add(new LiteralControl(PortalSettings.ActiveTab.PageHeadText));
            }

            //set page title
            string strTitle = PortalSettings.PortalName;
            if (IsPopUp)
            {
                var slaveModule = UIUtilities.GetSlaveModule(PortalSettings.ActiveTab.TabID);

                //Skip is popup is just a tab (no slave module)
                if (slaveModule.DesktopModuleID != Null.NullInteger)
                {
                    var control = ModuleControlFactory.CreateModuleControl(slaveModule) as IModuleControl;
                    control.LocalResourceFile = slaveModule.ControlSrc.Replace(Path.GetFileName(slaveModule.ControlSrc), "") + Localization.LocalResourceDirectory + "/" +
                                                Path.GetFileName(slaveModule.ControlSrc);
                    var title = Localization.LocalizeControlTitle(control);
                    
                    strTitle += string.Concat(" > ", PortalSettings.ActiveTab.TabName);
                    strTitle += string.Concat(" > ", title);
                }
                else
                {
                    strTitle += string.Concat(" > ", PortalSettings.ActiveTab.TabName);
                }
            }
            else
            {

                foreach (TabInfo tab in PortalSettings.ActiveTab.BreadCrumbs)
                {
                    strTitle += string.Concat(" > ", tab.TabName);
                }

                //tab title override
                if (!string.IsNullOrEmpty(PortalSettings.ActiveTab.Title))
                {
                    strTitle = PortalSettings.ActiveTab.Title;
                }
            }
            Title = strTitle;

            //set the background image if there is one selected
            if (!IsPopUp && FindControl("Body") != null)
            {
                if (!string.IsNullOrEmpty(PortalSettings.BackgroundFile))
                {
                    var fileInfo = FileManager.Instance.GetFile(PortalSettings.PortalId, PortalSettings.BackgroundFile);
                    var url = FileManager.Instance.GetUrl(fileInfo);

                    ((HtmlGenericControl)FindControl("Body")).Attributes["style"] = string.Concat("background-image: url('", url, "')");
                }
            }

            //META Refresh
            if (PortalSettings.ActiveTab.RefreshInterval > 0 && Request.QueryString["ctl"] == null)
            {
                MetaRefresh.Content = PortalSettings.ActiveTab.RefreshInterval.ToString();
            }
            else
            {
                MetaRefresh.Visible = false;
            }

            //META description
            if (!string.IsNullOrEmpty(PortalSettings.ActiveTab.Description))
            {
                Description = PortalSettings.ActiveTab.Description;
            }
            else
            {
                Description = PortalSettings.Description;
            }

            //META keywords
            if (!string.IsNullOrEmpty(PortalSettings.ActiveTab.KeyWords))
            {
                KeyWords = PortalSettings.ActiveTab.KeyWords;
            }
            else
            {
                KeyWords = PortalSettings.KeyWords;
            }
            if (Host.DisplayCopyright)
            {
                KeyWords += ",DotNetNuke,DNN";
            }

            //META copyright
            if (!string.IsNullOrEmpty(PortalSettings.FooterText))
            {
                Copyright = PortalSettings.FooterText;
            }
            else
            {
                Copyright = string.Concat("Copyright (c) ", DateTime.Now.Year, " by ", PortalSettings.PortalName);
            }

            //META generator
            if (Host.DisplayCopyright)
            {
                Generator = "DotNetNuke ";
            }
            else
            {
                Generator = "";
            }

            //META Robots
            if (Request.QueryString["ctl"] != null &&
                (Request.QueryString["ctl"] == "Login" || Request.QueryString["ctl"] == "Register"))
            {
                MetaRobots.Content = "NOINDEX, NOFOLLOW";
            }
            else
            {
                MetaRobots.Content = "INDEX, FOLLOW";
            }

            //NonProduction Label Injection
            if (NonProductionVersion() && Host.DisplayBetaNotice && !IsPopUp)
            {
                string versionString = string.Format(" ({0} Version: {1})", DotNetNukeContext.Current.Application.Status,
                                                     DotNetNukeContext.Current.Application.Version);
                Title += versionString;
            }

            //register DNN SkinWidgets Inititialization scripts
            if (PortalSettings.EnableSkinWidgets)
            {
                jQuery.RequestRegistration();
                ClientAPI.RegisterStartUpScript(Page, "initWidgets",
                                                string.Format(
                                                    "<script type=\"text/javascript\" src=\"{0}\" ></script>",
                                                    ResolveUrl("~/Resources/Shared/scripts/initWidgets.js")));
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Look for skin level doctype configuration file, and inject the value into the top of default.aspx
        /// when no configuration if found, the doctype for versions prior to 4.4 is used to maintain backwards compatibility with existing skins.
        /// Adds xmlns and lang parameters when appropiate.
        /// </summary>
        /// <param name="Skin">The currently loading skin</param>
        /// <remarks></remarks>
        /// <history>
        /// 	[cathal]	11/29/2006	Created
        ///     [cniknet]   05/20/2009  Refactored to use HtmlAttributes collection
        /// </history>
        /// -----------------------------------------------------------------------------
        private void SetSkinDoctype()
        {
            string strLang = CultureInfo.CurrentCulture.ToString();
            string strDocType = PortalSettings.ActiveTab.SkinDoctype;
            if (strDocType.Contains("XHTML 1.0"))
            {
                //XHTML 1.0
                HtmlAttributes.Add("xml:lang", strLang);
                HtmlAttributes.Add("lang", strLang);
                HtmlAttributes.Add("xmlns", "http://www.w3.org/1999/xhtml");
            }
            else if (strDocType.Contains("XHTML 1.1"))
            {
                //XHTML 1.1
                HtmlAttributes.Add("xml:lang", strLang);
                HtmlAttributes.Add("xmlns", "http://www.w3.org/1999/xhtml");
            }
            else
            {
                //other
                HtmlAttributes.Add("lang", strLang);
            }
            //Find the placeholder control and render the doctype
            skinDocType.Text = PortalSettings.ActiveTab.SkinDoctype;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// - manage affiliates
        /// - log visit to site
        /// </remarks>
        /// <history>
        /// 	[sun1]	1/19/2004	Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void ManageRequest()
        {
            //affiliate processing
            int affiliateId = -1;
            if (Request.QueryString["AffiliateId"] != null)
            {
                if (Regex.IsMatch(Request.QueryString["AffiliateId"], "^\\d+$"))
                {
                    affiliateId = Int32.Parse(Request.QueryString["AffiliateId"]);
                    var objAffiliates = new AffiliateController();
                    objAffiliates.UpdateAffiliateStats(affiliateId, 1, 0);

                    //save the affiliateid for acquisitions
                    if (Request.Cookies["AffiliateId"] == null) //do not overwrite
                    {
                        var objCookie = new HttpCookie("AffiliateId");
                        objCookie.Value = affiliateId.ToString();
                        objCookie.Expires = DateTime.Now.AddYears(1); //persist cookie for one year
                        Response.Cookies.Add(objCookie);
                    }
                }
            }

            //site logging
            if (PortalSettings.SiteLogHistory != 0)
            {
                //get User ID

                //URL Referrer
                string urlReferrer = "";
                try
                {
                    if (Request.UrlReferrer != null)
                    {
                        urlReferrer = Request.UrlReferrer.ToString();
                    }
                }
                catch (Exception exc)
                {
                    DnnLog.Error(exc);

                }
                string strSiteLogStorage = Host.SiteLogStorage;
                int intSiteLogBuffer = Host.SiteLogBuffer;

                //log visit
                var objSiteLogs = new SiteLogController();

                UserInfo objUserInfo = UserController.GetCurrentUserInfo();
                objSiteLogs.AddSiteLog(PortalSettings.PortalId, objUserInfo.UserID, urlReferrer, Request.Url.ToString(),
                                       Request.UserAgent, Request.UserHostAddress, Request.UserHostName,
                                       PortalSettings.ActiveTab.TabID, affiliateId, intSiteLogBuffer,
                                       strSiteLogStorage);
            }
        }

        private void ManageFavicon()
        {
            string headerLink = FavIcon.GetHeaderLink(PortalSettings.PortalId);

            if (!String.IsNullOrEmpty(headerLink))
            {
                Page.Header.Controls.Add(new Literal { Text = headerLink });
            }
        }

        //I realize the parsing of this is rather primitive.  A better solution would be to use json serialization
        //unfortunately, I don't have the time to write it.  When we officially adopt MS AJAX, we will get this type of 
        //functionality and this should be changed to utilize it for its plumbing.
        private Dictionary<string, string> ParsePageCallBackArgs(string strArg)
        {
            string[] aryVals = strArg.Split(new[] { ClientAPI.COLUMN_DELIMITER }, StringSplitOptions.None);
            var objDict = new Dictionary<string, string>();
            if (aryVals.Length > 0)
            {
                objDict.Add("type", aryVals[0]);
                switch (
                    (DNNClientAPI.PageCallBackType)Enum.Parse(typeof(DNNClientAPI.PageCallBackType), objDict["type"]))
                {
                    case DNNClientAPI.PageCallBackType.GetPersonalization:
                        objDict.Add("namingcontainer", aryVals[1]);
                        objDict.Add("key", aryVals[2]);
                        break;
                    case DNNClientAPI.PageCallBackType.SetPersonalization:
                        objDict.Add("namingcontainer", aryVals[1]);
                        objDict.Add("key", aryVals[2]);
                        objDict.Add("value", aryVals[3]);
                        break;
                }
            }
            return objDict;
        }

        /// <summary>
        /// check if a warning about account defaults needs to be rendered
        /// </summary>
        /// <returns>localised error message</returns>
        /// <remarks></remarks>
        /// <history>
        /// 	[cathal]	2/28/2007	Created
        /// </history>
        private string RenderDefaultsWarning()
        {
            string warningLevel = Request.QueryString["runningDefault"];
            string warningMessage = string.Empty;
            switch (warningLevel)
            {
                case "1":
                    warningMessage = Localization.GetString("InsecureAdmin.Text", Localization.SharedResourceFile);
                    break;
                case "2":
                    warningMessage = Localization.GetString("InsecureHost.Text", Localization.SharedResourceFile);
                    break;
                case "3":
                    warningMessage = Localization.GetString("InsecureDefaults.Text", Localization.SharedResourceFile);
                    break;
            }
            return warningMessage;
        }

        #endregion

        #region "Protected Methods"

        protected bool NonProductionVersion()
        {
            return DotNetNukeContext.Current.Application.Status != ReleaseMode.Stable;
        }

        #endregion

        #region "Event Handlers"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Contains the functionality to populate the Root aspx page with controls
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// - obtain PortalSettings from Current Context
        /// - set global page settings.
        /// - initialise reference paths to load the cascading style sheets
        /// - add skin control placeholder.  This holds all the modules and content of the page.
        /// </remarks>
        /// <history>
        /// 	[sun1]	1/19/2004	Created
        ///		[jhenning] 8/24/2005 Added logic to look for post originating from a ClientCallback
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnInit(EventArgs e)
        {
            base.OnInit(e);

            //set global page settings
            InitializePage();

            //load skin control and register UI js
            UI.Skins.Skin ctlSkin;
            if (PortalSettings.EnablePopUps)
            {
                ctlSkin = IsPopUp ? UI.Skins.Skin.GetPopUpSkin(this) : UI.Skins.Skin.GetSkin(this);

                //register popup js
                jQuery.RegisterJQueryUI(Page);

#if DEBUG
                ClientScript.RegisterClientScriptInclude("modalPopUp", ResolveUrl("~/js/Debug/dnn.modalpopup.js"));
#else
                ClientScript.RegisterClientScriptInclude("modalPopUp", ResolveUrl("~/js/dnn.modalpopup.js"));
#endif
            }
            else
            {
                ctlSkin = UI.Skins.Skin.GetSkin(this);
            }

            //check for and read skin package level doctype
            SetSkinDoctype();

            //Manage disabled pages
            if (PortalSettings.ActiveTab.DisableLink)
            {
                if (TabPermissionController.CanAdminPage())
                {
                    var heading = Localization.GetString("PageDisabled.Header");
                    var message = Localization.GetString("PageDisabled.Text");
                    UI.Skins.Skin.AddPageMessage(ctlSkin, heading, message,
                                                 ModuleMessage.ModuleMessageType.YellowWarning);
                }
                else
                {
                    if (PortalSettings.HomeTabId > 0)
                    {
                        Response.Redirect(Globals.NavigateURL(PortalSettings.HomeTabId), true);
                    }
                    else
                    {
                        Response.Redirect(Globals.GetPortalDomainName(PortalSettings.PortalAlias.HTTPAlias, Request, true), true);
                    }
                }
            }
            //Manage canonical urls
            if (PortalSettings.PortalAliasMappingMode == PortalSettings.PortalAliasMapping.CanonicalUrl && PortalSettings.PortalAlias.HTTPAlias != PortalSettings.DefaultPortalAlias)
            {
                var originalurl = Context.Items["UrlRewrite:OriginalUrl"].ToString();

                //Add Canonical <link>
                var canonicalLink = new HtmlLink();
                canonicalLink.Href = originalurl.Replace(PortalSettings.PortalAlias.HTTPAlias, PortalSettings.DefaultPortalAlias);
                canonicalLink.Attributes.Add("rel", "canonical");

                // Add the HtmlLink to the Head section of the page.
                Page.Header.Controls.Add(canonicalLink);
            }

            //check if running with known account defaults
            var messageText = "";
            if (Request.IsAuthenticated && string.IsNullOrEmpty(Request.QueryString["runningDefault"]) == false)
            {
                var userInfo = HttpContext.Current.Items["UserInfo"] as UserInfo;
                //only show message to default users
                if ((userInfo.Username.ToLower() == "admin") || (userInfo.Username.ToLower() == "host"))
                {
                    messageText = RenderDefaultsWarning();
                    var messageTitle = Localization.GetString("InsecureDefaults.Title", Localization.GlobalResourceFile);
                    UI.Skins.Skin.AddPageMessage(ctlSkin, messageTitle, messageText, ModuleMessage.ModuleMessageType.RedError);
                }
            }

            //add CSS links
            RegisterStyleSheet(this, Globals.HostPath + "default.css");
            RegisterStyleSheet(this, ctlSkin.SkinPath + "skin.css");
            RegisterStyleSheet(this, ctlSkin.SkinSrc.Replace(".ascx", ".css"));

            //add skin to page
            SkinPlaceHolder.Controls.Add(ctlSkin);

            RegisterStyleSheet(this, PortalSettings.HomeDirectory + "portal.css");

            //add Favicon
            ManageFavicon();

            //ClientCallback Logic 
            ClientAPI.HandleClientAPICallbackEvent(this);

            //add viewstateuserkey to protect against CSRF attacks
            if (User.Identity.IsAuthenticated)
            {
                ViewStateUserKey = User.Identity.Name;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Initialize the Scrolltop html control which controls the open / closed nature of each module 
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[sun1]	1/19/2004	Created
        ///		[jhenning] 3/23/2005 No longer passing in parameter to __dnn_setScrollTop, instead pulling value from textbox on client
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);
            if (!String.IsNullOrEmpty(ScrollTop.Value))
            {
                DNNClientAPI.AddBodyOnloadEventHandler(Page, "__dnn_setScrollTop();");
                ScrollTop.Value = ScrollTop.Value;
            }
        }

        protected override void OnPreRender(EventArgs evt)
        {
            base.OnPreRender(evt);

            //process the current request
            if (!Globals.IsAdminControl())
            {
                ManageRequest();
            }

            //Set the Head tags
            Page.Header.Title = Title;
            MetaGenerator.Content = Generator;
            MetaGenerator.Visible = (!String.IsNullOrEmpty(Generator));
            MetaAuthor.Content = PortalSettings.PortalName;
            MetaCopyright.Content = Copyright;
            MetaCopyright.Visible = (!String.IsNullOrEmpty(Copyright));
            MetaKeywords.Content = KeyWords;
            MetaKeywords.Visible = (!String.IsNullOrEmpty(KeyWords));
            MetaDescription.Content = Description;
            MetaDescription.Visible = (!String.IsNullOrEmpty(Description));
        }

        #endregion
    }
}
