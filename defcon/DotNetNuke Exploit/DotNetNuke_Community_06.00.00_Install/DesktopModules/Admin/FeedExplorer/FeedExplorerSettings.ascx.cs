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
using System.Text;

using DotNetNuke.Entities.Modules;
using DotNetNuke.Services.Exceptions;

#endregion

namespace DotNetNuke.Modules.Admin.Syndication
{
    public partial class FeedExplorerSettings : ModuleSettingsBase
    {
        public override void LoadSettings()
        {
            try
            {
                if (!Page.IsPostBack)
                {
                    if (ContentSource.Items.FindByValue(Convert.ToString(TabModuleSettings["ContentSource"])) != null)
                    {
                        ContentSource.Items.FindByValue(Convert.ToString(TabModuleSettings["ContentSource"])).Selected = true;
                    }
                    if (Theme.Items.FindByValue(Convert.ToString(TabModuleSettings["Theme"])) != null)
                    {
                        Theme.Items.FindByValue(Convert.ToString(TabModuleSettings["Theme"])).Selected = true;
                    }
                    if (!String.IsNullOrEmpty(Convert.ToString(TabModuleSettings["OpmlUrlFile"])))
                    {
                        OpmlUrlFile.Text = Convert.ToString(TabModuleSettings["OpmlUrlFile"]);
                    }
                    else
                    {
                        OpmlUrlFile.Text = "";
                    }
                    if (!String.IsNullOrEmpty(Convert.ToString(TabModuleSettings["OpmlText"])))
                    {
                        OpmlText.Text = Convert.ToString(TabModuleSettings["OpmlText"]);
                    }
                    else
                    {
                        var opml = new StringBuilder();
                        opml.Append("<outline text=\"Tab One\" type=\"none\" category=\"Tab\">" + Environment.NewLine);
                        opml.Append("    <outline text=\"Section 1\" type=\"none\" category=\"Section\">" + Environment.NewLine);
                        opml.Append("        <outline text=\"Category 1\" type=\"rss\" category=\"Category\" xmlUrl=\"http://news.google.com/?output=rss\" />" + Environment.NewLine);
                        opml.Append("        <outline text=\"Category 2\" type=\"rss\" category=\"Category\" xmlUrl=\"http://news.google.com/?output=rss\" />" + Environment.NewLine);
                        opml.Append("    </outline>" + Environment.NewLine);
                        opml.Append("    <outline text=\"Section 2\" type=\"none\" category=\"Section\">" + Environment.NewLine);
                        opml.Append("        <outline text=\"Category 1\" type=\"rss\" category=\"Category\" xmlUrl=\"http://news.google.com/?output=rss\" />" + Environment.NewLine);
                        opml.Append("        <outline text=\"Category 2\" type=\"rss\" category=\"Category\" xmlUrl=\"http://news.google.com/?output=rss\" />" + Environment.NewLine);
                        opml.Append("    </outline>" + Environment.NewLine);
                        opml.Append("</outline>" + Environment.NewLine);
                        opml.Append("<outline text=\"Tab Two\" type=\"none\" category=\"Tab\">" + Environment.NewLine);
                        opml.Append("    <outline text=\"Section 1\" type=\"none\" category=\"Section\">" + Environment.NewLine);
                        opml.Append("        <outline text=\"Category 1\" type=\"rss\" category=\"Category\" xmlUrl=\"http://news.google.com/?output=rss\" />" + Environment.NewLine);
                        opml.Append("        <outline text=\"Category 2\" type=\"rss\" category=\"Category\" xmlUrl=\"http://news.google.com/?output=rss\" />" + Environment.NewLine);
                        opml.Append("    </outline>" + Environment.NewLine);
                        opml.Append("    <outline text=\"Section 2\" type=\"none\" category=\"Section\">" + Environment.NewLine);
                        opml.Append("        <outline text=\"Category 1\" type=\"rss\" category=\"Category\" xmlUrl=\"http://news.google.com/?output=rss\" />" + Environment.NewLine);
                        opml.Append("        <outline text=\"Category 2\" type=\"rss\" category=\"Category\" xmlUrl=\"http://news.google.com/?output=rss\" />" + Environment.NewLine);
                        opml.Append("    </outline>" + Environment.NewLine);
                        opml.Append("</outline>" + Environment.NewLine);
                        opml.Append("<outline text=\"DotNetNuke\" type=\"link\" category=\"Feed\" xmlUrl=\"http://www.dotnetnuke.com/Portals/25/SolutionsExplorer/GlobalDirectory.opml\" />" +
                                    Environment.NewLine);
                        OpmlText.Text = opml.ToString();
                    }
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        public override void UpdateSettings()
        {
            try
            {
                if (Page.IsValid)
                {
                    var objModules = new ModuleController();
                    objModules.UpdateTabModuleSetting(TabModuleId, "ContentSource", ContentSource.SelectedValue);
                    objModules.UpdateTabModuleSetting(TabModuleId, "Theme", Theme.SelectedValue);
                    objModules.UpdateTabModuleSetting(TabModuleId, "OpmlUrlFile", OpmlUrlFile.Text);
                    objModules.UpdateTabModuleSetting(TabModuleId, "OpmlText", OpmlText.Text);
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }
    }
}