<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Tabs.Import" CodeFile="Import.ascx.cs" %>
<%@ Register Assembly="DotnetNuke" Namespace="DotNetNuke.UI.WebControls" TagPrefix="dnn" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<div class="dnnForm dnnTabImport dnnClear" id="dnnTabImport">
    <div class="dnnFormItem">
        <dnn:label id="plFolder" runat="server" controlname="cboFolders" />
        <asp:DropDownList ID="cboFolders" Runat="server" AutoPostBack="true" />
    </div>
    <div class="dnnFormItem">
        <dnn:label id="plTemplate" runat="server" controlname="cboTemplate" />
        <asp:dropdownlist id="cboTemplate" runat="server" AutoPostBack="True" />
        <asp:RequiredFieldValidator id="valTemplate" runat="server" EnableClientScript="false" Display="Dynamic" ControlToValidate="cboTemplate" InitialValue="-1" resourcekey="valTemplate.ErrorMessage" CssClass="dnnFormMessage dnnFormError" />
        <asp:Label id="lblTemplateDescription" runat="server" />
    </div>
    <div class="dnnFormItem">
        <dnn:label id="plMode" runat="server" controlname="optMode" />
        <asp:radiobuttonlist id="optMode" runat="server" repeatdirection="Horizontal" repeatlayout="Flow" autopostback="True" CssClass="dnnTIRadioButtons">
			<asp:listitem value="ADD" resourcekey="ModeAdd" Selected="True" />
			<asp:listitem value="REPLACE" resourcekey="ModeReplace" />
		</asp:radiobuttonlist>
    </div>
    <div class="dnnFormItem" id="divTabName" runat="server" visible="false">
        <dnn:label id="plTabName" runat="server" controlname="txtTabName" />
        <asp:TextBox id="txtTabName" runat="server" maxlength="50" />
    </div>
    <div class="dnnFormItem" id="divParentTab" runat="server" visible="false">
        <dnn:Label ID="plParentTab" runat="server" ControlName="cboParentTab" />
        <asp:DropDownList ID="cboParentTab" runat="server" Width="300" DataTextField="IndentedTabName" DataValueField="TabId" />
    </div>
    <div class="dnnFormItem" id="divInsertPositionRow" runat="server">
        <dnn:Label ID="plInsertPosition" runat="server" ResourceKey="InsertPosition" ControlName="cboPositionTab" />
        <asp:RadioButtonList ID="rbInsertPosition" runat="server" RepeatDirection="Horizontal" AutoPostBack="true" CssClass="dnnTIRadioButtons" />
        <div class="dnnFormItem dnnClear">
            <asp:DropDownList ID="cboPositionTab" runat="server" DataTextField="LocalizedTabName" DataValueField="TabId" CssClass="dnnPositionInput" />
        </div>
    </div>
    <div class="dnnFormItem">
        <dnn:label id="plRedirect" runat="server" controlname="optRedirect" />
        <asp:radiobuttonlist id="optRedirect" runat="server" repeatdirection="Horizontal" repeatlayout="Flow" CssClass="dnnTIRadioButtons">
			<asp:listitem value="VIEW" resourcekey="ModeView" Selected="True" />
			<asp:listitem value="SETTINGS" resourcekey="ModeSettings" />
		</asp:radiobuttonlist>
    </div>
    <ul class="dnnActions dnnClear">
        <li><asp:LinkButton id="cmdImport" resourcekey="cmdImport" runat="server" cssclass="dnnPrimaryAction" /></li>
        <li><asp:HyperLink id="cmdCancel" resourcekey="cmdCancel" runat="server" cssclass="dnnSecondaryAction" /></li>
    </ul>
</div>