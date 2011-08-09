<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Portals.Signup" CodeFile="Signup.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="SectionHead" Src="~/controls/SectionHeadControl.ascx" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls"%>
<div class="dnnForm dnnPortalSignup dnnClear" id="dnnPortalSignup">
	<div class="dnnFormItem dnnFormHelp dnnClear"><p class="dnnFormRequired"><span><%=LocalizeString("RequiredFields")%></span></p></div>
    <h2 class="dnnFormSectionHead"><%=LocalizeString("PortalSetup")%></h2>
    <fieldset>
        <asp:label id="lblInstructions" runat="server" />
        <div class="dnnFormItem">
			<asp:label id="lblMessage" runat="server"></asp:label>
			<asp:datalist id="lstResults" runat="server" cellspacing="0" borderwidth="0" visible="False" width="100%">
				<headertemplate><asp:label id="lblValidationResults" runat="server" resourcekey="ValidationResults"/></headertemplate>
				<itemtemplate><%# Container.DataItem %></itemtemplate>
			</asp:datalist>
        </div>
        <div id="rowType" runat="server" class="dnnFormItem">
            <dnn:label id="plType" runat="server" controlname="optType"/>
            <asp:radiobuttonlist id="optType" CssClass="dnnFormRadioButtons" runat="server" RepeatDirection="Horizontal" RepeatLayout="Flow" AutoPostBack="True">
				<asp:listitem resourcekey="Parent" value="P" />
				<asp:listitem resourcekey="Child" value="C" />
			</asp:radiobuttonlist>
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plPortalAlias" runat="server" controlname="txtPortalName" />
            <asp:textbox id="txtPortalName" CssClass="dnnFormRequired" runat="server" maxlength="128" />
			<asp:requiredfieldvalidator id="valPortalName" resourcekey="valPortalName.ErrorMessage" CssClass="dnnFormMessage dnnFormError" runat="server" controltovalidate="txtPortalName" display="Dynamic" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plHomeDirectory" runat="server" controlname="txtHomeDirectory" />
            <asp:textbox id="txtHomeDirectory" runat="server"  maxlength="100" />
			<asp:LinkButton CausesValidation="False" ID="btnCustomizeHomeDir" Runat="server" resourcekey="Customize" CssClass="dnnSecondaryAction" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plTitle" runat="server" controlname="txtTitle" />
            <asp:textbox id="txtTitle" runat="server" maxlength="128" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plDescription" runat="server" controlname="txtDescription" />
            <asp:textbox id="txtDescription" runat="server" maxlength="500" textmode="MultiLine" rows="6" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plKeyWords" runat="server" controlname="txtKeyWords" />
            <asp:textbox id="txtKeyWords" runat="server"  maxlength="500" textmode="MultiLine" rows="6" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plTemplate" runat="server" controlname="cboTemplate" />
            <asp:dropdownlist id="cboTemplate" CssClass="dnnFormRequired" runat="server" AutoPostBack="True" />
			<asp:RequiredFieldValidator id="valTemplate" runat="server" Display="Dynamic" ControlToValidate="cboTemplate" CssClass="dnnFormMessage dnnFormError" InitialValue="-1" resourcekey="valTemplate.ErrorMessage" />
			<asp:Label id="lblTemplateDescription" runat="server" />
        </div>
    </fieldset>
    <h2 class="dnnFormSectionHead"><%=LocalizeString("SecuritySettings")%></h2>
    <fieldset>
        <div class="dnnFormMessage dnnFormWarning"><asp:label id="lblNote" resourcekey="Note" runat="server" /></div>
        <div class="dnnFormItem">
            <dnn:label id="plUsername" runat="server" controlname="txtUsername" />
            <asp:textbox id="txtUsername" CssClass="dnnFormRequired" runat="server" maxlength="100" />
			<asp:requiredfieldvalidator id="valUsername" resourcekey="valUsername.ErrorMessage" CssClass="dnnFormMessage dnnFormError" runat="server" controltovalidate="txtUsername" display="Dynamic" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plFirstName" runat="server" controlname="txtFirstName" />
            <asp:textbox id="txtFirstName" CssClass="dnnFormRequired" runat="server" maxlength="100" />
	        <asp:requiredfieldvalidator id="valFirstName" resourcekey="valFirstName.ErrorMessage" CssClass="dnnFormMessage dnnFormError" runat="server" controltovalidate="txtFirstName" display="Dynamic" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plLastName" runat="server" controlname="txtLastName" />
            <asp:textbox id="txtLastName" CssClass="dnnFormRequired" runat="server" maxlength="100" />
		    <asp:requiredfieldvalidator id="valLastName" CssClass="dnnFormMessage dnnFormError" runat="server" controltovalidate="txtLastName" resourcekey="valLastName.ErrorMessage" display="Dynamic" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plEmail" runat="server" controlname="txtEmail"></dnn:label>
            <asp:textbox id="txtEmail" CssClass="dnnFormRequired" runat="server" maxlength="100" />
			<asp:requiredfieldvalidator id="valEmail" resourcekey="valEmail.ErrorMessage" CssClass="dnnFormMessage dnnFormError" runat="server" controltovalidate="txtEmail" display="Dynamic" />
			<asp:RegularExpressionValidator ID="valEmail2" runat="server" resourcekey="valEmail2.ErrorMessage" CssClass="dnnFormMessage dnnFormError" ControlToValidate="txtEmail" Display="Dynamic" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plPassword" runat="server" controlname="txtPassword" />
            <asp:textbox id="txtPassword" CssClass="dnnFormRequired" runat="server" maxlength="20" textmode="password" />
		    <asp:requiredfieldvalidator id="valPassword" resourcekey="valPassword.ErrorMessage" CssClass="dnnFormMessage dnnFormError" runat="server" controltovalidate="txtPassword" display="Dynamic" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plConfirm" runat="server" controlname="txtConfirm" />
            <asp:textbox id="txtConfirm" CssClass="dnnFormRequired" runat="server" maxlength="20" textmode="password" />
	        <asp:requiredfieldvalidator id="valConfirm" resourcekey="valConfirm.ErrorMessage" CssClass="dnnFormMessage dnnFormError" runat="server" controltovalidate="txtConfirm" display="Dynamic" />
        </div>
        <div id="questionRow" runat="server" CssClass="dnnFormItem" visible="false">
            <dnn:label id="plQuestion" runat="server" controlname="lblQuestion" />
            <asp:textbox id="txtQuestion" runat="server" maxlength="100" />
        </div>
        <div id="answerRow" runat="server" CssClass="dnnFormItem" visible="false">
            <dnn:label id="plAnswer" runat="server" controlname="txtAnswer" />
            <asp:textbox id="txtAnswer" runat="server" />
        </div>
    </fieldset>
    <ul class="dnnActions dnnClear">
    	<li><asp:LinkButton id="cmdUpdate" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdUpdate" /></li>
        <li><asp:LinkButton id="cmdCancel" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCancel" Causesvalidation="False" /></li>
    </ul>
</div>