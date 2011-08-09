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

using DotNetNuke.Common.Utilities;
using DotNetNuke.Entities.Users;
using DotNetNuke.Instrumentation;
using DotNetNuke.Security.Membership;
using DotNetNuke.Services.Authentication;
using DotNetNuke.UI.Utilities;

using Globals = DotNetNuke.Common.Globals;

#endregion

namespace DotNetNuke.Modules.Admin.Authentication
{

	/// <summary>
	/// The Login AuthenticationLoginBase is used to provide a login for a registered user
	/// portal.
	/// </summary>
	/// <remarks>
	/// </remarks>
	/// <history>
	/// 	[cnurse]	9/24/2004	Updated to reflect design changes for Help, 508 support
	///                       and localisation
	///     [cnurse]    08/07/2007  Ported to new Authentication Framework
	/// </history>
	public partial class Login : AuthenticationLoginBase
	{

		#region Protected Properties

		/// <summary>
		/// Gets whether the Captcha control is used to validate the login
		/// </summary>
		/// <history>
		/// 	[cnurse]	03/17/2006  Created
		///     [cnurse]    07/03/2007  Moved from Sign.ascx.vb
		/// </history>
		protected bool UseCaptcha
		{
			get
			{
				return AuthenticationConfig.GetConfig(PortalId).UseCaptcha;
			}
		}

		#endregion

		#region Public Properties

		/// <summary>
		/// Check if the Auth System is Enabled (for the Portal)
		/// </summary>
		/// <remarks></remarks>
		/// <history>
		/// 	[cnurse]	07/04/2007	Created
		/// </history>
		public override bool Enabled
		{
			get
			{
				return AuthenticationConfig.GetConfig(PortalId).Enabled;
			}
		}

		#endregion

		#region Event Handlers

		/// <summary>
		/// Page_Load runs when the control is loaded
		/// </summary>
		/// <remarks>
		/// </remarks>
		/// <history>
		/// 	[cnurse]	9/8/2004	Updated to reflect design changes for Help, 508 support
		///                       and localisation
		/// </history>
		protected override void OnLoad(EventArgs e)
		{
			base.OnLoad(e);

			cmdLogin.Click += OnLoginClick;

			ClientAPI.RegisterKeyCapture(Parent, cmdLogin, 13);
			if (!Request.IsAuthenticated)
			{
				if (Page.IsPostBack == false)
				{
					try
					{
						if (Request.QueryString["username"] != null)
						{
							txtUsername.Text = Request.QueryString["username"];
						}
						if (Request.QueryString["verificationcode"] != null)
						{
							if (PortalSettings.UserRegistration == (int) Globals.PortalRegistrationType.VerifiedRegistration)
							{
								//Display Verification Rows 
								divVerify.Visible = true;
								txtVerification.Text = Request.QueryString["verificationcode"];
							}
						}
					}
					catch (Exception ex)
					{
						//control not there 
						DnnLog.Error(ex);
					}
				}
				try
				{
					Globals.SetFormFocus(string.IsNullOrEmpty(txtUsername.Text) ? txtUsername : txtPassword);
				}
				catch (Exception ex)
				{
					//Not sure why this Try/Catch may be necessary, logic was there in old setFormFocus location stating the following
					//control not there or error setting focus
					DnnLog.Error(ex);
				}
			}
			divCaptcha1.Visible = UseCaptcha;
			divCaptcha2.Visible = UseCaptcha;
		}


		/// <summary>
		/// cmdLogin_Click runs when the login button is clicked
		/// </summary>
		/// <remarks>
		/// </remarks>
		/// <history>
		/// 	[cnurse]	9/24/2004	Updated to reflect design changes for Help, 508 support
		///                       and localisation
		///     [cnurse]    12/11/2005  Updated to reflect abstraction of Membership
		///     [cnurse]    07/03/2007  Moved from Sign.ascx.vb
		/// </history>
		private void OnLoginClick(object sender, EventArgs e)
		{
			if ((UseCaptcha && ctlCaptcha.IsValid) || (!UseCaptcha))
			{
				var loginStatus = UserLoginStatus.LOGIN_FAILURE;
				var objUser = UserController.ValidateUser(PortalId, txtUsername.Text, txtPassword.Text, "DNN", txtVerification.Text, PortalSettings.PortalName, IPAddress, ref loginStatus);
				var authenticated = Null.NullBoolean;
				var message = Null.NullString;
				if (loginStatus == UserLoginStatus.LOGIN_USERNOTAPPROVED)
				{
					//Check if its the first time logging in to a verified site
					if (PortalSettings.UserRegistration == (int) Globals.PortalRegistrationType.VerifiedRegistration)
					{
						if (!divVerify.Visible)
						{
							//Display Verification Rows so User can enter verification code
							divVerify.Visible = true;
							message = "EnterCode";
						}
						else
						{
							message = !String.IsNullOrEmpty(txtVerification.Text) ? "InvalidCode" : "EnterCode";
						}
					}
					else
					{
						message = "UserNotAuthorized";
					}
				}
				else
				{
					authenticated = (loginStatus != UserLoginStatus.LOGIN_FAILURE);
				}
				
				//Raise UserAuthenticated Event
				var eventArgs = new UserAuthenticatedEventArgs(objUser, txtUsername.Text, loginStatus, "DNN") {Authenticated = authenticated, Message = message};
				OnUserAuthenticated(eventArgs);
			}
		}
		
		#endregion

	}
}