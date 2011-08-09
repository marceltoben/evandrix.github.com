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

using DotNetNuke.Common;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Entities.Profile;
using DotNetNuke.Entities.Users;
using DotNetNuke.Security;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Tokens;
using DotNetNuke.UI.Modules;
using DotNetNuke.UI.Skins.Controls;

#endregion

namespace DotNetNuke.Modules.Admin.Users
{

	/// <summary>
	///   The ViewProfile ProfileModuleUserControlBase is used to view a Users Profile
	/// </summary>
	/// <history>
	///   [jlucarino]	02/25/2010 created
	/// </history>
	public partial class ViewProfile : ProfileModuleUserControlBase
	{

		public override bool DisplayModule
		{
			get
			{
				return true;
			}
		}

        #region Private Properties

        private bool IsAdmin
        {
            get
            {
                return PortalSecurity.IsInRole(ModuleContext.PortalSettings.AdministratorRoleName);
            }
        }

        private bool IsUser
        {
            get
            {
                return ProfileUserId == ModuleContext.PortalSettings.UserId;
            }
        }

        #endregion

        private string GetRedirectUrl()
        {
            //redirect user to default page if not specific the home tab, do this action to prevent loop redirect.
            var homeTabId = ModuleContext.PortalSettings.HomeTabId;
            string redirectUrl;

            if (homeTabId > Null.NullInteger)
            {
                redirectUrl = Globals.NavigateURL(homeTabId);
            }
            else
            {
                redirectUrl = Globals.GetPortalDomainName(PortalSettings.Current.PortalAlias.HTTPAlias, Request, true) + "/" + Globals.glbDefaultPage;
            }

            return redirectUrl;
        }

        #region Event Handlers

		/// <summary>
		///   Page_Load runs when the control is loaded
		/// </summary>
		/// <remarks>
		/// </remarks>
		/// <history>
		///   [jlucarino]	02/25/2010 created
		/// </history>
		protected override void OnLoad(EventArgs e)
		{
			base.OnLoad(e);

			try
			{
				if (ModuleContext.TabId != ModuleContext.PortalSettings.UserTabId)
				{
					UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("ModuleNotIntended", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
				}
				else
				{
					if (ProfileUserId == Null.NullInteger)
					{
						//Clicked on breadcrumb - don't know which user
					    Response.Redirect(Request.IsAuthenticated ? Globals.UserProfileURL(ModuleContext.PortalSettings.UserId) : GetRedirectUrl(), true);
					}
					else
					{
						var oUser = UserController.GetUserById(ModuleContext.PortalId, ProfileUserId);

						if (!IsUser)
						{
						    hlEdit.Visible = false;
						}

                        hlEdit.NavigateUrl = Globals.NavigateURL(ModuleContext.PortalSettings.ActiveTab.TabID, "Profile", "userId=" + ProfileUserId, "pageno=3");

						var properties = oUser.Profile.ProfileProperties;
						var visibleCount = 0;

						//loop through properties to see if any are set to visible
						foreach (ProfilePropertyDefinition profProperty in properties)
						{
							if (profProperty.Visible)
							{
								//Check Visibility
								if (profProperty.Visibility == UserVisibilityMode.AdminOnly)
								{
									//Only Visible if Admin (or self)
									profProperty.Visible = (IsAdmin || IsUser);
								}
								else if (profProperty.Visibility == UserVisibilityMode.MembersOnly)
								{
									//Only Visible if Is a Member (ie Authenticated)
									profProperty.Visible = Request.IsAuthenticated;
								}
							}
							if (profProperty.Visible)
							{
								visibleCount += 1;
							}
						}

						if (visibleCount == 0)
						{
							lblNoProperties.Visible = true;
						}
						else
						{
							var template = "";
							var oToken = new TokenReplace {User = oUser, AccessingUser = ModuleContext.PortalSettings.UserInfo};

							template = (ModuleContext.Settings["ProfileTemplate"] != null) ? Convert.ToString(ModuleContext.Settings["ProfileTemplate"]) : Localization.GetString("DefaultTemplate", LocalResourceFile);

							ProfileOutput.Text = oToken.ReplaceEnvironmentTokens(template);
						}
					}
				}
			}
			catch (Exception exc)
			{
				//Module failed to load
				Exceptions.ProcessModuleLoadException(this, exc);
			}
		}

		#endregion

	}
}