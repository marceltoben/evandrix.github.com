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
using System.Web;
using System.Web.UI;

using DotNetNuke.Common;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Modules;

#endregion

namespace DotNetNuke.UI.Skins.Controls
{
    /// -----------------------------------------------------------------------------
    /// <summary></summary>
    /// <remarks></remarks>
    /// <history>
    /// 	[smcculloch]10/15/2004	Fixed Logoff Link for FriendlyUrls
    /// 	[cniknet]	10/15/2004	Replaced public members with properties and removed
    ///                             brackets from property names
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class Login : SkinObjectBase
    {
		#region "Private Members"

        private const string MyFileName = "Login.ascx";
		#endregion

		#region "Public Members"
		
        public string Text { get; set; }

        public string CssClass { get; set; }

        public string LogoffText { get; set; }

		#endregion

		#region "Event Handlers"

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            try
            {
                if (!String.IsNullOrEmpty(CssClass))
                {
                    loginLink.CssClass = CssClass;
                }

                if (Request.IsAuthenticated)
                {
                    if (!String.IsNullOrEmpty(LogoffText))
                    {
                        if (LogoffText.IndexOf("src=") != -1)
                        {
                            LogoffText = LogoffText.Replace("src=\"", "src=\"" + PortalSettings.ActiveTab.SkinPath);
                        }
                        loginLink.Text = LogoffText;
                    }
                    else
                    {
                        loginLink.Text = Localization.GetString("Logout", Localization.GetResourceFile(this, MyFileName));
                    }
                    loginLink.NavigateUrl = Globals.NavigateURL(PortalSettings.ActiveTab.TabID, "Logoff");
                }
                else
                {
                    if (!String.IsNullOrEmpty(Text))
                    {
                        if (Text.IndexOf("src=") != -1)
                        {
                            Text = Text.Replace("src=\"", "src=\"" + PortalSettings.ActiveTab.SkinPath);
                        }
                        loginLink.Text = Text;
                    }
                    else
                    {
                        loginLink.Text = Localization.GetString("Login", Localization.GetResourceFile(this, MyFileName));
                    }

                    string returnUrl = HttpContext.Current.Request.RawUrl;
                    if (returnUrl.IndexOf("?returnurl=") != -1)
                    {
                        returnUrl = returnUrl.Substring(0, returnUrl.IndexOf("?returnurl="));
                    }
                    returnUrl = HttpUtility.UrlEncode(returnUrl);

                    loginLink.NavigateUrl = Globals.LoginURL(returnUrl, (Request.QueryString["override"] != null));

                    if (PortalSettings.EnablePopUps && PortalSettings.LoginTabId == Null.NullInteger)
                    {
                        loginLink.Attributes.Add("onclick", "return " + UrlUtils.PopUpUrl(loginLink.NavigateUrl, this, PortalSettings, true, false, 300, 650));
                    }
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }
		
		#endregion
    }
}