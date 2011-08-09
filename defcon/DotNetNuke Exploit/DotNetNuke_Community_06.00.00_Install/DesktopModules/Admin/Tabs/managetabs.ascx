<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Tabs.ManageTabs" CodeFile="ManageTabs.ascx.cs" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.Web.UI.WebControls" Assembly="DotNetNuke.Web" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="URL" Src="~/controls/URLControl.ascx" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.Security.Permissions.Controls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" TagName="Audit" Src="~/controls/ModuleAuditControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="ModuleLocalization" Src="~/Admin/Modules/ModuleLocalization.ascx" %>
<%@ Register TagPrefix="dnn" TagName="TabLocalization" Src="~/DesktopModules/Admin/Tabs/TabLocalization.ascx" %>
<div class="dnnForm dnnPageSettings dnnClear" id="tabSettingsForm">
	<ul class="dnnAdminTabNav dnnClear" id="">
		<li><a href="#dnnPageDetails"><%=LocalizeString("PageDetails")%></a></li>
        <li id="copyTab" runat="server"><a href="#dnnCopyPage"><%=LocalizeString("CopyPage")%></a></li>
		<li id="permissionsTab" runat="server"><a href="#dnnPermissions"><%=LocalizeString("Permissions")%></a></li>
		<li id="localizationTab" runat="server"><a href="#dnnLocalization"><%=LocalizeString("Localization")%></a></li>
		<li><a href="#dnnAdvancedSettings"><%=LocalizeString("AdvancedSettings")%></a></li>
	</ul>
	<div id="dnnPageDetails" class="dnnPageDetails dnnClear">
	   <div class="psdContent dnnClear">
			<div class="dnnFormItem dnnFormHelp dnnClear"><p class="dnnFormRequired"><span><%=LocalizeString("RequiredFields")%></span></p></div>
		   <fieldset>
				<div class="dnnFormItem">
					<dnn:Label ID="plTabName" runat="server" ResourceKey="TabName" Suffix=":" HelpKey="TabNameHelp" ControlName="txtTabName" />
					<asp:TextBox ID="txtTabName" CssClass="dnnFormRequired" runat="server" MaxLength="50" />
					<asp:RequiredFieldValidator ID="valTabName" CssClass="dnnFormMessage dnnFormError" runat="server" resourcekey="valTabName.ErrorMessage" Display="Dynamic" ControlToValidate="txtTabName" />
				</div>    
				<div class="dnnFormItem">
					<dnn:Label ID="plTitle" runat="server" ResourceKey="Title" Suffix=":" HelpKey="TitleHelp" ControlName="txtTitle" />
					<asp:TextBox ID="txtTitle" runat="server" MaxLength="200" />
				</div>    
				<div class="dnnFormItem">
					<dnn:Label ID="plDescription" runat="server" ResourceKey="Description" Suffix=":" HelpKey="DescriptionHelp" ControlName="txtDescription" />
					<asp:TextBox ID="txtDescription" runat="server" MaxLength="625" TextMode="MultiLine" Rows="2" />
				</div>    
				<div class="dnnFormItem">
					<dnn:Label ID="plKeywords" runat="server" ResourceKey="KeyWords" Suffix=":" HelpKey="KeyWordsHelp" ControlName="txtKeyWords" />
					<asp:TextBox ID="txtKeyWords" runat="server" MaxLength="500" TextMode="MultiLine" Rows="2" />
				</div>    
				<div class="dnnFormItem">
					<dnn:Label ID="plTags" runat="server" ControlName="termsSelector" />
					<dnn:TermsSelector ID="termsSelector" runat="server" Width="475" />
				</div>    
				<div class="dnnFormItem">
					<dnn:Label ID="plParentTab" runat="server" ResourceKey="ParentTab" ControlName="cboParentTab" />
					<asp:DropDownList ID="cboParentTab" runat="server" DataTextField="IndentedTabName" DataValueField="TabId" />
				</div>    
				<div id="insertPositionRow" class="dnnFormItem" runat="server">
					<dnn:Label ID="plInsertPosition" runat="server" ResourceKey="InsertPosition" ControlName="cboPositionTab" />
					<asp:RadioButtonList ID="rbInsertPosition" runat="server" CssClass="dnnFormRadioButtons" RepeatDirection="Horizontal" AutoPostBack="true" RepeatLayout="Flow" />
					<asp:DropDownList ID="cboPositionTab" CssClass="dnnPositionTab" runat="server" DataTextField="LocalizedTabName" DataValueField="TabId" />
				</div>    
				<div id="templateRow1" class="dnnFormItem" runat="server" visible="false">
					<dnn:label id="plFolder" runat="server" controlname="cboFolders" />
					<asp:DropDownList ID="cboFolders" Runat="server" AutoPostBack="true" />
				</div>    
				<div  id="templateRow2" class="dnnFormItem" runat="server" visible="false">
					<dnn:label id="plTemplate" runat="server" controlname="cboTemplate" />
					<asp:dropdownlist id="cboTemplate" runat="server" />
				</div>    
				<div class="dnnFormItem">
					<dnn:Label ID="plMenu" runat="server" ResourceKey="Menu" Suffix="?" HelpKey="MenuHelp" ControlName="chkMenu" />
					<asp:CheckBox ID="chkMenu" runat="server" />
				</div>    
			</fieldset>
	   </div>   
	</div>
    <div id="dnnCopyPage" class="dnnCopyPage dnnClear">
        <div class="pslContent dnnClear">
            <fieldset>
				<div id="copyPanel" runat="server">
					<div class="dnnFormItem">
						<dnn:Label ID="plCopyPage" runat="server" ResourceKey="CopyModules" Suffix=":" HelpKey="CopyModulesHelp" ControlName="cboCopyPage" />
						<asp:DropDownList ID="cboCopyPage" runat="server" DataTextField="IndentedTabName" DataValueField="TabId" AutoPostBack="True" />
					</div>    	
					<div id="modulesRow" runat="server" class="dnnFormItem">
						<dnn:Label ID="plModules" runat="server" ResourceKey="CopyContent" Suffix=":" HelpKey="CopyContentHelp" ControlName="grdModules" />
                        <asp:DataGrid ID="grdModules" runat="server" DataKeyField="ModuleID" ShowHeader="False" Width="70%" AutoGenerateColumns="false">
							<headerstyle cssclass="dnnGridHeader" verticalalign="Top" />
							<itemstyle cssclass="dnnGridItem" horizontalalign="Left" />
							<alternatingitemstyle cssclass="dnnGridAltItem" />
							<edititemstyle cssclass="dnnFormInput" />
							<selecteditemstyle cssclass="dnnFormError" />
							<footerstyle cssclass="dnnGridFooter" />
							<pagerstyle cssclass="dnnGridPager" />
							<Columns>
								<asp:TemplateColumn>
                                    <ItemTemplate>
                                        <asp:CheckBox ID="chkModule" runat="server" Checked="True" /></ItemTemplate>
								</asp:TemplateColumn>
								<asp:TemplateColumn>
									<ItemTemplate>
                                        <asp:TextBox ID="txtCopyTitle" Width="90%" runat="server" Text='<%# DataBinder.Eval(Container.DataItem,"ModuleTitle")%>' />
									</ItemTemplate>
									<ItemStyle Wrap="False"></ItemStyle>
								</asp:TemplateColumn>
								<asp:BoundColumn DataField="PaneName" />
                                <asp:TemplateColumn ItemStyle-Width="200px">
									<ItemTemplate>
										<asp:RadioButton ID="optNew" runat="server" CssClass="dnnFormRadioButtons" GroupName="Copy" resourcekey="ModuleNew" Checked="True" />
										<asp:RadioButton ID="optCopy" runat="server" CssClass="dnnFormRadioButtons" GroupName="Copy" resourcekey="ModuleCopy" Enabled='<%# DataBinder.Eval(Container.DataItem, "IsPortable") %>' />
										<asp:RadioButton ID="optReference" runat="server" CssClass="dnnFormRadioButtons" GroupName="Copy" resourcekey="ModuleReference" Enabled='<%# Convert.ToInt32(DataBinder.Eval(Container.DataItem, "ModuleID")) != -1  %>' />
									</ItemTemplate>
									<ItemStyle Wrap="False"></ItemStyle>
								</asp:TemplateColumn>
							</Columns>
						</asp:DataGrid>
					</div>
				</div>
			</fieldset>
	   </div>   
	</div>
	<div id="dnnPermissions" class="dnnPermissions dnnClear">
		<div class="pspContent dnnClear">
			<fieldset>
				<div id="permissionRow" runat="server"><dnn:TabPermissionsGrid ID="dgPermissions" runat="server" /></div>    
				<div id="copyPermissionRow" runat="server">
					<div class="dnnFormItem"><dnn:Label ID="plCopyPerm" runat="server" ResourceKey="plCopyPerm" /></div>
					<asp:LinkButton ID="cmdCopyPerm" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCopyPerm" />
				</div>
			</fieldset>
		</div>
	</div>
	<div id="dnnLocalization" class="dnnLocalization dnnClear">
	   <div class="pslContent dnnClear">     
			<fieldset id="localizationPanel" runat="server">
				<legend></legend>
				<div id="cultureTypeRow" runat="server" visible="false" class="dnnFormItem">
					<dnn:Label ID="cultureTypeLabel" runat="server" ControlName="cultureTypeList"></dnn:Label>
					<asp:RadioButtonList ID="cultureTypeList" runat="server" CssClass="dnnFormRadioButtons" RepeatDirection="Vertical">
						<asp:ListItem Value="Neutral" resourcekey="Neutral" Selected="True" />
						<asp:ListItem Value="Culture" resourcekey="Culture" />
						<asp:ListItem Value="Localized" resourcekey="Localized" />
					</asp:RadioButtonList>
				</div>
				<div id="cultureRow" runat="server" class="dnnFormItem">
					<dnn:Label ID="cultureLabel" runat="server" ControlName="cultureName"></dnn:Label>
					<dnn:DnnLanguageLabel ID="cultureLanguageLabel" runat="server"  />&nbsp;&nbsp;&nbsp;
					<asp:Label ID="defaultCultureMessageLabel" runat="server" CssClass="dnnFormError" Text="**" />
					<asp:Label ID="defaultCultureMessage" runat="server" resourcekey="DefaultCulture" />
				</div>
				<div id="translatedRow" runat="server" class="dnnFormItem">
					<dnn:Label ID="translatedLabel" runat="server" ControlName="translatedCheckbox" resourcekey="IsTranslated"></dnn:Label>
					<asp:Checkbox ID="translatedCheckbox" runat="server" cssclass="SubHead" />
					<asp:Button ID="localizePagesButton" runat="server" resourcekey="CreateLocalizedPages" Visible ="false" />
				</div>
				<div id="defaultCultureRow" runat="server" class="dnnFormItem">
					<dnn:Label ID="defaultCultureLabel" runat="server" ControlName="defaultCultureLink"></dnn:Label>
					<dnn:DnnLanguageLabel ID="defaultCultureLanguageLabel" runat="server"  />
					<dnn:CommandButton ID="viewDefaultCultureButton" runat="server" IconKey="View" ResourceKey="view" />&nbsp;&nbsp;
					<dnn:CommandButton ID="editDefaultCultureButton" runat="server" IconKey="Edit" ResourceKey="edit" />
				</div>
				<div id="publishRow" runat="server" class="dnnFormItem" visible="false">
					<dnn:Label ID="publishPageLabel" runat="server" ControlName="publishPageButton"></dnn:Label>
					<dnn:CommandButton ID="publishPageButton" runat="server" IconKey="Save" DisplayLink = "false" ResourceKey="PublishPage" />
				</div>
				<div id="readyForTranslationRow" runat="server" visible="false" class="dnnFormItem">
					<asp:Label ID="readyToTranslateLabel" runat="server" resourceKey="readyToTranslateLabel" />
					<dnn:CommandButton ID="readyForTranslationButton" runat="server" IconKey="Language" ResourceKey="ReadyForTranslation" />
				</div>
				<div id="localizedTabsRow" runat="server" class="dnnFormItem">
					<asp:Label ID="localizedTabsLabel" runat="server" resourcekey="LocalizedTabs" EnableViewState="False" />
					<dnn:TabLocalization id="tabLocalization" runat="server" />
				</div>
				<div id="localizedModulesRow" runat="server" class="dnnFormItem">
					<asp:Label ID="localizedModulesLabel" runat="server" resourcekey="LocalizedModules" EnableViewState="False" />
					<dnn:ModuleLocalization id="moduleLocalization" runat="server" />
				</div>
			</fieldset>   
		</div>
   </div>
	<div id="dnnAdvancedSettings" class="dnnAdvancedSettings dnnClear">
		<div class="dnnFormExpandContent"><a href=""><%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%></a></div>
		<div class="psasContent dnnClear">
			<h2 id="dnnPanel-TabsAppearance" class="dnnFormSectionHead"><a href="" class="dnnLabelExpanded"><%=LocalizeString("Appearance")%></a></h2>
			<fieldset>
				<legend></legend>
				<div class="dnnFormItem">
					<dnn:Label ID="plIcon" runat="server" ResourceKey="Icon" Suffix=":" HelpKey="IconHelp" ControlName="ctlIcon" />
					<div class="dnnLeft"><dnn:URL ID="ctlIcon" runat="server" ShowLog="False" /></div>
				</div>       
				<div class="dnnFormItem">
					<dnn:Label ID="plIconLarge" runat="server" ResourceKey="IconLarge" Suffix=":" HelpKey="IconLargeHelp" ControlName="ctlIconLarge" />
					<div class="dnnLeft"><dnn:URL ID="ctlIconLarge" runat="server" ShowLog="False" /></div>
				</div>       
				<div id="tabSkinSettings">
					<div class="dnnFormItem">
						<dnn:Label ID="plSkin" ControlName="pageSkinCombo" runat="server" />
						<asp:DropDownList ID="pageSkinCombo" runat="Server" DataTextField="Key" DataValueField ="Value" />
					</div>
					<div class="dnnFormItem">
						<dnn:Label ID="plContainer" ControlName="pageContainerCombo" runat="server" />
						<asp:DropDownList ID="pageContainerCombo" runat="Server" DataTextField="Key" DataValueField ="Value" />
						<a href="#" class="dnnSecondaryAction"><%=LocalizeString("SkinPreview")%></a>
					</div>
				</div>
				<div id="rowCopySkin" runat="server" class="dnnFormItem">
					<dnn:Label ID="plCopySkin" runat="server" ResourceKey="plCopySkin" />
					<asp:LinkButton ID="cmdCopySkin" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCopySkin" />
				</div>       
				<div class="dnnFormItem">
					<dnn:Label ID="plDisable" runat="server" ResourceKey="Disabled" Suffix=":" HelpKey="DisabledHelp" ControlName="chkDisableLink" />
					<asp:CheckBox ID="chkDisableLink" runat="server" />
				</div>       
				<div class="dnnFormItem">
					<dnn:Label ID="plRefreshInterval" runat="server" ResourceKey="RefreshInterval" Suffix=":" HelpKey="RefreshInterval.Help" ControlName="cboRefreshInterval" />
					<asp:TextBox ID="txtRefreshInterval" runat="server" />
				</div>       
				<div class="dnnFormItem">
					<dnn:Label ID="plPageHeadText" runat="server" ResourceKey="PageHeadText" Suffix=":" HelpKey="PageHeadText.Help" ControlName="txtPageHeadText" />
					<asp:TextBox ID="txtPageHeadText" runat="server" TextMode="MultiLine" MaxLength="500" Rows="4" Columns="50" />
				</div>       
			</fieldset>
			<h2 id="dnnPanel-TabsCacheSettings"  class="dnnFormSectionHead"><a href="" class=""><%=LocalizeString("CacheSettings")%></a></h2>
			<fieldset>
				<legend></legend>
				<div class="dnnFormItem">
					<dnn:Label ID="lblCacheProvider" runat="server" ControlName="cboCacheProvider" ResourceKey="CacheProvider" HelpKey="CacheProvider.Help"></dnn:Label>
					<asp:DropDownList ID="cboCacheProvider" runat="server" AutoPostBack="true" DataValueField="Key" DataTextField="Key" />
				</div>        
				<div id="CacheStatusRow" runat="server" visible="false" class="dnnFormItem">
					<dnn:Label ID="lblCacheStatus" runat="server" ResourceKey="CacheStatus" HelpKey="CacheStatus.Help"></dnn:Label>
					<asp:Label ID="lblCachedItemCount" runat="server" />
					<asp:LinkButton ID="cmdClearPageCache" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdClearPageCache" />&nbsp;|&nbsp;<asp:LinkButton ID="cmdClearAllPageCache" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdClearAllPageCache"/>
				</div>        
				<div id="CacheDurationRow" runat="server" visible="false" class="dnnFormItem">
					<dnn:Label ID="lblCacheDuration" runat="server" ControlName="txtCacheDuration" ResourceKey="CacheDuration" HelpKey="CacheDuration.Help"></dnn:Label>
					<asp:TextBox ID="txtCacheDuration" runat="server" />
					<asp:CompareValidator ID="valCacheTime" ControlToValidate="txtCacheDuration" Operator="DataTypeCheck" Type="Integer" Runat="server" Display="Dynamic" resourcekey="valCacheTime.ErrorMessage" CssClass="dnnFormMessage dnnFormError" />
					<div class="CacheDurationInfo dnnClear"><asp:Label ID="lblCacheDurationInfo" runat="server" ResourceKey="CacheDurationInfo.Text" CssClass="dnnFormMessage dnnFormWarning" Width="200px"/></div>
				</div>        
				<div id="CacheIncludeExcludeRow" runat="server" visible="false" class="dnnFormItem">
					<dnn:Label ID="lblCacheIncludeExclude" runat="server" ControlName="rblCacheIncludeExclude" ResourceKey="CacheIncludeExclude" HelpKey="CacheIncludeExclude.Help"></dnn:Label>
					<asp:RadioButtonList ID="rblCacheIncludeExclude" runat="server" AutoPostBack="true" CssClass="dnnFormRadioButtons" RepeatLayout="Flow">
						<asp:ListItem Text="Exclude" Value="0" />
						<asp:ListItem Text="Include" Value="1" />
					</asp:RadioButtonList>
				</div>        
				<div id="IncludeVaryByRow" runat="server" visible="false" class="dnnFormItem">
					<dnn:Label ID="lblIncludeVaryBy" runat="server" ControlName="txtIncludeVaryBy" ResourceKey="IncludeVaryBy" HelpKey="IncludeVaryBy.Help"></dnn:Label>
					<asp:TextBox ID="txtIncludeVaryBy" runat="server" />
				</div>        
				<div id="ExcludeVaryByRow" runat="server" visible="false" class="dnnFormItem">
					<dnn:Label ID="lblExcludeVaryBy" runat="server" ControlName="txtExcludeVaryBy" ResourceKey="ExcludeVaryBy" HelpKey="ExcludeVaryBy.Help"></dnn:Label>
					<asp:TextBox ID="txtExcludeVaryBy" runat="server" />
				</div>        
				<div id="MaxVaryByCountRow" runat="server" visible="false" class="dnnFormItem">
					<dnn:Label ID="lblMaxVaryByCount" runat="server" ControlName="txtMaxVaryByCount" ResourceKey="CacheMaxVaryByCount" HelpKey="CacheMaxVaryByCount.Help"></dnn:Label>
					<asp:TextBox ID="txtMaxVaryByCount" runat="server" />
					<asp:CompareValidator ID="valMaxVaryByCount" ControlToValidate="txtMaxVaryByCount" Operator="DataTypeCheck" Type="Integer" Runat="server" Display="Dynamic" resourcekey="valCacheTime.ErrorMessage" />
				</div>        
			</fieldset>
			<h2 id="dnnPanel-TabsOtherSettings" class="dnnFormSectionHead"><a href="" class=""><%=LocalizeString("OtherSettings")%></a></h2>
			<fieldset>
				<legend></legend>
				<div class="dnnFormItem">
					<dnn:Label ID="plSecure" runat="server" ControlName="chkSecure" />
					<asp:CheckBox ID="chkSecure" runat="server" />
				</div>        
				<div class="dnnFormItem">
					<dnn:Label ID="plPriority" runat="server" ControlName="txtPriority" />
					<asp:TextBox ID="txtPriority" runat="server" MaxLength="11" Width="120" />
				</div>        
				<div class="dnnFormItem">
					<dnn:Label ID="plStartDate" runat="server" ControlName="txtStartDate" />
					<dnn:DnnDatePicker ID="datepickerStartDate" runat="server"/>&nbsp;
					<asp:CompareValidator ID="valtxtStartDate" resourcekey="valStartDate.ErrorMessage" Operator="DataTypeCheck" Type="Date" runat="server" Display="Dynamic" ControlToValidate="datepickerStartDate" />
				</div>        
				<div class="dnnFormItem">
					<dnn:Label ID="plEndDate" runat="server" ControlName="txtEndDate" />
					<dnn:DnnDatePicker ID="datepickerEndDate" runat="server"/>&nbsp;
				    <asp:CompareValidator ID="valtxtEndDate" resourcekey="valEndDate.ErrorMessage" Operator="DataTypeCheck" Type="Date" runat="server" Display="Dynamic" ControlToValidate="datepickerEndDate" />
					<asp:CompareValidator ID="val2txtEndDate" ControlToValidate="datepickerEndDate" ControlToCompare="datepickerStartDate" Operator="GreaterThanEqual" Type="Date" Runat="server" Display="Dynamic" resourcekey="valEndDate2.ErrorMessage" />
				</div>        
				<div class="dnnFormItem">
					<dnn:Label ID="plURL" runat="server" ResourceKey="Url" Suffix=":" HelpKey="UrlHelp" ControlName="ctlURL" />
					<div class="dnnLeft"><dnn:URL ID="ctlURL" runat="server" Width="300" ShowLog="False" ShowNone="True" ShowTrack="False" /></div>
				</div>        
				<div id="redirectRow" class="dnnFormItem" runat="server">
					<dnn:Label ID="plPermanentRedirect" runat="server" ControlName="chkPermanentRedirect" />
					<asp:CheckBox ID="chkPermanentRedirect" runat="server" />
				</div>             
			</fieldset>
		</div>
	</div>
	<ul class="dnnActions dnnClear">
		<li><asp:LinkButton id="cmdUpdate" runat="server" CssClass="dnnPrimaryAction"  /></li>
		<li><asp:LinkButton id="cmdDelete" runat="server" CssClass="dnnSecondaryAction dnnDeletePage" resourcekey="cmdDelete" Causesvalidation="False" /></li>
		<li><asp:Hyperlink id="cancelHyperLink" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCancel" /></li>
	</ul>
</div>
<dnn:audit id="ctlAudit" runat="server" />
<script language="javascript" type="text/javascript">
/*globals jQuery, window, Sys */
(function ($, Sys) {
	function setUpDnnManageTabs() {
		$('#tabSettingsForm').dnnTabs().dnnPanels();
		$('#dnnAdvancedSettings .dnnFormExpandContent a').dnnExpandAll({
			expandText: '<%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%>',
			collapseText: '<%=Localization.GetString("CollapseAll", Localization.SharedResourceFile)%>',
			targetArea: '#dnnAdvancedSettings'
		});
		$('#<%= cmdDelete.ClientID %>').dnnConfirm({
			text: '<%= Localization.GetString("DeleteItem.Text", Localization.SharedResourceFile) %>',
			yesText: '<%= Localization.GetString("Yes.Text", Localization.SharedResourceFile) %>',
			noText: '<%= Localization.GetString("No.Text", Localization.SharedResourceFile) %>',
			title: '<%= Localization.GetString("Confirm.Text", Localization.SharedResourceFile) %>'
		});
		$('#tabSkinSettings').dnnPreview({
			skinSelector: 'select:eq(0)',
			containerSelector: 'select:eq(1)',
			baseUrl: '<%= DotNetNuke.Common.Globals.NavigateURL(this.TabId) %>',
			noSelectionMessage: '<%= LocalizeString("PreviewNoSelectionMessage.Text") %>',
			alertCloseText: '<%= Localization.GetString("Close.Text", Localization.SharedResourceFile)%>',
			alertOkText: '<%= Localization.GetString("Ok.Text", Localization.SharedResourceFile)%>'
		});
	}

	$(document).ready(function () {
		setUpDnnManageTabs();
		Sys.WebForms.PageRequestManager.getInstance().add_endRequest(function () {
			setUpDnnManageTabs();
		});
	});
} (jQuery, window.Sys));
</script>