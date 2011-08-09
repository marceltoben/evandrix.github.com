<%@ Control Language="C#" AutoEventWireup="false" CodeFile="SitemapSettings.ascx.cs" Inherits="DotNetNuke.Modules.Admin.Sitemap.SitemapSettings" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<div class="dnnForm dnnSiteMap dnnClear" id="dnnSiteMap">
	<div class="dnnFormExpandContent"><a href=""><%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%></a></div>
	<fieldset>
		<div class="dnnFormItem">
			<dnn:Label ID="lblSiteMap" runat="server" ControlName="txtSiteMap" />
			<asp:HyperLink ID="lnkSiteMapUrl" runat="server" Target="_blank" />
		</div>
		<div class="dnnFormItem">
		</div>
		<dnn:DnnGrid ID="grdProviders" runat="Server" Width="100%" AutoGenerateColumns="false" AllowSorting="true">
			<MasterTableView EditMode="InPlace">
				<Columns>
					<dnn:DnnGridEditColumn HeaderStyle-Width="0" ButtonType="ImageButton" EditImageUrl="~/images/edit.gif" CancelImageUrl="~/images/cancel.gif" UpdateImageUrl="~/images/save.gif" />
					<dnn:DnnGridBoundColumn DataField="Name" HeaderText="Name" ReadOnly="true" />
					<dnn:DnnGridBoundColumn DataField="Description" HeaderText="Description" ReadOnly="true"  />
					<dnn:DnnGridCheckBoxColumn DataField="OverridePriority" HeaderText="OverridePriority" HeaderStyle-Width="0"/>
					<dnn:DnnGridBoundColumn DataField="Priority" HeaderText="Priority" HeaderStyle-Width="0" />
					<dnn:DnnGridCheckBoxColumn DataField="Enabled" HeaderText="Enabled" HeaderStyle-Width="0" />
				</Columns>
			</MasterTableView>
		</dnn:DnnGrid>
	</fieldset>
	<h2 id="dnnSiteMap-SectionCoreSettings" class="dnnFormSectionHead"><a href="" class="dnnSectionExpanded"><%=LocalizeString("SectionCoreSettings")%></a></h2>
	<fieldset>
		<legend></legend>
		<div class="dnnFormItem">
			<asp:Label ID="lblSectionCoreSettingsHelp" runat="server" ResourceKey="SectionCoreSettingsLbl" EnableViewState="False" />
		</div>
		<div class="dnnFormItem">
			<dnn:Label ID="lblLevelPriority" runat="server" ControlName="chkLevelPriority" />
			<asp:CheckBox ID="chkLevelPriority" runat="server" />
		</div>
		<div class="dnnFormItem">
			<dnn:Label ID="lblMinPagePriority" runat="server" ControlName="txtMinPagePriority" />
			<dnn:DnnTextBox ID="txtMinPagePriority" runat="server" CssClass="dnnFormRequired" MaxLength="10"/>
			<asp:CompareValidator ID="val1" runat="server" ControlToValidate="txtMinPagePriority" Display="Dynamic" CssClass="dnnFormMessage dnnFormError" resourcekey="valPriority" Operator="DataTypeCheck" Type="Double"/>
			<asp:RequiredFieldValidator ID="val2" runat="server" ControlToValidate="txtMinPagePriority" Display="Dynamic" CssClass="dnnFormMessage dnnFormError" resourcekey="valPriority"/>
		</div>
		<div class="dnnFormItem">
			<dnn:Label ID="lblIncludeHidden" runat="server" ControlName="chkIncludeHidden" />
			<asp:CheckBox ID="chkIncludeHidden" runat="server" />
		</div>
	</fieldset>
	<h2 id="dnnSiteMap-SectionGeneralSettings" class="dnnFormSectionHead"><a href="" class="dnnSectionExpanded"><%=LocalizeString("SectionGeneralSettings")%></a></h2>
	<fieldset>
		<legend></legend>
		<div class="dnnFormItem">
			<asp:Label ID="lblSectionGeneralSettingsHelp" runat="server" ResourceKey="SectionGeneralSettingsLbl" EnableViewState="False" />
		</div>
		<div class="dnnFormItem">
			<dnn:Label ID="lblExcludePriority" runat="server" ControlName="txtExcludePriority" />
			<dnn:DnnTextBox ID="txtExcludePriority" runat="server" MaxLength="10" Text="0" CssClass="dnnFormRequired" />
			<asp:CompareValidator ID="CompareValidator1" runat="server" ControlToValidate="txtExcludePriority" Display="Dynamic" CssClass="dnnFormMessage dnnFormError" resourcekey="valPriority" Operator="DataTypeCheck" Type="Double"/>
			<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="txtExcludePriority" Display="Dynamic" CssClass="dnnFormMessage dnnFormError" resourcekey="valPriority"/>
		</div>
		<div class="dnnFormItem">
			<dnn:Label ID="lblCache" runat="server" ControlName="chkCache" />
			<asp:DropDownList ID="cmbDaysToCache" runat="server">
				<Items>
					<asp:ListItem ResourceKey="DisableCaching" />
					<asp:ListItem ResourceKey="1Day" />
					<asp:ListItem ResourceKey="2Days" />
					<asp:ListItem ResourceKey="3Days" />
					<asp:ListItem ResourceKey="4Days" />
					<asp:ListItem ResourceKey="5Days" />
					<asp:ListItem ResourceKey="6Days" />
					<asp:ListItem ResourceKey="7Days" />
				</Items>
			</asp:DropDownList>
			<asp:LinkButton ID="lnkResetCache" runat="server" CssClass="dnnSecondaryAction" resourcekey="lnkResetCache" Text="ResetCache"/>
		</div>
	</fieldset>
	<h2 id="dnnSiteMap-SectionSubmissionSettings" class="dnnFormSectionHead"><a href="" class="dnnSectionExpanded"><%=LocalizeString("SectionSubmissionSettings")%></a></h2>
	<fieldset>
		<legend></legend>
		<div class="dnnFormItem">
			<asp:Label ID="lblSectionSubmissionSettings" runat="server" ResourceKey="SectionSubmissionSettingsLbl" EnableViewState="False" />
		</div>
		<div class="dnnFormItem">
			<dnn:Label ID="lblSearchEngine" runat="server" ControlName="cboSearchEngine" />
			 <asp:DropDownList ID="cboSearchEngine" runat="server" AutoPostBack="true">
				<Items>
					<asp:ListItem Text="Google" />
					<asp:ListItem Text="Bing" />
					<asp:ListItem Text="Yahoo!" />
				</Items>
			</asp:DropDownList>
			<asp:HyperLink ID="cmdSubmitSitemap" runat="server" Target="_blank" CssClass="dnnSecondaryAction" ResourceKey="cmdSubmitToSearch" />
	   </div>
		<div class="dnnFormItem">
			<dnn:Label ID="lblVerification" runat="server" ControlName="txtVerification" />
			<dnn:DnnTextBox ID="txtVerification" runat="server" />
			<asp:LinkButton CssClass="dnnSecondaryAction" ID="cmdVerification" resourcekey="cmdVerification" runat="server" />
	   </div>
	</fieldset>
	<ul class="dnnActions dnnClear">
		<li><asp:LinkButton id="lnkSaveAll" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdSaveAll" /></li>
		<li><asp:LinkButton id="lnkRefresh" runat="server" CssClass="dnnSecondaryAction " resourcekey="cmdRefresh" /></li>
	</ul>
</div>
<script language="javascript" type="text/javascript">
	/*globals jQuery, window, Sys */
	(function ($, Sys) {
		$(document).ready(function () {
			function setUpSitemapSettings() {
			    $('#dnnSiteMap').dnnPanels()
				.find('.dnnFormExpandContent a').dnnExpandAll({
					expandText: '<%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%>',
					collapseText: '<%=Localization.GetString("CollapseAll", Localization.SharedResourceFile)%>',
					targetArea: '#dnnSiteMap'
				});
			}

			setUpSitemapSettings();
			Sys.WebForms.PageRequestManager.getInstance().add_endRequest(function () {
				setUpSitemapSettings();
			});
		});
	} (jQuery, window.Sys));
</script>