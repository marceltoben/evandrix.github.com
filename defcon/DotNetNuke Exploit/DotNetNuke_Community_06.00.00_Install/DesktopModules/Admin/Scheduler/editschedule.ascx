<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Scheduler.EditSchedule" CodeFile="EditSchedule.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls"%>
<div class="dnnForm dnnEditSchedule dnnClear" id="dnnEditSchedule">
    <fieldset>
        <div class="dnnFormItem">
            <dnn:Label ID="plFriendlyName" runat="server" ControlName="txtFriendlyName" />
            <asp:TextBox ID="txtFriendlyName" runat="server" />
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="plType" runat="server" ControlName="txtType" />
            <asp:TextBox ID="txtType" runat="server" CssClass="dnnFormRequired" />
            <asp:RequiredFieldValidator ID="valType" runat="server" Display="Dynamic" EnableClientScript="true" ControlToValidate="txtType" CssClass="dnnFormMessage dnnFormError" resourcekey="TypeRequired" />
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="plEnabled" runat="server" ControlName="chkEnabled" />
            <asp:CheckBox ID="chkEnabled" runat="server" />
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="plTimeLapse" runat="server" ControlName="txtTimeLapse" />
            <asp:TextBox ID="txtTimeLapse" runat="server" MaxLength="10" />
            <asp:DropDownList ID="ddlTimeLapseMeasurement" runat="server">
                <asp:ListItem resourcekey="Seconds" Value="s" />
                <asp:ListItem resourcekey="Minutes" Value="m" />
                <asp:ListItem resourcekey="Hours" Value="h" />
                <asp:ListItem resourcekey="Days" Value="d" />
            </asp:DropDownList>
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="plRetryTimeLapse" runat="server" ControlName="txtRetryTimeLapse" />
            <asp:TextBox ID="txtRetryTimeLapse" runat="server" MaxLength="10" />
            <asp:DropDownList ID="ddlRetryTimeLapseMeasurement" runat="server">
               <asp:ListItem resourcekey="Seconds" Value="s" />
                <asp:ListItem resourcekey="Minutes" Value="m" />
                <asp:ListItem resourcekey="Hours" Value="h" />
                <asp:ListItem resourcekey="Days" Value="d" />
            </asp:DropDownList>
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="plRetainHistoryNum" runat="server" ControlName="ddlRetainHistoryNum" />
            <asp:DropDownList ID="ddlRetainHistoryNum" runat="server">
                <asp:ListItem Value="0" resourcekey="None" />
                <asp:ListItem Value="1">1</asp:ListItem>
                <asp:ListItem Value="5">5</asp:ListItem>
                <asp:ListItem Value="10">10</asp:ListItem>
                <asp:ListItem Value="25">25</asp:ListItem>
                <asp:ListItem Value="50">50</asp:ListItem>
                <asp:ListItem Value="100">100</asp:ListItem>
                <asp:ListItem Value="250">250</asp:ListItem>
                <asp:ListItem Value="500">500</asp:ListItem>
                <asp:ListItem Value="-1" resourcekey="All" />
            </asp:DropDownList>
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="plAttachToEvent" runat="server" ControlName="ddlAttachToEvent" />
            <asp:DropDownList ID="ddlAttachToEvent" runat="server" >
                <asp:ListItem resourcekey="None" Value="" />
                <asp:ListItem resourcekey="APPLICATION_START" Value="APPLICATION_START" />
            </asp:DropDownList>
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="plCatchUpEnabled" runat="server" ControlName="chkCatchUpEnabled" />
            <asp:CheckBox ID="chkCatchUpEnabled" runat="server" />
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="plObjectDependencies" runat="server" ControlName="txtObjectDependencies" />
            <asp:TextBox ID="txtObjectDependencies" runat="server" MaxLength="150" />
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="plServers" runat="server" ControlName="txtServers" />
            <asp:CheckBoxList ID="lstServers" runat="server" />
        </div>
    </fieldset>
    <ul class="dnnActions dnnClear">
    	<li><asp:LinkButton id="cmdUpdate" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdUpdate" /></li>
        <li><asp:LinkButton id="cmdRun" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdRun" Causesvalidation="False" /></li>
        <li><asp:LinkButton id="cmdDelete" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdDelete" Causesvalidation="False" /></li>
        <li><asp:HyperLink id="cmdCancel" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCancel" /></li>
    </ul>
</div>
<script type="text/javascript">
/*globals jQuery */
(function ($) {
	var yesText = '<%= Localization.GetString("Yes.Text", Localization.SharedResourceFile) %>';
	var noText = '<%= Localization.GetString("No.Text", Localization.SharedResourceFile) %>';
	var titleText = '<%= Localization.GetString("Confirm.Text", Localization.SharedResourceFile) %>';
	$('#<%= cmdDelete.ClientID %>').dnnConfirm({
		text: '<%= Localization.GetString("DeleteItem.Text", Localization.SharedResourceFile) %>',
		yesText: yesText,
		noText: noText,
		title: titleText
	});
} (jQuery));
</script>