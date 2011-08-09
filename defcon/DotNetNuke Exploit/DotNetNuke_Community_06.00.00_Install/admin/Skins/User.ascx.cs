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

using DotNetNuke.Common;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Users;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Messaging;

#endregion

namespace DotNetNuke.UI.Skins.Controls
{
    /// -----------------------------------------------------------------------------
    /// <summary></summary>
    /// <remarks></remarks>
    /// <history>
    /// 	[cniknet]	10/15/2004	Replaced public members with properties and removed
    ///                             brackets from property names
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class User : SkinObjectBase
    {
        private const string MyFileName = "User.ascx";

        public User()
        {
            ShowUnreadMessages = true;
        }

        public string CssClass { get; set; }

        public bool ShowUnreadMessages { get; set; }

        public string Text { get; set; }

        public string URL { get; set; }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            try
            {
                if (!String.IsNullOrEmpty(CssClass))
                {
                    registerLink.CssClass = CssClass;
                }

                if (Request.IsAuthenticated == false)
                {
                    if (PortalSettings.UserRegistration != (int) Globals.PortalRegistrationType.NoRegistration)
                    {
                        if (!String.IsNullOrEmpty(Text))
                        {
                            if (Text.IndexOf("src=") != -1)
                            {
                                Text = Text.Replace("src=\"", "src=\"" + PortalSettings.ActiveTab.SkinPath);
                            }
                            registerLink.Text = Text;
                        }
                        else
                        {
                            registerLink.Text = Localization.GetString("Register", Localization.GetResourceFile(this, MyFileName));
                        }
                        if (PortalSettings.Users < PortalSettings.UserQuota || PortalSettings.UserQuota == 0)
                        {
                            registerLink.Visible = true;
                        }
                        else
                        {
                            registerLink.Visible = false;
                        }

                        registerLink.NavigateUrl = !String.IsNullOrEmpty(URL) 
                                            ? URL 
                                            : Globals.RegisterURL(HttpUtility.UrlEncode(Globals.NavigateURL()), Null.NullString);

                        if (PortalSettings.EnablePopUps && PortalSettings.RegisterTabId == Null.NullInteger)
                        {
                            registerLink.Attributes.Add("onclick", "return " + UrlUtils.PopUpUrl(registerLink.NavigateUrl, this, PortalSettings, true, false, 600, 950));
                        }

                    }
                    else
                    {
                        registerLink.Visible = false;
                    }
                }
                else
                {
                    var objUserInfo = UserController.GetCurrentUserInfo();
                    if (objUserInfo.UserID != -1)
                    {
                        var messagingController = new MessagingController();

                        int messageCount = messagingController.GetNewMessageCount(PortalSettings.PortalId, objUserInfo.UserID);

                        registerLink.Text = objUserInfo.DisplayName;

                        if ((ShowUnreadMessages && messageCount > 0))
                        {
                            registerLink.Text = registerLink.Text + string.Format(Localization.GetString("NewMessages", Localization.GetResourceFile(this, MyFileName)), messageCount);
                        }
                        if (ShowUnreadMessages && messageCount > 0)
                        {
                            registerLink.ToolTip = String.Format(Localization.GetString("ToolTipNewMessages", Localization.GetResourceFile(this, MyFileName)), messageCount);
                        }
                        else
                        {
                            registerLink.ToolTip = Localization.GetString("ToolTip", Localization.GetResourceFile(this, MyFileName));
                        }

                        if (objUserInfo.UserID != -1)
                        {
                            registerLink.NavigateUrl =Globals.UserProfileURL(objUserInfo.UserID);
                        }
                    }
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }
    }
}