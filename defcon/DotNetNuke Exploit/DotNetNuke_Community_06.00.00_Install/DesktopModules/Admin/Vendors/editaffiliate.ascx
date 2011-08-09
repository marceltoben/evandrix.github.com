<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Vendors.EditAffiliate" CodeFile="EditAffiliate.ascx.cs" %>
<div class="dnnForm dnnEditAffiliate dnnClear" id="dnnEditAffiliate">
    <fieldset>
        <div class="dnnFormItem dnnFormHelp dnnClear"><p class="dnnFormRequired"><span><%=Localization.GetString("RequiredFields", Localization.SharedResourceFile)%></span></p></div>
        <div class="dnnFormItem">
            <dnn:label id="plStartDate" runat="server" controlname="txtStartDate" />
			<asp:textbox id="txtStartDate" runat="server" columns="30" maxlength="11" />
			<asp:hyperlink id="cmdStartCalendar" resourcekey="Calendar" cssclass="dnnSecondaryAction" runat="server" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plEndDate" runat="server" controlname="txtEndDate" />
			<asp:textbox id="txtEndDate" runat="server" columns="30" maxlength="11" />
			<asp:hyperlink id="cmdEndCalendar" resourcekey="Calendar" cssclass="dnnSecondaryAction" runat="server" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plCPC" runat="server" controlname="txtCPC" />
			<asp:textbox id="txtCPC" runat="server" maxlength="7" columns="30" cssclass="dnnFormRequired" />
			<asp:requiredfieldvalidator id="valCPC1" resourcekey="CPC.ErrorMessage" runat="server" controltovalidate="txtCPC" display="Dynamic" cssclass="dnnFormMessage dnnFormError" />
			<asp:comparevalidator id="valCPC2" resourcekey="CPC.ErrorMessage" runat="server" controltovalidate="txtCPC" display="Dynamic" type="Double" operator="DataTypeCheck" cssclass="dnnFormMessage dnnFormError" />
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plCPA" runat="server" controlname="txtCPA" />
			<asp:textbox id="txtCPA" runat="server" maxlength="7" columns="30" cssclass="dnnFormRequired" />
			<asp:requiredfieldvalidator id="valCPA1" resourcekey="CPA.ErrorMessage" runat="server" controltovalidate="txtCPA" display="Dynamic" cssclass="dnnFormMessage dnnFormError" />
			<asp:comparevalidator id="valCPA2" resourcekey="CPA.ErrorMessage" runat="server" controltovalidate="txtCPA" display="Dynamic" type="Double" operator="DataTypeCheck" cssclass="dnnFormMessage dnnFormError" />
        </div>
    </fieldset>
    <ul class="dnnActions dnnClear">
    	<li><asp:LinkButton id="cmdUpdate" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdUpdate" /></li>
        <li><asp:LinkButton id="cmdDelete" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdDelete" Causesvalidation="False" /></li>
        <li><asp:LinkButton id="cmdCancel" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCancel" Causesvalidation="False" /></li>
        <li><asp:LinkButton id="cmdSend" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdSend" Causesvalidation="False" /></li>
    </ul>
</div>
<script language="javascript" type="text/javascript">
/*globals jQuery, window, Sys */
(function ($, Sys) {
    function setUpDnnEditAffiliate() {
        var yesText = '<%= Localization.GetString("Yes.Text", Localization.SharedResourceFile) %>';
        var noText = '<%= Localization.GetString("No.Text", Localization.SharedResourceFile) %>';
        var titleText = '<%= Localization.GetString("Confirm.Text", Localization.SharedResourceFile) %>';
        $('#<%= cmdDelete.ClientID %>').dnnConfirm({
            text: '<%= Localization.GetString("DeleteItem.Text", Localization.SharedResourceFile) %>',
            yesText: yesText,
            noText: noText,
            title: titleText
        });
    }
    $(document).ready(function () {
        setUpDnnEditAffiliate();
        Sys.WebForms.PageRequestManager.getInstance().add_endRequest(function () {
            setUpDnnEditAffiliate();
        });
    });
} (jQuery, window.Sys));
</script>