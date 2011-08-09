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
using System.Net;
using System.Web.UI.WebControls;
using System.Xml;
using System.Xml.XPath;

using DotNetNuke.Entities.Modules;
using DotNetNuke.Services.Exceptions;
using DotNetNuke.Services.Localization;

#endregion

namespace DotNetNuke.Modules.Admin.Marketplace
{
    public partial class Marketplace : PortalModuleBase
    {
        private const string XSL_PATH = "RSS91.xsl";
        private const string PRODUCT_XMLNODE_PATH = "//channel/item";

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            cmdGo.Click += cmdGo_Click;

            try
            {
                if (!Page.IsPostBack)
                {
                    PopulateControls();
                }
            }
            catch (Exception exc) //Module failed to load
            {
                Exceptions.ProcessModuleLoadException(this, exc);
            }
        }

        private void PopulateControls()
        {
            ListItem oListItem;
            XmlDocument oXMLDocument;
            XmlNodeList oNodes;
            try
            {
                oXMLDocument = new XmlDocument();
                oXMLDocument.Load(AppDomain.CurrentDomain.SetupInformation.ApplicationBase + "DesktopModules\\Admin\\Marketplace\\ListItems.xml");

                //load search-by
                oNodes = oXMLDocument.SelectNodes("/listitems/feedtypes/feedtype");

                foreach (XmlNode oNode in oNodes)
                {
                    oListItem = new ListItem();
                    oListItem.Value = oNode.ChildNodes.Item(0).InnerText; //ID
                    oListItem.Text = oNode.ChildNodes.Item(1).InnerText; //Name
                    cboSearchFor.Items.Add(oListItem);
                }
				
                //load categories
                oNodes = oXMLDocument.SelectNodes("/listitems/categories/category");

                foreach (XmlNode oNode in oNodes)
                {
                    oListItem = new ListItem();
                    oListItem.Value = oNode.ChildNodes.Item(0).InnerText; //ID
                    oListItem.Text = oNode.ChildNodes.Item(1).InnerText; //Name
                    cboCategories.Items.Add(oListItem);
                }
            }
            catch (Exception oExc)
            {
                throw oExc;
            }
        }

        protected void cmdGo_Click(object sender, EventArgs e)
        {
            HttpWebRequest oRequest;
            WebResponse oResponse;
            Stream oStream;
            XmlTextReader oReader;
            XPathDocument oXMLDocument;

            string sFeedType;
            string sCategoryID;
            string sRequest;
            
            try
            {
                sFeedType = cboSearchFor.SelectedValue;
                sCategoryID = cboCategories.SelectedValue;
                sRequest = "http://www.snowcovered.com/Snowcovered2/DesktopModules/PortalStore/rss.aspx?feedtype=" + sFeedType + "&categoryid=" + sCategoryID;
                try
                {
					//make remote request
                    oRequest = (HttpWebRequest) WebRequest.Create(sRequest);
                    oRequest.Timeout = 10000; //10 seconds
                    oResponse = oRequest.GetResponse();
                    oStream = oResponse.GetResponseStream();
                }
                catch (Exception oExc)
                {
                    throw oExc;
                }
				
                //load XML document
                oReader = new XmlTextReader(oStream);
                oReader.XmlResolver = null;
                oXMLDocument = new XPathDocument(oReader);
                XPathNavigator nav = oXMLDocument.CreateNavigator();
                xmlRSS.XPathNavigator = nav;
                //xmlRSS.Document = oXMLDocument;
                xmlRSS.TransformSource = XSL_PATH;

                //display message if no products found
                if (nav.Select(PRODUCT_XMLNODE_PATH).Count == 0)
                {
                    lblMessage.Text = Localization.GetString("NoProductsFound.Text", LocalResourceFile);
                }
            }
            catch (Exception oExc)
            {
                throw oExc;
            }
        }
    }
}