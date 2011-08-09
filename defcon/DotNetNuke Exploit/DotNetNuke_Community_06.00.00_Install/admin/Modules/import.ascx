<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Modules.Import" CodeFile="Import.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register Assembly="DotnetNuke" Namespace="DotNetNuke.UI.WebControls" TagPrefix="dnn" %>
<div class="dnnForm dnnImport dnnClear">
    <fieldset>
		<div class="dnnFormItem">
            <dnn:label id="plFolder" runat="server" controlname="cboFolders" suffix=":" />
            <asp:DropDownList ID="cboFolders" Runat="server" AutoPostBack="true" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plFile" runat="server" controlname="cboFiles" suffix=":" />
            <asp:DropDownList ID="cboFiles" Runat="server" />
        </div>
    </fieldset>
    <ul class="dnnActions dnnClear">
        <li><asp:LinkButton id="cmdImport" resourcekey="cmdImport" runat="server" cssclass="dnnPrimaryAction" /></li>
        <li><asp:HyperLink id="cmdCancel" resourcekey="cmdCancel" runat="server" cssclass="dnnSecondaryAction" causesvalidation="False" /></li>
    </ul>
</div>