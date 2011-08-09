<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Portals.Template" CodeFile="Template.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<div class="dnnForm dnnExportPortal dnnClear" id="dnnExportPortal">
	<div class="dnnFormItem dnnFormHelp dnnClear"><p class="dnnFormRequired"><span><%=LocalizeString("RequiredFields")%></span></p></div>
    <fieldset>
        <div class="dnnFormItem">
            <dnn:label id="plPortals" controlname="cboPortals" runat="server" />
            <asp:dropdownlist id="cboPortals" runat="server" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plTemplateName" controlname="txtTemplateName" runat="server" />
            <asp:textbox id="txtTemplateName" CssClass="dnnFormRequired" runat="server" enableviewstate="False" />
			<asp:requiredfieldvalidator id="valFileName" runat="server" controltovalidate="txtTemplateName" CssClass="dnnFormMessage dnnFormError" display="Dynamic" resourcekey="valFileName.ErrorMessage" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plDescription" controlname="txtDescription" runat="server" />
            <asp:textbox id="txtDescription" runat="server" CssClass="dnnFormRequired" enableviewstate="False" TextMode="MultiLine" Rows="10" />
			<asp:requiredfieldvalidator id="valDescription" runat="server" controltovalidate="txtDescription" display="Dynamic" CssClass="dnnFormMessage dnnFormError" resourcekey="valDescription.ErrorMessage" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plContent" runat="server" controlname="chkContent" />
            <asp:CheckBox id="chkContent" runat="server" />
        </div>
    </fieldset>
    <ul class="dnnActions dnnClear">
    	<li><asp:LinkButton id="cmdExport" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdExport" /></li>
        <li><asp:LinkButton id="cmdCancel" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCancel" Causesvalidation="False" /></li>
    </ul>
</div>