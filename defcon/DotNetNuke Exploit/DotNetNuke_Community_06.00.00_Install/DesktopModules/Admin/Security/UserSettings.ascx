<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Users.UserSettings" CodeFile="UserSettings.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="SectionHead" Src="~/controls/SectionHeadControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls"%>
<div class="dnnForm dnnUserSettings dnnClear" id="dnnUserSettings">
    <ul class="dnnAdminTabNav dnnClear">
		<li><a href="#usProviderSettings"><%=LocalizeString("ProviderSettings")%></a></li>
		<li><a href="#usPasswordSettings"><%=LocalizeString("PasswordSettings")%></a></li>
		<li><a href="#usUserAccounts"><%=LocalizeString("UserAccounts")%></a></li>
	</ul>
    <div class="usProviderSettings" id="usProviderSettings">
        <fieldset>
            <div class="dnnFormMessage dnnFormInfo"><asp:label id="lblprovider" runat="server" resourcekey="ProviderSettingsHelp" /></div>
            <dnn:propertyeditorcontrol id="ProviderSettings" runat="Server" valuedatafield="PropertyValue" namedatafield="Name" helpstyle-cssclass="dnnFormHelpContent dnnClear" SortMode="SortOrderAttribute" />
        </fieldset>
    </div>
    <div class="usPasswordSettings" id="usPasswordSettings">
        <fieldset>
            <div class="dnnFormMessage dnnFormInfo"><asp:label id="lblPassword" runat="server" resourcekey="PasswordSettingsHelp" /></div>
            <dnn:propertyeditorcontrol id="PasswordSettings" runat="Server" valuedatafield="PropertyValue" namedatafield="Name" helpstyle-cssclass="dnnFormHelpContent dnnClear" sortmode="SortOrderAttribute" />
        </fieldset>
    </div>
    <div class="usUserAccounts" id="usUserAccounts">
        <fieldset><dnn:settingseditorcontrol id="UserSettingsEditor" runat="Server" helpstyle-cssclass="dnnFormHelpContent dnnClear" editmode="Edit" /></fieldset>
    </div>
    <ul class="dnnActions dnnClear">
        <li><asp:LinkButton ID="cmdUpdate" resourcekey="cmdUpdate" runat="server" CssClass="dnnPrimaryAction" /></li>
        <li><asp:LinkButton ID="cmdCancel" resourcekey="cmdCancel" runat="server" CssClass="dnnSecondaryAction" CausesValidation="False" /></li>
    </ul>
</div>
<script language="javascript" type="text/javascript">
    function setUpDnnSettings() {
        $('#dnnUserSettings').dnnTabs();
     }
    $(document).ready(function () {
        setUpDnnSettings();
        Sys.WebForms.PageRequestManager.getInstance().add_endRequest(function () {
            setUpDnnSettings();
        });
    });
</script>