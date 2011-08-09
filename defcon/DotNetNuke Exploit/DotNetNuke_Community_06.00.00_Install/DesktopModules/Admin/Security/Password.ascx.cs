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
using System.Threading;
using System.Web.Security;

using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Users;
using DotNetNuke.Instrumentation;
using DotNetNuke.Security.Membership;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Utilities;

#endregion

namespace DotNetNuke.Modules.Admin.Users
{
    /// -----------------------------------------------------------------------------
    /// <summary>
    /// The Password UserModuleBase is used to manage Users Passwords
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    /// 	[cnurse]	03/03/2006  created
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class Password : UserModuleBase
    {
        #region Delegates

        public delegate void PasswordUpdatedEventHandler(object sender, PasswordUpdatedEventArgs e);

        #endregion
		
		#region "Public Properties"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets the UserMembership associated with this control
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/03/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public UserMembership Membership
        {
            get
            {
                UserMembership _Membership = null;
                if (User != null)
                {
                    _Membership = User.Membership;
                }
                return _Membership;
            }
        }
		
		#endregion

		#region "Events"


        public event PasswordUpdatedEventHandler PasswordUpdated;
        public event PasswordUpdatedEventHandler PasswordQuestionAnswerUpdated;

		#endregion

		#region "Event Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Raises the PasswordUpdated Event
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/08/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public void OnPasswordUpdated(PasswordUpdatedEventArgs e)
        {
            if (PasswordUpdated != null)
            {
                PasswordUpdated(this, e);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Raises the PasswordQuestionAnswerUpdated Event
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/09/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public void OnPasswordQuestionAnswerUpdated(PasswordUpdatedEventArgs e)
        {
            if (PasswordQuestionAnswerUpdated != null)
            {
                PasswordQuestionAnswerUpdated(this, e);
            }
        }

		#endregion

		#region "Public Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// DataBind binds the data to the controls
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/03/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public override void DataBind()
        {
            if (IsAdmin)
            {
                lblTitle.Text = string.Format(Localization.GetString("PasswordTitle.Text", LocalResourceFile), User.Username, User.UserID);
            }
            else
            {
                titleRow.Visible = false;
            }
            lblLastChanged.Text = User.Membership.LastPasswordChangeDate.ToLongDateString();

            //Set Password Expiry Label
            if (User.Membership.UpdatePassword)
            {
                lblExpires.Text = Localization.GetString("ForcedExpiry", LocalResourceFile);
            }
            else
            {
                lblExpires.Text = PasswordConfig.PasswordExpiry > 0 ? User.Membership.LastPasswordChangeDate.AddDays(PasswordConfig.PasswordExpiry).ToLongDateString() : Localization.GetString("NoExpiry", LocalResourceFile);
            }
			
            //f Password retrieval is not supported then only the user can change
            //their password, an Admin must Reset
            if (((!MembershipProviderConfig.PasswordRetrievalEnabled) && IsAdmin && (!IsUser)))
            {
                pnlChange.Visible = false;
            }
            else
            {
                pnlChange.Visible = true;
				
				//Set up Change Password
                if (IsAdmin && !IsUser)
                {
                    lblChangeHelp.Text = Localization.GetString("AdminChangeHelp", LocalResourceFile);
                    oldPasswordRow.Visible = false;
                }
                else
                {
                    lblChangeHelp.Text = Localization.GetString("UserChangeHelp", LocalResourceFile);
                }
            }
			
            //If Password Reset is not enabled then only the Admin can reset the 
            //Password, a User must Update
            if (!MembershipProviderConfig.PasswordResetEnabled)
            {
                pnlReset.Visible = false;
            }
            else
            {
                pnlReset.Visible = true;
				
				//Set up Reset Password
                if (IsAdmin && !IsUser)
                {
                    if (MembershipProviderConfig.RequiresQuestionAndAnswer)
                    {
                        pnlReset.Visible = false;
                    }
                    else
                    {
                        lblResetHelp.Text = Localization.GetString("AdminResetHelp", LocalResourceFile);
                    }
                    questionRow.Visible = false;
                    answerRow.Visible = false;
                }
                else
                {
                    if (MembershipProviderConfig.RequiresQuestionAndAnswer && IsUser)
                    {
                        lblResetHelp.Text = Localization.GetString("UserResetHelp", LocalResourceFile);
                        lblQuestion.Text = User.Membership.PasswordQuestion;
                        questionRow.Visible = true;
                        answerRow.Visible = true;
                    }
                    else
                    {
                        pnlReset.Visible = false;
                    }
                }
            }
			
            //Set up Edit Question and Answer area
            if (MembershipProviderConfig.RequiresQuestionAndAnswer && IsUser)
            {
                pnlQA.Visible = true;
            }
            else
            {
                pnlQA.Visible = false;
            }
        }

		#endregion

		#region "Event Handlers"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_Load runs when the control is loaded
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	03/03/2006  created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);
            //ClientAPI.RegisterKeyCapture(Parent, cmdUpdate.Controls[0], 13);
            //ClientAPI.RegisterKeyCapture(this, cmdUpdate.Controls[0], 13);
            cmdReset.Click += cmdReset_Click;
            cmdUpdate.Click += cmdUpdate_Click;
            cmdUpdateQA.Click += cmdUpdateQA_Click;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdReset_Click runs when the Reset Button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	03/03/2006  created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void cmdReset_Click(object sender, EventArgs e)
        {
            string answer = "";
            if (MembershipProviderConfig.RequiresQuestionAndAnswer && !IsAdmin)
            {
                if (String.IsNullOrEmpty(txtAnswer.Text))
                {
                    OnPasswordUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.InvalidPasswordAnswer));
                    return;
                }
                answer = txtAnswer.Text;
            }
            try
            {
                UserController.ResetPassword(User, answer);
                OnPasswordUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.Success));
            }
            catch (ArgumentException exc)
            {
                DnnLog.Error(exc);
                OnPasswordUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.InvalidPasswordAnswer));
            }
            catch (Exception exc)
            {
                DnnLog.Error(exc);
                OnPasswordUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.PasswordResetFailed));
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdUpdate_Click runs when the Update  Button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	03/03/2006  created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void cmdUpdate_Click(Object sender, EventArgs e)
        {
            //1. Check New Password and Confirm are the same
            if (txtNewPassword.Text != txtNewConfirm.Text)
            {
                OnPasswordUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.PasswordMismatch));
                return;
            }
			
			//2. Check New Password is Valid
            if (!UserController.ValidatePassword(txtNewPassword.Text))
            {
                OnPasswordUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.PasswordInvalid));
                return;
            }
			
			//3. Check old Password is Provided
            if (!IsAdmin && String.IsNullOrEmpty(txtOldPassword.Text))
            {
                OnPasswordUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.PasswordMissing));
                return;
            }
			
			//4. Check New Password is ddifferent
            if (!IsAdmin && txtNewPassword.Text == txtOldPassword.Text)
            {
                OnPasswordUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.PasswordNotDifferent));
                return;
            }
            try
            {
                OnPasswordUpdated(UserController.ChangePassword(User, txtOldPassword.Text, txtNewPassword.Text)
                                      ? new PasswordUpdatedEventArgs(PasswordUpdateStatus.Success)
                                      : new PasswordUpdatedEventArgs(PasswordUpdateStatus.PasswordResetFailed));
            }
            catch (MembershipPasswordException exc)
            {
				//Password Answer missing
                DnnLog.Error(exc);

                OnPasswordUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.InvalidPasswordAnswer));
            }
			catch(ThreadAbortException)
			{
				//Do nothing we are not logging ThreadAbortxceptions caused by redirects    
			}
            catch (Exception exc)
            {
				//Fail
                DnnLog.Error(exc);

                OnPasswordUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.PasswordResetFailed));
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdUpdate_Click runs when the Update Question and Answer  Button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	03/09/2006  created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void cmdUpdateQA_Click(object sender, EventArgs e)
        {
            if (String.IsNullOrEmpty(txtQAPassword.Text))
            {
                OnPasswordQuestionAnswerUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.PasswordInvalid));
                return;
            }
            if (String.IsNullOrEmpty(txtEditQuestion.Text))
            {
                OnPasswordQuestionAnswerUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.InvalidPasswordQuestion));
                return;
            }
            if (String.IsNullOrEmpty(txtEditAnswer.Text))
            {
                OnPasswordQuestionAnswerUpdated(new PasswordUpdatedEventArgs(PasswordUpdateStatus.InvalidPasswordAnswer));
                return;
            }
			
            //Try and set password Q and A
            UserInfo objUser = UserController.GetUserById(PortalId, UserId);
            OnPasswordQuestionAnswerUpdated(UserController.ChangePasswordQuestionAndAnswer(objUser, txtQAPassword.Text, txtEditQuestion.Text, txtEditAnswer.Text)
                                                ? new PasswordUpdatedEventArgs(PasswordUpdateStatus.Success)
                                                : new PasswordUpdatedEventArgs(PasswordUpdateStatus.PasswordResetFailed));
        }
		
		#endregion

        #region Nested type: PasswordUpdatedEventArgs

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// The PasswordUpdatedEventArgs class provides a customised EventArgs class for
        /// the PasswordUpdated Event
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/08/2006  created
        /// </history>
        /// -----------------------------------------------------------------------------
        public class PasswordUpdatedEventArgs
        {
            /// -----------------------------------------------------------------------------
            /// <summary>
            /// Constructs a new PasswordUpdatedEventArgs
            /// </summary>
            /// <param name="status">The Password Update Status</param>
            /// <history>
            /// 	[cnurse]	03/08/2006  Created
            /// </history>
            /// -----------------------------------------------------------------------------
            public PasswordUpdatedEventArgs(PasswordUpdateStatus status)
            {
                UpdateStatus = status;
            }

            /// -----------------------------------------------------------------------------
            /// <summary>
            /// Gets and sets the Update Status
            /// </summary>
            /// <history>
            /// 	[cnurse]	03/08/2006  Created
            /// </history>
            /// -----------------------------------------------------------------------------
            public PasswordUpdateStatus UpdateStatus { get; set; }
        }

        #endregion
    }
}