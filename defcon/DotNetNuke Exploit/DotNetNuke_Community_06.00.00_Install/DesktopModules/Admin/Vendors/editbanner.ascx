<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Vendors.EditBanner" CodeFile="EditBanner.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="URL" Src="~/controls/URLControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="Audit" Src="~/controls/ModuleAuditControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.WebControls" Namespace="DotNetNuke.UI.WebControls" %>
<div class="dnnForm dnnEditBanner dnnClear" id="dnnEditBanner">
	<fieldset>
		<div class="dnnFormItem dnnFormHelp dnnClear"><p class="dnnFormRequired"><span><%=Localization.GetString("RequiredFields", Localization.SharedResourceFile)%></span></p></div>
		<div id="bannersRow" runat="server" Visible="false" class="dnnFormItem">
			<asp:DataList id="lstBanners" runat="server" CellPadding="0" Width="100%" EnableViewState="true">
				<itemstyle horizontalalign="Center" />
				<itemtemplate>
					<asp:Label ID="lblItem" Runat="server" Text='<%# FormatItem((int)DataBinder.Eval(Container.DataItem,"VendorId"), (int)DataBinder.Eval(Container.DataItem,"BannerId"), (int)DataBinder.Eval(Container.DataItem,"BannerTypeId"),DataBinder.Eval(Container.DataItem,"BannerName").ToString(),DataBinder.Eval(Container.DataItem,"ImageFile").ToString(),DataBinder.Eval(Container.DataItem,"Description").ToString(),DataBinder.Eval(Container.DataItem,"Url").ToString(), (int)DataBinder.Eval(Container.DataItem,"Width"), (int)DataBinder.Eval(Container.DataItem,"Height")) %>'>
					</asp:Label>
				</ItemTemplate>
			</asp:DataList>
		</div>
		<div class="dnnFormItem">
			<dnn:Label id="plBannerName" runat="server" controlname="txtBannerName" />
			<asp:textbox id="txtBannerName" runat="server" maxlength="100" Columns="30" cssclass="dnnFormRequired" />
			<asp:requiredfieldValidator id="valBannerName" resourcekey="BannerName.ErrorMessage" runat="server" ControlToValidate="txtBannerName" Display="Dynamic" CssClass="dnnFormMessage dnnFormError"/>
		</div>
		<div class="dnnFormItem">
			<dnn:Label id="plBannerType" runat="server" controlname="cboBannerType" />
			<asp:DropDownList id="cboBannerType" DataTextField="BannerTypeName" DataValueField="BannerTypeId" runat="server" />
		</div>
		<div class="dnnFormItem">
			<dnn:Label id="plBannerGroup" runat="server" controlname="txtBannerGroup"/>
			<dnn:DNNTextSuggest id="DNNTxtBannerGroup" runat="server" Columns="30" LookupDelay="500" MaxLength="100" Width="300px" TextSuggestCssClass="SuggestTextMenu GroupSuggestMenu" DefaultNodeCssClassOver="SuggestNodeOver" />
		</div>
		<div class="dnnFormItem">
			<dnn:Label id="plImage" runat="server" controlname="ctlImage" />
			<div class="dnnLeft"><dnn:url id="ctlImage" runat="server" width="250" Required="False" ShowFiles="True" ShowTabs="False" ShowUrls="True" ShowTrack="False" ShowLog="False" UrlType="F" /></div>
		</div>
		<div class="dnnFormItem">
			<dnn:Label id="plWidth" runat="server" controlname="txtWidth" />
			<asp:textbox id="txtWidth" runat="server" maxlength="100" Columns="30" />
		</div>        
		<div class="dnnFormItem">
			<dnn:Label id="plHeight" runat="server" controlname="txtHeight" />
			<asp:textbox id="txtHeight" runat="server" maxlength="100" Columns="30" />
		</div>        
		<div class="dnnFormItem">
			<dnn:Label id="plDescription" runat="server" controlname="txtDescription" />
			<asp:textbox id="txtDescription" runat="server" maxlength="2000" Columns="30" TextMode="MultiLine" Rows="5" />
		</div>    
		<div class="dnnFormItem">
			<dnn:Label id="plURL" runat="server" controlname="ctlURL" />
			<div class="dnnLeft"><dnn:url id="ctlURL" runat="server" Required="False" ShowFiles="True" ShowTabs="True" ShowUrls="True" ShowTrack="False" ShowLog="False" UrlType="U" /></div>
	   </div>    
		<div class="dnnFormItem">
			<dnn:Label id="plCPM" runat="server" controlname="txtCPM" />
			<asp:TextBox id="txtCPM" runat="server" maxlength="7" Columns="30" cssclass="dnnFormRequired" />
			<asp:requiredfieldValidator id="valCPM" runat="server" resourcekey="CPM.ErrorMessage" ControlToValidate="txtCPM" Display="Dynamic" CssClass="dnnFormMessage dnnFormError" />
			<asp:compareValidator id="compareCPM" runat="server" resourcekey="CPM.ErrorMessage" ControlToValidate="txtCPM" Display="Dynamic" Type="Currency" Operator="DataTypeCheck"
				CssClass="dnnFormMessage dnnFormError" />
		</div>    
		<div class="dnnFormItem">
			<dnn:Label id="plImpressions" runat="server" controlname="txtImpressions"/>
			<asp:TextBox id="txtImpressions" runat="server" maxlength="10" Columns="30" cssclass="dnnFormRequired"/>
			<asp:requiredfieldValidator id="valImpressions" resourcekey="Impressions.ErrorMessage" runat="server" ControlToValidate="txtImpressions" Display="Dynamic" CssClass="dnnFormMessage dnnFormError" />
			<asp:compareValidator id="compareImpressions" resourcekey="Impressions.ErrorMessage" runat="server" Display="Dynamic" ControlToValidate="txtImpressions" Operator="DataTypeCheck" Type="Integer" CssClass="dnnFormMessage dnnFormError" />
		</div>    
		<div class="dnnFormItem">
			<dnn:Label id="plStartDate" runat="server" controlname="txtStartDate" />
			<asp:TextBox id="txtStartDate" runat="server" Columns="30" maxlength="11" />
			<asp:hyperlink id="cmdStartCalendar" resourcekey="Calendar" CssClass="dnnSecondaryAction" Runat="server" />
		</div>    
		<div class="dnnFormItem">
			<dnn:Label id="plEndDate" runat="server" controlname="txtEndDate" />
			<asp:TextBox id="txtEndDate" runat="server" Columns="30" maxlength="11" />
			<asp:hyperlink id="cmdEndCalendar" resourcekey="Calendar" CssClass="dnnSecondaryAction" Runat="server" />
		</div>    
		<div class="dnnFormItem">
			<dnn:Label id="plCriteria" runat="server" controlname="optCriteria" />
			<asp:RadioButtonList id="optCriteria" runat="server" RepeatDirection="Horizontal" CssClass="dnnFormRadioButtons">
				<asp:ListItem Value="1" ResourceKey="or" />
				<asp:ListItem Value="0" ResourceKey="and" />
			</asp:RadioButtonList>
		</div>    
	</fieldset>
	<ul class="dnnActions dnnClear">
		<li><asp:LinkButton id="cmdUpdate" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdUpdate" /></li>
		<li><asp:LinkButton id="cmdDelete" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdDelete" Causesvalidation="False" /></li>
		<li><asp:LinkButton id="cmdCancel" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCancel" Causesvalidation="False" /></li>
		<li><asp:LinkButton id="cmdCopy" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCopy" Causesvalidation="False" /></li>
		<li><asp:LinkButton id="cmdEmail" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdEmail" Causesvalidation="False" /></li>
	</ul>
	<div class="dnnssStat dnnClear">
		<dnn:audit id="ctlAudit" runat="server" />
	</div>
</div>
<script language="javascript" type="text/javascript">
/*globals jQuery, window, Sys */
(function ($, Sys) {
	function setUpDnnEditBanner() {
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
		setUpDnnEditBanner();
		Sys.WebForms.PageRequestManager.getInstance().add_endRequest(function () {
			setUpDnnEditBanner();
		});
	});
} (jQuery, window.Sys));
</script>