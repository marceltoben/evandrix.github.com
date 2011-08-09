<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Skins.Attributes" CodeFile="Attributes.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<div class="dnnForm dnnEditSkins dnnClear" id="dnnEditSkins">
    <fieldset>
        <legend></legend>
        <div class="dnnFormItem">
            <dnn:label id="plSkin" runat="server" controlname="cboSkins" />
             <asp:DropDownList ID="cboSkins" runat="server" AutoPostBack="True" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plContainer" runat="server" controlname="cboContainers" />
            <asp:DropDownList ID="cboContainers" runat="server" AutoPostBack="True" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plFile" runat="server" controlname="cboFiles" />
		    <asp:DropDownList ID="cboFiles" runat="server" AutoPostBack="True" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plToken" runat="server" controlname="cboTokens" />
		    <asp:DropDownList ID="cboTokens" runat="server" DataTextField="ControlKey" DataValueField="ControlSrc" AutoPostBack="True" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plSetting" runat="server" controlname="cboSettings" />
		    <asp:DropDownList ID="cboSettings" runat="server" AutoPostBack="True" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plValue" runat="server" controlname="cboValue" />
		    <asp:TextBox ID="txtValue" runat="server" Visible="false" />
		    <asp:DropDownList ID="cboValue" runat="server" Visible="false" />
		    <asp:Label ID="lblHelp" runat="server" />
        </div>
    </fieldset>
    <ul class="dnnActions dnnClear">
    	<li><asp:LinkButton id="cmdUpdate" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdUpdate" /></li>
    </ul>
</div>