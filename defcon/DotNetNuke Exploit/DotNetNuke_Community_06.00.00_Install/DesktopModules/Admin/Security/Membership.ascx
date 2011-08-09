<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Users.Membership" CodeFile="Membership.ascx.cs" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls"%>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<dnn:DnnFormEditor id="membershipForm" runat="Server" FormMode="Short">
    <Items>
        <dnn:DnnFormLiteralItem ID="createdDate" runat="server" DataField="CreatedDate" />
        <dnn:DnnFormLiteralItem ID="lastLoginDate" runat="server" DataField="LastLoginDate" />
        <dnn:DnnFormLiteralItem ID="lastActivityDate" runat="server" DataField="LastActivityDate" />
        <dnn:DnnFormLiteralItem ID="lastPasswordChangeDate" runat="server" DataField="LastPasswordChangeDate" />
        <dnn:DnnFormLiteralItem ID="lastLockoutDate" runat="server" ResourceKey="LastLockoutDate" />
        <dnn:DnnFormLiteralItem ID="isOnLine" runat="server" DataField="IsOnLine" />
        <dnn:DnnFormLiteralItem ID="lockedOut" runat="server" DataField="LockedOut" />
        <dnn:DnnFormLiteralItem ID="approved" runat="server" DataField="Approved" />
        <dnn:DnnFormLiteralItem ID="updatePassword" runat="server" DataField="UpdatePassword" />
        <dnn:DnnFormLiteralItem ID="isDeleted" runat="server" DataField="IsDeleted" />
   </Items>
</dnn:DnnFormEditor>
<ul id="actionsRow" runat="server" class="dnnActions dnnClear">
    <li><asp:LinkButton id="cmdAuthorize" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdAuthorize" /></li>
    <li><asp:LinkButton id="cmdUnAuthorize" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdUnAuthorize" /></li>
    <li><asp:LinkButton id="cmdUnLock" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdUnLock" /></li>
    <li><asp:LinkButton id="cmdPassword" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdPassword" /></li>
</ul>
