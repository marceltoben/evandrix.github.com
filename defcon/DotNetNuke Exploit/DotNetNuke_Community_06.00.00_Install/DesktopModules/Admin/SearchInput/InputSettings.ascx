<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.SearchInput.InputSettings" CodeFile="InputSettings.ascx.cs" %>
<div class="dnnInputSettings dnnClear">
    <div class="dnnFormItem">
        <dnn:label id="plModuleCombo" runat="server" controlname="cboModule" />
        <asp:label id="txtModule" runat="server" />
        <asp:dropdownlist id="cboModule" runat="server" />
    </div>
    <div class="dnnFormItem">
        <dnn:label id="plGoCheck" runat="server" controlname="chkGo" />
        <asp:CheckBox id="chkGo" runat="server" />
    </div>
    <div class="dnnFormItem">
        <dnn:label id="plSearchCheck" runat="server" controlname="chkSearchImage" />
        <asp:CheckBox id="chkSearchImage" runat="server" />
    </div>
</div>