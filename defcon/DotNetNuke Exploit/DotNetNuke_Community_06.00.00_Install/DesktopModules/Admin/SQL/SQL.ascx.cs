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
using System.Configuration;
using System.Data;
using System.IO;
using System.Web.UI.WebControls;
using DotNetNuke.Common;
using DotNetNuke.Common.Utilities;
using DotNetNuke.Data;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Log.EventLog;
using DotNetNuke.UI.Skins.Controls;

#endregion

namespace DotNetNuke.Modules.Admin.SQL
{
	/// -----------------------------------------------------------------------------
	/// <summary>
	/// The SQL PortalModuleBase is used run SQL Scripts on the Database
	/// </summary>
	/// <remarks>
	/// </remarks>
	/// <history>
	/// 	[cnurse]	9/28/2004	Updated to reflect design changes for Help, 508 support
	///                       and localisation
	/// </history>
	/// -----------------------------------------------------------------------------
	public partial class SQL : PortalModuleBase
    {

        #region Members

        protected Label lblRunAsScript;

        #endregion

        #region Event Handlers

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_Load runs when the control is loaded.
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/28/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        ///     [VMasanas]  9/28/2004   Changed redirect to Access Denied
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            CheckSecurity();

            cmdExecute.Click += OnExecuteClick;
            cmdUpload.Click += OnUploadClick;

            try
            {
                if (!UserInfo.IsSuperUser)
                {
                    Response.Redirect(Globals.NavigateURL("Access Denied"), true);
                }
                if (!Page.IsPostBack)
                {
                    ConnectionStringSettingsCollection colConnections = ConfigurationManager.ConnectionStrings;
                    foreach (ConnectionStringSettings objConnection in colConnections)
                    {
                        if (objConnection.Name.ToLower() != "localmysqlserver" && objConnection.Name.ToLower() != "localsqlserver")
                        {
                            cboConnection.Items.Add(objConnection.Name);
                        }
                    }
                    cboConnection.SelectedIndex = 0;
                    cmdExecute.ToolTip = Localization.GetString("cmdExecute.ToolTip", LocalResourceFile);
                    chkRunAsScript.ToolTip = Localization.GetString("chkRunAsScript.ToolTip", LocalResourceFile);
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdExecute_Click runs when the Execute button is clicked
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/28/2004	Updated to reflect design changes for Help, 508 support
        ///                       and localisation
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnExecuteClick(object sender, EventArgs e)
        {
            try
            {

                if (!String.IsNullOrEmpty(txtQuery.Text))
                {
                    var connectionstring = Config.GetConnectionString(cboConnection.SelectedValue);
                    if (chkRunAsScript.Checked)
                    {
                        var strError = DataProvider.Instance().ExecuteScript(connectionstring, txtQuery.Text);
                        if (strError == Null.NullString)
                        {
                            UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("QuerySuccess", LocalResourceFile), ModuleMessage.ModuleMessageType.GreenSuccess);
                        }
                        else
                        {
                            UI.Skins.Skin.AddModuleMessage(this, strError, ModuleMessage.ModuleMessageType.RedError);
                        }
                    }
                    else
                    {
                        var dr = DataProvider.Instance().ExecuteSQLTemp(connectionstring, txtQuery.Text);
                        if (dr != null)
                        {
                            gvResults.DataSource = dr;
                            gvResults.DataBind();
                            dr.Close();

                            UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("QuerySuccess", LocalResourceFile), ModuleMessage.ModuleMessageType.GreenSuccess);
                        }
                        else
                        {

                            UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("QueryError", LocalResourceFile), ModuleMessage.ModuleMessageType.RedError);
                        }
                    }
                    RecordAuditEventLog(txtQuery.Text);
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        protected void OnUploadClick(object sender, EventArgs e)
        {
            if (Page.IsPostBack)
            {
                if (!String.IsNullOrEmpty(uplSqlScript.PostedFile.FileName))
                {
                    var scriptFile = new StreamReader(uplSqlScript.PostedFile.InputStream);
                    txtQuery.Text = scriptFile.ReadToEnd();
                }
            }
        }

        #endregion

        #region Private Methods

        private void RecordAuditEventLog(string query)
        {
            var props = new LogProperties {new LogDetailInfo("User", UserInfo.Username), new LogDetailInfo("SQL Query", query)};

            var elc = new EventLogController();
            elc.AddLog(props, PortalSettings, UserId, EventLogController.EventLogType.HOST_SQL_EXECUTED.ToString(), true);
        }

        private void CheckSecurity()
        {
            if (!UserInfo.IsSuperUser)
            {
                Response.Redirect(Globals.NavigateURL("Access Denied"), true);
            }
        }

        #endregion

    }
}