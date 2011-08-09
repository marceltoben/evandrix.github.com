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
using System.IO;
using System.Web.UI;

using DotNetNuke.Common;
using DotNetNuke.Entities.Host;
using DotNetNuke.Entities.Modules;
using DotNetNuke.Services.Localization;
using DotNetNuke.UI.Skins.Controls;

#endregion

namespace DotNetNuke.Modules.SearchInput
{
    public partial class SearchInput : PortalModuleBase
    {
        private void ShowHideImages()
        {
            string showGoImage = Convert.ToString(Settings["ShowGoImage"]);
            string showSearchImage = Convert.ToString(Settings["ShowSearchImage"]);
            bool bShowGoImage = false;
            bool bShowSearchImage = false;
            if (!String.IsNullOrEmpty(showGoImage))
            {
                bShowGoImage = Convert.ToBoolean(showGoImage);
            }
            if (!String.IsNullOrEmpty(showSearchImage))
            {
                bShowSearchImage = Convert.ToBoolean(showSearchImage);
            }
            imgSearch.Visible = bShowSearchImage;
            plSearch.Visible = !bShowSearchImage;
            imgGo.Visible = bShowGoImage;
            cmdGo.Visible = !bShowGoImage;
        }

        private void SearchExecute()
        {
            int ResultsTabid;

            if (Settings["SearchResultsModule"] != null)
            {
                ResultsTabid = int.Parse(Convert.ToString(Settings["SearchResultsModule"]));
            }
            else
            {
				//Get Default Page
                var objModules = new ModuleController();
                ModuleInfo SearchModule = objModules.GetModuleByDefinition(PortalSettings.PortalId, "Search Results");
                if (SearchModule == null)
                {
                    UI.Skins.Skin.AddModuleMessage(this, Localization.GetString("NoSearchModule", LocalResourceFile), ModuleMessage.ModuleMessageType.YellowWarning);
                    return;
                }
                else
                {
                    ResultsTabid = SearchModule.TabID;
                }
            }
            if (Host.UseFriendlyUrls)
            {
                Response.Redirect(Globals.NavigateURL(ResultsTabid) + "?Search=" + Server.UrlEncode(txtSearch.Text));
            }
            else
            {
                Response.Redirect(Globals.NavigateURL(ResultsTabid) + "&Search=" + Server.UrlEncode(txtSearch.Text));
            }
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            imgGo.Click += imgGo_Click;
            cmdGo.Click += cmdGo_Click;

            string GoUrl = Localization.GetString("imgGo.ImageUrl", LocalResourceFile);
            string SearchUrl = Localization.GetString("imgSearch.ImageUrl", LocalResourceFile);
            if (GoUrl.StartsWith("~"))
            {
                imgGo.ImageUrl = GoUrl;
            }
            else
            {
                imgGo.ImageUrl = Path.Combine(PortalSettings.HomeDirectory, GoUrl);
            }
            if (SearchUrl.StartsWith("~"))
            {
                imgSearch.ImageUrl = SearchUrl;
            }
            else
            {
                imgSearch.ImageUrl = Path.Combine(PortalSettings.HomeDirectory, SearchUrl);
            }
            ShowHideImages();

            cmdGo.Text = Localization.GetString("cmdGo.Text", LocalResourceFile);
        }

        private void imgGo_Click(Object sender, ImageClickEventArgs e)
        {
            SearchExecute();
        }

        private void cmdGo_Click(object sender, EventArgs e)
        {
            SearchExecute();
        }
    }
}