<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.SearchInput.SearchInput" CodeFile="SearchInput.ascx.cs" %>
<div class="dnnForm dnnSearchInput dnnClear">
    <div class="dnnFormItem">
        <dnn:label id="plSearch" runat="server" controlname="cboModule" />
        <asp:image id="imgSearch" runat="server" CssClass="dnnSISearchLabel dnnLeft" />
        <asp:textbox id="txtSearch" runat="server" Wrap="False" columns="35" maxlength="200" />
        <asp:imagebutton id="imgGo" runat="server" />
        <asp:Button id="cmdGo" runat="server" Text="Go" ResourceKey="cmdGo" />
    </div>
</div>