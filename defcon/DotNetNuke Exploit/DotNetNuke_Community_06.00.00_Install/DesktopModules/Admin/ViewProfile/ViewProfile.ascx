<%@ Control language="C#" CodeFile="ViewProfile.ascx.cs" AutoEventWireup="false" Explicit="True" Inherits="DotNetNuke.Modules.Admin.Users.ViewProfile" %>
<%@ Register Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls" TagPrefix="dnn" %>
<asp:literal id="ProfileOutput" runat="server" />
<asp:Label id="lblNoProperties" runat="server" resourcekey="NoProperties" Visible="false" />
<ul class="dnnActions dnnClear">
    <li><asp:HyperLink id="hlEdit" runat="server" resourcekey="Edit" CssClass="dnnPrimaryAction" /></li>
</ul>