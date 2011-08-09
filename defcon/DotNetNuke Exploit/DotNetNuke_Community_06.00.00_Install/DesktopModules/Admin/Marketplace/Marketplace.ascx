<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Marketplace.Marketplace" CodeFile="Marketplace.ascx.cs" %>

<br />
<asp:label id="lblSearchFor" runat="server" resourcekey="lblSearchFor" />&nbsp;
<asp:DropDownList cssclass="NormalTextbox" id="cboSearchFor" runat="server" Width="150"></asp:DropDownList>&nbsp;&nbsp;&nbsp;

<asp:label id="lblInCategory" runat="server" resourcekey="lblInCategory" />&nbsp;
<asp:DropDownList cssclass="NormalTextbox" id="cboCategories" runat="server" Width="150"></asp:DropDownList>&nbsp;&nbsp;&nbsp;

<asp:Button ID="cmdGo" runat="server" Text="Go" ResourceKey="cmdGo" CssClass="StandardButton"/>

<br />
<br />
<br />
<asp:xml id="xmlRSS" runat="server"></asp:xml>
<br />
<asp:Label ID="lblMessage" cssclass="NormalTextbox" runat="server"></asp:Label>

