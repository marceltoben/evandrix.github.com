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
using System.Linq;

using DotNetNuke.Entities.Modules;
using DotNetNuke.Entities.Profile;
using DotNetNuke.Entities.Users;
using DotNetNuke.Instrumentation;
using DotNetNuke.Security.Membership;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Utilities;

using DataCache = DotNetNuke.Common.Utilities.DataCache;
using Globals = DotNetNuke.Common.Globals;

#endregion

namespace DotNetNuke.Modules.Admin.Users
{
    /// -----------------------------------------------------------------------------
    /// <summary>
    /// The User UserModuleBase is used to manage the base parts of a User.
    /// </summary>
    /// <remarks>
    /// </remarks>
    /// <history>
    /// 	[cnurse]	03/01/2006  created
    /// </history>
    /// -----------------------------------------------------------------------------
    public partial class User : UserUserControlBase
    {
		#region "Public Properties"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets whether the User is valid
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/21/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public bool IsValid
        {
            get
            {
                return Validate();
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets and sets whether the Password section is displayed
        /// </summary>
        /// <history>
        /// 	[cnurse]	07/17/2007  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public bool ShowPassword
        {
            get
            {
                return Password.Visible;
            }
            set
            {
                Password.Visible = value;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Gets and sets whether the Update button
        /// </summary>
        /// <history>
        /// 	[cnurse]	05/18/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public bool ShowUpdate
        {
            get
            {
                return actionsRow.Visible;
            }
            set
            {
                actionsRow.Visible = value;
            }
        }

		#endregion

		#region "Private Methods"

        private void UpdateDisplayName()
        {
			//Update DisplayName to conform to Format
            object setting = GetSetting(UserPortalID, "Security_DisplayNameFormat");
            if ((setting != null) && (!string.IsNullOrEmpty(Convert.ToString(setting))))
            {
                User.UpdateDisplayName(Convert.ToString(setting));
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Validate validates the User
        /// </summary>
        /// <history>
        /// 	[cnurse]	08/10/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private bool Validate()
        {
            //Check User Editor
            bool _IsValid = userForm.IsValid;

            //Check Password is valid
            if (AddUser && ShowPassword)
            {
                UserCreateStatus createStatus = UserCreateStatus.AddUser;
                if (!chkRandom.Checked)
                {
					//1. Check Password and Confirm are the same
                    if (txtPassword.Text != txtConfirm.Text)
                    {
                        createStatus = UserCreateStatus.PasswordMismatch;
                    }
					
					//2. Check Password is Valid
                    if (createStatus == UserCreateStatus.AddUser && !UserController.ValidatePassword(txtPassword.Text))
                    {
                        createStatus = UserCreateStatus.InvalidPassword;
                    }
                    if (createStatus == UserCreateStatus.AddUser)
                    {
                        User.Membership.Password = txtPassword.Text;
                    }
                }
                else
                {
					//Generate a random password for the user
                    User.Membership.Password = UserController.GeneratePassword();
                }
				
                //Check Question/Answer
                if (createStatus == UserCreateStatus.AddUser && MembershipProviderConfig.RequiresQuestionAndAnswer)
                {
                    if (string.IsNullOrEmpty(txtQuestion.Text))
                    {
						//Invalid Question
                        createStatus = UserCreateStatus.InvalidQuestion;
                    }
                    else
                    {
                        User.Membership.PasswordQuestion = txtQuestion.Text;
                    }
                    if (createStatus == UserCreateStatus.AddUser)
                    {
                        if (string.IsNullOrEmpty(txtAnswer.Text))
                        {
							//Invalid Question
                            createStatus = UserCreateStatus.InvalidAnswer;
                        }
                        else
                        {
                            User.Membership.PasswordAnswer = txtAnswer.Text;
                        }
                    }
                }
                if (createStatus != UserCreateStatus.AddUser)
                {
                    _IsValid = false;
                    valPassword.ErrorMessage = UserController.GetUserCreateStatus(createStatus);
                    valPassword.IsValid = false;
                }
            }
            return _IsValid;
        }

		#endregion

		#region "Public Methods"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// CreateUser creates a new user in the Database
        /// </summary>
        /// <history>
        /// 	[cnurse]	05/18/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public void CreateUser()
        {
            //Update DisplayName to conform to Format
            UpdateDisplayName();

            if (IsRegister)
            {
                User.Membership.Approved = PortalSettings.UserRegistration == (int) Globals.PortalRegistrationType.PublicRegistration;
            }
            else
            {
                //Set the Approved status from the value in the Authorized checkbox
                User.Membership.Approved = chkAuthorize.Checked;
            }
            var user = User;
            var createStatus = UserController.CreateUser(ref user);

            var args = (createStatus == UserCreateStatus.Success)
                                            ? new UserCreatedEventArgs(User) {Notify = chkNotify.Checked} 
                                            : new UserCreatedEventArgs(null);
            args.CreateStatus = createStatus;
            OnUserCreated(args);
            OnUserCreateCompleted(args);
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// DataBind binds the data to the controls
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/01/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        public override void DataBind()
        {
            if (Page.IsPostBack == false)
            {
                string confirmString = Localization.GetString("DeleteItem");
                if (IsUser)
                {
                    confirmString = Localization.GetString("ConfirmUnRegister", LocalResourceFile);
                }
                ClientAPI.AddButtonConfirm(cmdDelete, confirmString);
                chkRandom.Checked = false;
            }

            cmdDelete.Visible = false;
            cmdRemove.Visible = false;
            cmdRestore.Visible = false;
            if (!AddUser)
            {
                var deletePermitted = (User.UserID != PortalSettings.AdministratorId) && !(IsUser && User.IsSuperUser);
                if ((deletePermitted))
                {
                    if ((User.IsDeleted))
                    {
                        cmdRemove.Visible = true;
                        cmdRestore.Visible = true;
                    }
                    else
                    {
                        cmdDelete.Visible = true;
                    }
                }
            }

            cmdUpdate.Text = Localization.GetString(IsUser ? "Register" : "CreateUser", LocalResourceFile);
            cmdDelete.Text = Localization.GetString(IsUser ? "UnRegister" : "Delete", LocalResourceFile);
            if (AddUser)
            {
                pnlAddUser.Visible = true;
                if (IsRegister)
                {
                    AuthorizeNotify.Visible = false;
                    randomRow.Visible = false;
                    if (ShowPassword)
                    {
                        questionRow.Visible = MembershipProviderConfig.RequiresQuestionAndAnswer;
                        answerRow.Visible = MembershipProviderConfig.RequiresQuestionAndAnswer;
                        lblPasswordHelp.Text = Localization.GetString("PasswordHelpUser", LocalResourceFile);
                    }
                }
                else
                {
                    lblPasswordHelp.Text = Localization.GetString("PasswordHelpAdmin", LocalResourceFile);
                }
                txtConfirm.Attributes.Add("value", txtConfirm.Text);
                txtPassword.Attributes.Add("value", txtPassword.Text);
            }

            userNameReadOnly.Visible = !AddUser;
            userName.Visible = AddUser;

            var setting = GetSetting(UserPortalID, "Security_EmailValidation");
            if ((setting != null) && (!string.IsNullOrEmpty(Convert.ToString(setting))))
            {
                email.ValidationExpression = Convert.ToString(setting);
            }

            foreach (ProfilePropertyDefinition def in User.Profile.ProfileProperties)
            {
                if (def.PropertyName == "FirstName")
                {
                    firstName.ValidationExpression = def.ValidationExpression;
                }
                if (def.PropertyName == "LastName")
                {
                    lastName.ValidationExpression = def.ValidationExpression;
                }
            }

            setting = GetSetting(UserPortalID, "Security_DisplayNameFormat");
            if ((setting != null) && (!string.IsNullOrEmpty(Convert.ToString(setting))))
            {
                if (AddUser)
                {
                    displayNameReadOnly.Visible = false;
                    displayName.Visible = false;
                }
                else
                {
                    displayNameReadOnly.Visible = true;
                    displayName.Visible = false;
                }
            }
            else
            {
                displayNameReadOnly.Visible = false;
                displayName.Visible = true;
            }


            userForm.DataSource = User;
			if (!Page.IsPostBack)
			{
				userForm.DataBind();
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
        /// 	[cnurse]	03/01/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);
            cmdDelete.Click += cmdDelete_Click;
            cmdUpdate.Click += cmdUpdate_Click;
            cmdRemove.Click += cmdRemove_Click;
            cmdRestore.Click += cmdRestore_Click;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdDelete_Click runs when the delete Button is clicked
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/01/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void cmdDelete_Click(Object sender, EventArgs e)
        {
            string name = User.Username;
            int id = UserId;
            UserInfo user = User;
            if (UserController.DeleteUser(ref user, true, false))
            {
                OnUserDeleted(new UserDeletedEventArgs(id, name));
            }
            else
            {
                OnUserDeleteError(new UserUpdateErrorArgs(id, name, "UserDeleteError"));
            }
        }

        private void cmdRestore_Click(Object sender, EventArgs e)
        {
            var name = User.Username;
            var id = UserId;

            var userInfo = User;
            if (UserController.RestoreUser(ref userInfo))
            {
                OnUserRestored(new UserRestoredEventArgs(id, name));
            }
            else
            {
                OnUserRestoreError(new UserUpdateErrorArgs(id, name, "UserRestoreError"));
            }
        }

        private void cmdRemove_Click(Object sender, EventArgs e)
        {
            var name = User.Username;
            var id = UserId;

            if (UserController.RemoveUser(User))
            {
                OnUserRemoved(new UserRemovedEventArgs(id, name));
            }
            else
            {
                OnUserRemoveError(new UserUpdateErrorArgs(id, name, "UserRemoveError"));
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdUpdate_Click runs when the Update Button is clicked
        /// </summary>
        /// <history>
        /// 	[cnurse]	03/01/2006  Created
        /// </history>
        /// -----------------------------------------------------------------------------
        private void cmdUpdate_Click(Object sender, EventArgs e)
        {
            if (AddUser)
            {
                if (IsValid)
                {
                    CreateUser();
                    DataCache.ClearPortalCache(PortalId, true);
                }
            }
            else
            {
                if (userForm.IsValid && (User != null))
                {
                    if (User.UserID == PortalSettings.AdministratorId)
                    {
						//Clear the Portal Cache
                        DataCache.ClearPortalCache(UserPortalID, true);
                    }
                    try
                    {
						//Update DisplayName to conform to Format
                        UpdateDisplayName();

                        UserController.UpdateUser(UserPortalID, User);
                        OnUserUpdated(EventArgs.Empty);
                        OnUserUpdateCompleted(EventArgs.Empty);
                    }
                    catch (Exception exc)
                    {
                        DnnLog.Error(exc);

                        var args = new UserUpdateErrorArgs(User.UserID, User.Username, "EmailError");
                        OnUserUpdateError(args);
                    }
                }
            }
        }
		
		#endregion

    }
}