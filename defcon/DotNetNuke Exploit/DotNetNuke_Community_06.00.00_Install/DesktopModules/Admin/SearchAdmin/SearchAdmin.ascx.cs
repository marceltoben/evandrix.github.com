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
using DotNetNuke.Entities.Controllers;
using DotNetNuke.Entities.Host;
using DotNetNuke.Entities.Portals;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;
using DotNetNuke.Services.Search;
using DotNetNuke.UI.Modules;
using DotNetNuke.UI.Skins.Controls;

#endregion

namespace DotNetNuke.Modules.Admin.Search
{

    public partial class SearchAdmin : ModuleUserControlBase
    {

		#region "Event Handlers"

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// Page_Load runs when the control is loaded
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	11/16/2004 created
        ///     [cnurse]    01/10/2005 added UrlReferrer code so Cancel returns to previous page
        /// </history>
        /// -----------------------------------------------------------------------------
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            cmdReIndex.Click += OnReIndexClick;
            cmdUpdate.Click += OnUpdateClick;

            if (!Page.IsPostBack)
            {
				if (Globals.IsHostTab(ModuleContext.PortalSettings.ActiveTab.TabID))
                {
                    txtMaxWordLength.Text = Host.SearchMaxWordlLength.ToString();
                    txtMinWordLength.Text = Host.SearchMinWordlLength.ToString();
                    chkIncludeCommon.Checked = Host.SearchIncludeCommon;
                    chkIncludeNumeric.Checked = Host.SearchIncludeNumeric;
                }
                else
                {
                    txtMaxWordLength.Text = ModuleContext.PortalSettings.SearchMaxWordlLength.ToString();
                    txtMinWordLength.Text = ModuleContext.PortalSettings.SearchMinWordlLength.ToString();
                    chkIncludeCommon.Checked = ModuleContext.PortalSettings.SearchIncludeCommon;
                    chkIncludeNumeric.Checked = ModuleContext.PortalSettings.SearchIncludeNumeric;
                }
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdReIndex_Click runs when the ReIndex LinkButton is clicked.  It re-indexes the
        /// site (or application if run on Host page)
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	11/16/2004 created
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnReIndexClick(object sender, EventArgs e)
        {
            try
            {
                Page.Validate();
                if (Page.IsValid)
                {
                    var se = new SearchEngine();
					if (Globals.IsHostTab(ModuleContext.PortalSettings.ActiveTab.TabID))
                    {
                        se.IndexContent();
                    }
                    else
                    {
                        se.IndexContent(ModuleContext.PortalId);
                    }
                    UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("Indexed", LocalResourceFile), ModuleMessage.ModuleMessageType.GreenSuccess);
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// cmdUpdate_Click runs when the Update LinkButton is clicked.
        /// It saves the current Search Settings
        /// </summary>
        /// <remarks>
        /// </remarks>
        /// <history>
        /// 	[cnurse]	9/9/2004	Modified
        /// </history>
        /// -----------------------------------------------------------------------------
        protected void OnUpdateClick(object sender, EventArgs e)
        {
            try
            {
                Page.Validate();
                if(Page.IsValid)
                {
					if (Globals.IsHostTab(ModuleContext.PortalSettings.ActiveTab.TabID))
                    {
                        HostController.Instance.Update("MaxSearchWordLength", txtMaxWordLength.Text);
                        HostController.Instance.Update("MinSearchWordLength", txtMinWordLength.Text);
                        HostController.Instance.Update("SearchIncludeCommon", chkIncludeCommon.Checked ? "Y" : "N");
                        HostController.Instance.Update("SearchIncludeNumeric", chkIncludeNumeric.Checked ? "Y" : "N");

						//clear host settings cache
                        DataCache.ClearHostCache(false);
                    }
                    else
                    {
                        PortalController.UpdatePortalSetting(ModuleContext.PortalId, "MaxSearchWordLength", txtMaxWordLength.Text);
                        PortalController.UpdatePortalSetting(ModuleContext.PortalId, "MinSearchWordLength", txtMinWordLength.Text);
                        PortalController.UpdatePortalSetting(ModuleContext.PortalId, "SearchIncludeCommon", chkIncludeCommon.Checked ? "Y" : "N");
                        PortalController.UpdatePortalSetting(ModuleContext.PortalId, "SearchIncludeNumeric", chkIncludeNumeric.Checked ? "Y" : "N");
                    }
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }
		
		#endregion

    }
}