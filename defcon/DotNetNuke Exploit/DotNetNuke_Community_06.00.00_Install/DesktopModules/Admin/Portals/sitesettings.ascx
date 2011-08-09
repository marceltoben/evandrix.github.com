<%@ Control Inherits="DotNetNuke.Modules.Admin.Portals.SiteSettings" Language="C#" AutoEventWireup="false" EnableViewState="True" CodeFile="SiteSettings.ascx.cs" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="PortalAliases" Src="~/DesktopModules/Admin/Portals/PortalAliases.ascx" %>
<%@ Register TagPrefix="dnn" TagName="Audit" Src="~/controls/ModuleAuditControl.ascx" %>
<div class="dnnForm dnnSiteSettings dnnClear" id="dnnSiteSettings">
	<ul class="dnnAdminTabNav dnnClear">
		<li><a href="#ssBasicSettings"><%=LocalizeString("BasicSettings") %></a></li>
		<li><a href="#ssAdvancedSettings"><%=LocalizeString("AdvancedSettings") %></a></li>
		<li><a href="#ssStylesheetEditor"><%=LocalizeString("StylesheetEditor")%></a></li>
	</ul>
	<div class="ssBasicSettings dnnClear" id="ssBasicSettings">
		<div class="dnnFormExpandContent"><a href=""><%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%></a></div>
		<div class="dnnFormItem dnnFormHelp dnnClear"><p class="dnnFormRequired"><span><%=LocalizeString("RequiredFields")%></span></p></div>
		<div class="ssbsContent dnnClear">
			<h2 id="dnnSitePanel-SiteDetails" class="dnnFormSectionHead"><a href="" class="dnnSectionExpanded"><%=LocalizeString("SiteDetails")%></a></h2>
			<fieldset>
				<div class="dnnFormItem">
					<dnn:Label ID="plPortalName" runat="server" ControlName="txtPortalName" />
					<asp:TextBox ID="txtPortalName" CssClass="dnnFormRequired" runat="server" MaxLength="128" />
					<asp:RequiredFieldValidator ID="valPortalName" CssClass="dnnFormMessage dnnFormError" runat="server" resourcekey="valPortalName.ErrorMessage" Display="Dynamic" ControlToValidate="txtPortalName" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plDescription" runat="server" ControlName="txtDescription" />
					<asp:TextBox ID="txtDescription" runat="server" TextMode="MultiLine" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plKeyWords" runat="server" ControlName="txtKeyWords" />
					<asp:TextBox ID="txtKeyWords" runat="server" TextMode="MultiLine" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plFooterText" runat="server" ControlName="txtFooterText" />
					<asp:TextBox ID="txtFooterText" runat="server" />
				</div>
				<div class="dnnFormItem">
					<dnn:label id="plGUID" controlname="lblGUID" runat="server" />
					<asp:Label ID="lblGUID" Runat="server" />
				</div>
			</fieldset>
			<h2 id="dnnSitePanel-Marketing" class="dnnFormSectionHead"><a href=""><%=LocalizeString("Marketing")%></a></h2>
			<fieldset>
				<div class="dnnFormItem">
					<dnn:Label ID="plSearchEngine" runat="server" ControlName="cboSearchEngine" />
					<asp:DropDownList ID="cboSearchEngine" runat="server" DataTextField="Key" DataValueField="Value" />
					<a href="#" id="submitToSearchEngine" class="dnnSecondaryAction"><%=LocalizeString("Submit")%></a>
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plSiteMap" runat="server" ControlName="txtSiteMap" />
					<asp:TextBox ID="txtSiteMap" runat="server" ReadOnly="true" />
					<a href="http://www.google.com/webmasters/sitemaps/" target="_blank" class="dnnSecondaryAction" ><%=LocalizeString("Submit")%></a>
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plVerification" runat="server" ControlName="txtVerification" />
					<asp:TextBox ID="txtVerification" runat="server" />
					<asp:LinkButton ID="cmdVerification" resourcekey="cmdVerification" runat="server" CssClass="dnnSecondaryAction" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plBanners" runat="server" ControlName="optBanners" />
					<asp:RadioButtonList ID="optBanners" CssClass="dnnFormRadioButtons" runat="server" EnableViewState="False" RepeatDirection="Horizontal">
						<asp:ListItem Value="0" resourcekey="None">None</asp:ListItem>
						<asp:ListItem Value="1" resourcekey="Site">Site</asp:ListItem>
						<asp:ListItem Value="2" resourcekey="Host">Host</asp:ListItem>
					</asp:RadioButtonList>
					<asp:Label ID="lblBanners" runat="server" resourcekey="lblBanners" />
				</div>
			</fieldset>
			<h2 id="dnnSitePanel-Appearance" class="dnnFormSectionHead"><a href=""><%=LocalizeString("Appearance")%></a></h2>
			<fieldset class="ssbsPortalAppearance">
				<div class="dnnFormItem">
					<dnn:Label ID="plLogo" runat="server" ControlName="ctlLogo" />
					<dnn:DnnFilePicker ID="ctlLogo" runat="server" Required="False" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plBackground" runat="server" ControlName="cboBackground" />
					<dnn:DnnFilePicker ID="ctlBackground" runat="server" Required="False" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plFavIcon" runat="server" ControlName="ctlFavIcon" />
					<dnn:DnnFilePicker ID="ctlFavIcon" runat="server" Required="False" FileFilter="ico"/>
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plSkinWidgestEnabled" runat="server" ControlName="chkSkinWidgestEnabled" />
					<asp:CheckBox ID="chkSkinWidgestEnabled" runat="server" />
				</div>
				<div id="siteSkinSettings">
					<div class="dnnFormItem">
						<dnn:Label ID="plPortalSkin" ControlName="portalSkinCombo" runat="server" />
						<asp:DropDownList ID="portalSkinCombo" runat="Server" Width="300px" DataTextField="Key" DataValueField ="Value" />
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plPortalContainer" ControlName="portalContainerCombo" runat="server" />
						<asp:DropDownList ID="portalContainerCombo" runat="Server" Width="300px" DataTextField="Key" DataValueField ="Value" />
						<a href="#" class="dnnSecondaryAction"><%=LocalizeString("SkinPreview")%></a>
					</div>
				</div>
				<div id="editSkinSettings">
					<div class="dnnFormItem">
						<dnn:Label ID="plAdminSkin" ControlName="editSkinCombo" runat="server" />
						<asp:DropDownList ID="editSkinCombo" runat="Server" Width="300px" DataTextField="Key" DataValueField ="Value" />
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plAdminContainer" ControlName="editContainerCombo" runat="server" />
						<asp:DropDownList ID="editContainerCombo" runat="Server" Width="300px" DataTextField="Key" DataValueField ="Value" />
						<a href="#" class="dnnSecondaryAction"><%=LocalizeString("EditSkinPreview")%></a>
					</div>
				</div>
			</fieldset>
		</div>
	</div>
	<div class="ssAdvancedSettings dnnClear" id="ssAdvancedSettings">
		<div class="dnnFormExpandContent"><a href=""><%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%></a></div>
		<div class="ssasContent">
			<h2 id="dnnSitePanel-Pages" class="dnnFormSectionHead"><a href="" class="dnnSectionExpanded"><%=LocalizeString("Pages")%></a></h2>
			<fieldset>
				<div class="dnnFormItem">
					<dnn:Label ID="plSplashTabId" runat="server" ControlName="cboSplashTabId" />
					<asp:DropDownList ID="cboSplashTabId" runat="server" DataTextField="IndentedTabName" DataValueField="TabId" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plHomeTabId" runat="server" ControlName="cboHomeTabId" />
					<asp:DropDownList ID="cboHomeTabId" runat="server" DataTextField="IndentedTabName" DataValueField="TabId" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plLoginTabId" runat="server" ControlName="cboLoginTabId" />
					<asp:DropDownList ID="cboLoginTabId" runat="server" DataTextField="IndentedTabName" DataValueField="TabId" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plRegisterTabId" runat="server" ControlName="cboRegisterTabId" />
					<asp:DropDownList ID="cboRegisterTabId" runat="server" DataTextField="IndentedTabName" DataValueField="TabId" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plUserTabId" runat="server" ControlName="cboUserTabId" />
					<asp:DropDownList ID="cboUserTabId" runat="server" DataTextField="IndentedTabName" DataValueField="TabId" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plSearchTabId" runat="server" ControlName="cboSearchTabId" />
					<asp:DropDownList ID="cboSearchTabId" runat="server" DataTextField="IndentedTabName" DataValueField="TabId" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plHomeDirectory" runat="server" ControlName="lblHomeDirectory" />
					<asp:Label ID="lblHomeDirectory" runat="server" />
				</div>
			</fieldset>        
			<h2 id="dnnSitePanel-SecuritySettings" class="dnnFormSectionHead"><a href=""><%=LocalizeString("SecuritySettings")%></a></h2>
			<fieldset class="ssasSecuritySettings">
				<div class="dnnFormItem">
					<dnn:Label ID="plUserRegistration" runat="server" ControlName="optUserRegistration" />
					<asp:RadioButtonList ID="optUserRegistration" CssClass="dnnFormRadioButtons" runat="server" EnableViewState="False" RepeatDirection="Horizontal">
						<asp:ListItem Value="0" resourcekey="None" />
						<asp:ListItem Value="1" resourcekey="Private" />
						<asp:ListItem Value="2" resourcekey="Public" />
						<asp:ListItem Value="3" resourcekey="Verified" />
					</asp:RadioButtonList>
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plAdministrator" runat="server" ControlName="cboAdministratorId" />
					<asp:DropDownList ID="cboAdministratorId" runat="server" DataTextField="FullName" DataValueField="UserId" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plTimeZone" runat="server" ControlName="cboTimeZone" />
					<dnn:DnnTimeZoneComboBox ID="cboTimeZone" runat="server" />
				</div>
			</fieldset>
			<h2 id="dnnSitePanel-Payment" class="dnnFormSectionHead"><a href=""><%=LocalizeString("Payment")%></a></h2>
			<fieldset>
				<div class="dnnFormItem">
					<dnn:Label ID="plCurrency" runat="server" ControlName="currencyCombo" />
					<asp:DropDownList ID="currencyCombo" runat="server" DataTextField="text" DataValueField="value" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plProcessor" ControlName="processorCombo" runat="server" />
					<asp:DropDownList ID="processorCombo" DataTextField="value" DataValueField="text"  runat="server" />
					<asp:Hyperlink ID="processorLink" Target="new" CssClass="dnnSecondaryAction" ResourceKey="ProcessorWebSite" runat="server"/>
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plUserId" runat="server" ControlName="txtUserId" />
					<asp:TextBox ID="txtUserId" runat="server" MaxLength="50" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plPassword" runat="server" ControlName="txtPassword" />
					<asp:TextBox ID="txtPassword" runat="server" MaxLength="50" TextMode="Password" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plPayPaylReturnURL" runat="server" ControlName="txtPayPaylReturnURL" />
					<asp:TextBox ID="txtPayPalReturnURL" runat="server" MaxLength="255" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plPayPaylCancelURL" runat="server" ControlName="txtPayPaylCancelURL" />
					<asp:TextBox ID="txtPayPalCancelURL" runat="server" MaxLength="255" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plPayPalSandboxEnabled" runat="server" ControlName="chkPayPalSandboxEnabled" />
					<asp:CheckBox ID="chkPayPalSandboxEnabled" runat="server" />
				</div>
			</fieldset>
			<h2 id="dnnSitePanel-Usability" class="dnnFormSectionHead"><a href=""><%=LocalizeString("Usability")%></a></h2>
			<fieldset class="ssasUsabilitySettings">
				<div class="dnnFormItem">
					<dnn:Label ID="enablePopUpsLabel" runat="server" ControlName="enablePopUpsCheckBox" />
					<asp:CheckBox ID="enablePopUpsCheckBox" runat="server" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plInlineEditor" runat="server" ControlName="chkInlineEditor" />
					<asp:CheckBox ID="chkInlineEditor" runat="server" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plHideSystemFolders" runat="server" ControlName="chkHideSystemFolders" />
					<asp:CheckBox ID="chkHideSystemFolders" runat="server" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plControlPanelMode" runat="server" ControlName="optControlPanelMode" />
					<asp:radiobuttonlist id="optControlPanelMode" runat="server" RepeatDirection="Horizontal" CssClass="dnnFormRadioButtons">
						<asp:listitem value="VIEW" resourcekey="ControlPanelModeView" />
						<asp:listitem value="EDIT" resourcekey="ControlPanelModeEdit" />
					</asp:radiobuttonlist>
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plControlPanelVisibility" runat="server" ControlName="optControlPanelVisibility" />
					<asp:radiobuttonlist id="optControlPanelVisibility" runat="server" RepeatDirection="Horizontal" CssClass="dnnFormRadioButtons">
						<asp:listitem value="MIN" resourcekey="ControlPanelVisibilityMinimized" />
						<asp:listitem value="MAX" resourcekey="ControlPanelVisibilityMaximized" />
					</asp:radiobuttonlist>
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plControlPanelSecurity" runat="server" ControlName="optControlPanelSecurity" />
					<asp:radiobuttonlist id="optControlPanelSecurity" runat="server" RepeatLayout="Flow" CssClass="dnnFormRadioButtons">
						<asp:listitem value="TAB" resourcekey="ControlPanelSecurityTab" />
						<asp:listitem value="MODULE" resourcekey="ControlPanelSecurityModule" />
					</asp:radiobuttonlist>
				</div>
			</fieldset>
			<div id="hostSections" runat="server">
				<h2 id="dnnSitePanel-PortalAliases" class="dnnFormSectionHead"><a href=""><%=LocalizeString("PortalAliases")%></a></h2>
				<fieldset class="ssasPortalAlias">
					<div class="dnnFormItem">
						<dnn:Label ID="portalAliasModeButtonListLabel" runat="server" ControlName="portalAliasModeButtonList" />
						<asp:RadioButtonList ID="portalAliasModeButtonList" runat="server" EnableViewState="False" RepeatDirection="Horizontal" CssClass="dnnFormRadioButtons">
							<asp:ListItem Value="CANONICALURL" resourcekey="Canonical" />
							<asp:ListItem Value="REDIRECT" resourcekey="Redirect" />
							<asp:ListItem Value="NONE" resourcekey="None" />                        
						</asp:RadioButtonList>
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plAutoAddPortalAlias" runat="server" ControlName="chkAutoAddPortalAlias" />
						<asp:CheckBox ID="chkAutoAddPortalAlias" runat="server" />
					</div>
					<div id="defaultAliasRow" class="dnnFormItem" runat="server">
					  <dnn:Label ID="defaultAliasDropDownLabel" runat="server" ControlName="defaultAliasDropDown" />
						<asp:DropDownList ID="defaultAliasDropDown" runat="server" DataTextField="HTTPAlias" DataValueField="HTTPAlias" />
					</div>
					<div class="dnnFormItem"><dnn:PortalAliases id="portalAliases" runat="server" /></div>
				</fieldset>
				<h2 id="dnnSitePanel-SSLSettings" class="dnnFormSectionHead"><a href=""><%=LocalizeString("SSLSettings")%></a></h2>
				<fieldset>
					<div class="dnnFormItem">
						<dnn:Label ID="plSSLEnabled" runat="server" ControlName="chkSSLEnabled" />
						<asp:CheckBox ID="chkSSLEnabled" runat="server" />
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plSSLEnforced" runat="server" ControlName="chkSSLEnforced" />
						<asp:CheckBox ID="chkSSLEnforced" runat="server" />
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plSSLURL" runat="server" ControlName="txtSSLURL" />
						<asp:TextBox ID="txtSSLURL" runat="server" />
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plSTDURL" runat="server" ControlName="txtSTDURL" />
						<asp:TextBox ID="txtSTDURL" runat="server" />
					</div>
				</fieldset>
				<h2 id="dnnSitePanel-HostSettings" class="dnnFormSectionHead"><a href=""><%=LocalizeString("HostSettings")%></a></h2>
				<fieldset>
					<div class="dnnFormItem">
						<dnn:Label ID="plExpiryDate" runat="server" ControlName="txtExpiryDate" />
						<dnn:DnnDatePicker ID="datepickerExpiryDate" runat="server"/>
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plHostFee" runat="server" ControlName="txtHostFee" />
						<asp:textbox id="txtHostFee" runat="server" maxlength="10" />
						<asp:CompareValidator ID="valHostFee" runat="server" ControlToValidate="txtHostFee" CssClass="dnnFormMessage dnnFormError" Display="Dynamic" ResourceKey="valHostFee.Error" Operator="DataTypeCheck" Type="Currency" />
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plHostSpace" runat="server" ControlName="txtHostSpace" />
						<asp:TextBox ID="txtHostSpace" runat="server" MaxLength="6" />
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plPageQuota" runat="server" ControlName="txtPageQuota" />
						<asp:TextBox ID="txtPageQuota" runat="server" MaxLength="6" />
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plUserQuota" runat="server" ControlName="txtUserQuota" />
						<asp:TextBox ID="txtUserQuota" runat="server" MaxLength="6" />
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plSiteLogHistory" runat="server" ControlName="txtSiteLogHistory" />
						<asp:TextBox ID="txtSiteLogHistory" runat="server" MaxLength="3" />
					</div>
					<div class="dnnFormItem ssasPremiumModule">
						<dnn:Label ID="plDesktopModules" runat="server" ControlName="ctlDesktopModules" />
						<dnn:DualListBox id="ctlDesktopModules" runat="server" DataValueField="DesktopModuleID" DataTextField="FriendlyName" AddKey="AddModule" RemoveKey="RemoveModule" AddAllKey="AddAllModules" RemoveAllKey="RemoveAllModules" AddImageURL="~/images/rt.gif" AddAllImageURL="~/images/ffwd.gif" RemoveImageURL="~/images/lt.gif" RemoveAllImageURL="~/images/frev.gif" >
							<AvailableListBoxStyle Height="130px" Width="180px" />
							<HeaderStyle CssClass="dnnFormLabel" />
							<SelectedListBoxStyle Height="130px" Width="180px"  />
						</dnn:DualListBox>
					</div>
				</fieldset>
			</div>
		</div>	
	</div>
	<div class="ssStylesheetEditor dnnClear" id="ssStylesheetEditor">
		<div class="ssseContent dnnClear">
			<fieldset>
				<asp:TextBox ID="txtStyleSheet" runat="server" Rows="30" TextMode="MultiLine" Wrap="False" Columns="100" />
				<ul class="dnnActions dnnClear">
				  <li><asp:LinkButton ID="cmdSave" CssClass="dnnPrimaryAction" runat="server" resourcekey="SaveStyleSheet" EnableViewState="False" /></li>
				  <li><asp:LinkButton ID="cmdRestore" CssClass="dnnSecondaryAction" runat="server" resourcekey="RestoreDefaultStyleSheet" EnableViewState="False" /></li>
				</ul>
			</fieldset>
		</div>	
	</div>
	<ul class="dnnActions dnnClear">
		<li><asp:LinkButton id="cmdUpdate" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdUpdate" /></li>
		<li><asp:LinkButton id="cmdDelete" runat="server" CssClass="dnnSecondaryAction dnnDeleteSite" resourcekey="cmdDelete" Causesvalidation="False"/></li>
		<li><asp:Hyperlink id="cancelHyperLink" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCancel" /></li>
		<li><asp:Hyperlink ID="uploadSkinLink" CssClass="dnnSecondaryAction" ResourceKey="SkinUpload" runat="server" /></li>
	</ul>
	<div class="dnnssStat dnnClear"><dnn:audit id="ctlAudit" runat="server" /></div>
</div>
<script language="javascript" type="text/javascript">
/*globals jQuery, window, Sys */
(function ($, Sys) {
	function setupDnnSiteSettings() {
		$('#dnnSiteSettings').dnnTabs().dnnPanels();
		$('#siteSkinSettings,#editSkinSettings').dnnPreview({
			skinSelector: 'select:eq(0)',
			containerSelector: 'select:eq(1)',
			baseUrl: '//<%= this.PortalAlias.HTTPAlias %>',
			noSelectionMessage: '<%= LocalizeString("PreviewNoSelectionMessage.Text") %>',
			alertCloseText: '<%= Localization.GetString("Close.Text", Localization.SharedResourceFile)%>',
			alertOkText: '<%= Localization.GetString("Ok.Text", Localization.SharedResourceFile)%>'
		});
		$('#ssBasicSettings .dnnFormExpandContent a').dnnExpandAll({ expandText: '<%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%>', collapseText: '<%=Localization.GetString("CollapseAll", Localization.SharedResourceFile)%>', targetArea: '#ssBasicSettings' });
		$('#ssAdvancedSettings .dnnFormExpandContent a').dnnExpandAll({ expandText: '<%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%>', collapseText: '<%=Localization.GetString("CollapseAll", Localization.SharedResourceFile)%>', targetArea: '#ssAdvancedSettings' });
		$('.dnnDeleteSite').dnnConfirm({
			text: '<%= LocalizeString("DeleteMessage") %>',
			yesText: '<%= Localization.GetString("Yes.Text", Localization.SharedResourceFile) %>',
			noText: '<%= Localization.GetString("No.Text", Localization.SharedResourceFile) %>',
			title: '<%= Localization.GetString("Confirm.Text", Localization.SharedResourceFile) %>'
		});
		$('#<%= cmdRestore.ClientID %>').dnnConfirm({
			text: '<%= LocalizeString("RestoreCCSMessage") %>',
			yesText: '<%= Localization.GetString("Yes.Text", Localization.SharedResourceFile) %>',
			noText: '<%= Localization.GetString("No.Text", Localization.SharedResourceFile) %>',
			title: '<%= Localization.GetString("Confirm.Text", Localization.SharedResourceFile) %>'
		});

		$('#submitToSearchEngine').click(function (e) {
			e.preventDefault();
			var searchEngine = $("select[id$='cboSearchEngine']").val();

			if (searchEngine.indexOf("google") > 0) {
				searchEngine += "&dq=";
				var name = $("input[id$='txtPortalName']").val();
				if (name != "") {
					searchEngine += encodeURI(name);
				}
				var description = $("textarea[id$='txtDescription']").val()
				if (description != "") {
					searchEngine += encodeURI(" " + description);
				}
				var keyWords = $("textarea[id$='txtKeyWords']").val()
				if (keyWords != "") {
					searchEngine += encodeURI(" " + keyWords);
				}
				searchEngine += "&submit=Add+URL";
			}
			window.open(searchEngine, 'new');
		});
	}

	$(document).ready(function () {
		setupDnnSiteSettings();
		Sys.WebForms.PageRequestManager.getInstance().add_endRequest(function () {
			setupDnnSiteSettings();
		});
	});

} (jQuery, window.Sys));
</script>   