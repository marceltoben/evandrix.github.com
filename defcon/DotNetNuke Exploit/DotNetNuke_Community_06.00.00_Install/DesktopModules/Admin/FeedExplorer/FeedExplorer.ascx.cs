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

using DotNetNuke.Entities.Modules;
using DotNetNuke.Instrumentation;
using DotNetNuke.Services.Exceptions;

#endregion

namespace DotNetNuke.Modules.Admin.Syndication
{
    public partial class FeedExplorer : PortalModuleBase
    {
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);
            string contentSource = "";
            string opmlUrlFile = "";
            string opmlText = "";
            string theme = "";
            try
            {
                contentSource = Convert.ToString(Settings["ContentSource"]).Trim();
                opmlUrlFile = Convert.ToString(Settings["OpmlUrlFile"]).Trim();
                opmlText = Convert.ToString(Settings["OpmlText"]).Trim();
                theme = Convert.ToString(Settings["Theme"]).Trim();
            }
            catch (Exception exc)
            {
                DnnLog.Error(exc);
                contentSource = "SolutionsExplorer";
            }
            try
            {
                if ((!String.IsNullOrEmpty(contentSource)))
                {
                    switch (contentSource)
                    {
                        case "NewsExplorer":
                            string newsOpmlPath = Path.Combine(PortalSettings.HomeDirectoryMapPath, "News.opml");
                            if ((!File.Exists(newsOpmlPath)))
                            {
                                File.Copy(Server.MapPath("~/DesktopModules/Admin/FeedExplorer/News.opml"), newsOpmlPath);
                            }
                            Feeds.OpmlText = "";
                            Feeds.OpmlUrl = "";
                            Feeds.OpmlFile = newsOpmlPath;
                            break;
                        case "OpmlUrlFile":
                            if ((!String.IsNullOrEmpty(opmlUrlFile)))
                            {
                                Feeds.OpmlText = "";
                                if ((opmlUrlFile.StartsWith("http") || opmlUrlFile.StartsWith("/")))
                                {
                                    Feeds.OpmlFile = "";
                                    Feeds.OpmlUrl = opmlUrlFile;
                                }
                                else
                                {
                                    if ((File.Exists(opmlUrlFile)))
                                    {
                                        Feeds.OpmlUrl = "";
                                        Feeds.OpmlFile = opmlUrlFile;
                                    }
                                }
                            }
                            break;
                        case "OpmlText":
                            if ((!String.IsNullOrEmpty(opmlText)))
                            {
                                Feeds.OpmlFile = "";
                                Feeds.OpmlUrl = "";
                                Feeds.OpmlText = opmlText;
                            }
                            break;
                    }
                }
                if ((!String.IsNullOrEmpty(theme)))
                {
                    Feeds.Theme = theme;
                }
            }
            catch (Exception exc)
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }
    }
}