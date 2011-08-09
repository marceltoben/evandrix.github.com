<%@ Control Inherits="DotNetNuke.Modules.Admin.Host.HostSettings" Language="C#" AutoEventWireup="false"
    CodeFile="HostSettings.ascx.cs" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.Web.UI.WebControls" Assembly="DotNetNuke.Web" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke.WebControls" %>
<%@ Register TagPrefix="dnn" TagName="SectionHead" Src="~/controls/SectionHeadControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="FriendlyUrls" Src="~/DesktopModules/Admin/HostSettings/FriendlyUrls.ascx" %>
<%@ Register TagPrefix="dnn" TagName="RequestFilters" Src="~/DesktopModules/Admin/HostSettings/RequestFilters.ascx" %>
<%@ Register TagPrefix="asp" Namespace="DotNetNuke.Web.UI.WebControls" %>
<script language="javascript" type="text/javascript">
/*globals jQuery, window, Sys */
(function ($, Sys) {
    function toggleSmtpCredentials(animation){
        var smtpVal = $('#<%= optSMTPAuthentication.ClientID %> input:checked').val(); /*0,1,2*/
        if (smtpVal == "1") {
            animation ? $('#SMTPUserNameRow,#SMTPPasswordRow').slideDown() : $('#SMTPUserNameRow,#SMTPPasswordRow').show();
        }
        else {
            animation ? $('#SMTPUserNameRow,#SMTPPasswordRow').slideUp() : $('#SMTPUserNameRow,#SMTPPasswordRow').hide();
        }
    }

    function setUpDnnHostSettings() {
        $('#dnnHostSettings').dnnTabs().dnnPanels();
        $('#hostSkinSettings,#adminSkinSettings').dnnPreview({ 
            skinSelector: 'select:eq(0)',
            containerSelector: 'select:eq(1)',
            baseUrl: '//<%= this.PortalAlias.HTTPAlias %>',
            noSelectionMessage: '<%= LocalizeString("PreviewNoSelectionMessage.Text") %>',
            alertCloseText: '<%= Localization.GetString("Close.Text", Localization.SharedResourceFile)%>',
            alertOkText: '<%= Localization.GetString("Ok.Text", Localization.SharedResourceFile)%>'
        });
        $('#basicSettings .dnnFormExpandContent a').dnnExpandAll({expandText: '<%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%>', collapseText: '<%=Localization.GetString("CollapseAll", Localization.SharedResourceFile)%>', targetArea:'#basicSettings'});
        $('#advancedSettings .dnnFormExpandContent a').dnnExpandAll({expandText: '<%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%>', collapseText: '<%=Localization.GetString("CollapseAll", Localization.SharedResourceFile)%>', targetArea:'#advancedSettings'});

        toggleSmtpCredentials(false);
        $('#<%= optSMTPAuthentication.ClientID %>').click(function(){
            toggleSmtpCredentials(true);
        });
        
        toggleSection('friendlyUrlsRow', document.getElementById('<%=chkUseFriendlyUrls.ClientID %>').checked);
        toggleSection('requestFiltersRow', document.getElementById('<%=chkEnableRequestFilters.ClientID %>').checked);

		$("#<%=chkUseFriendlyUrls.ClientID %>").click(function(e){
			toggleSection('friendlyUrlsRow', this.checked);
		});

		$("#<%=chkEnableRequestFilters.ClientID %>").click(function(e){
			toggleSection('requestFiltersRow', this.checked);
		});
    }

    $(document).ready(function () {
        setUpDnnHostSettings();
        Sys.WebForms.PageRequestManager.getInstance().add_endRequest(function () {
            setUpDnnHostSettings();
        });
    });

    function toggleSection(id, isToggled) {
        $("div[id$='"+ id + "']").toggle(isToggled);
    }
}(jQuery, window.Sys));
</script>
<div class="dnnForm dnnHostSettings dnnClear" id="dnnHostSettings">
    <asp:ValidationSummary ID="valSummary" runat="server" CssClass="dnnFormMessage dnnFormValidationSummary"
        EnableClientScript="true" DisplayMode="BulletList" />
    <ul class="dnnAdminTabNav dnnClear">
        <li><a href="#basicSettings">
            <%=LocalizeString("BasicSettings")%></a></li>
        <li><a href="#advancedSettings">
            <%=LocalizeString("AdvancedSettings")%></a></li>
        <li><a href="#otherSettings">
            <%=LocalizeString("OtherSettings")%></a></li>
    </ul>
    <div id="basicSettings" class="ssBasicSettings dnnClear">
        <div class="dnnFormExpandContent">
            <a href="">
                <%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%></a></div>
        <div class="ssasContent dnnClear">
            <h2 id="Panel-Configuration" class="dnnFormSectionHead">
                <a href="" class="">
                    <%=LocalizeString("Configuration")%></a></h2>
            <fieldset>
                <div class="dnnFormItem">
                    <dnn:Label ID="plProduct" ControlName="lblProduct" runat="server" />
                    <asp:Label ID="lblProduct" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plVersion" ControlName="lblVersion" runat="server" />
                    <asp:Label ID="lblVersion" runat="server" />
                </div>
                <div id="betaRow" class="dnnFormItem" runat="server">
                    <dnn:Label ID="plBetaNotice" ControlName="chkBetaNotice" runat="server" />
                    <asp:CheckBox ID="chkBetaNotice" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plUpgrade" ControlName="chkUpgrade" runat="server" />
                    <asp:CheckBox ID="chkUpgrade" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plAvailable" ControlName="hypUpgrade" runat="server" />
                    <asp:HyperLink ID="hypUpgrade" Target="_new" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plDataProvider" ControlName="lblDataProvider" runat="server" />
                    <asp:Label ID="lblDataProvider" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plFramework" ControlName="lblFramework" runat="server" />
                    <asp:Label ID="lblFramework" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plIdentity" ControlName="lblIdentity" runat="server" />
                    <asp:Label ID="lblIdentity" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plHostName" ControlName="lblHostName" runat="server" />
                    <asp:Label ID="lblHostName" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plIPAddress" ControlName="lblIPAddress" runat="server" />
                    <asp:Label ID="lblIPAddress" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plPermissions" ControlName="lblPermissions" runat="server" />
                    <asp:Label ID="lblPermissions" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plApplicationPath" Text="Relative Path:" ControlName="lblApplicationPath"
                        runat="server" />
                    <asp:Label ID="lblApplicationPath" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plApplicationMapPath" Text="Physical Path:" ControlName="lblApplicationMapPath"
                        runat="server" />
                    <asp:Label ID="lblApplicationMapPath" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plServerTime" Text="Server Time:" ControlName="lblServerTime" runat="server" />
                    <asp:Label ID="lblServerTime" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plGUID" Text="GUID:" ControlName="lblGUID" runat="server" />
                    <asp:Label ID="lblGUID" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plWebFarm" Text="Web Farm Enabled?" ControlName="chkWebFarm" runat="server" />
                    <input id="chkWebFarm" type="checkbox" runat="server" disabled="disabled" />
                </div>
            </fieldset>
            <h2 id="Panel-HostDetails" class="dnnFormSectionHead">
                <a href="" class="">
                    <%=LocalizeString("HostDetails")%></a></h2>
            <fieldset>
                <div class="dnnFormItem">
                    <dnn:Label ID="plHostPortal" ControlName="cboHostPortal" runat="server" />
                    <asp:DropDownList ID="hostPortalsCombo" DataTextField="PortalName" DataValueField="PortalID"
                        runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plHostTitle" ControlName="txtHostTitle" runat="server" />
                    <asp:TextBox ID="txtHostTitle" runat="server" MaxLength="256" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plHostURL" ControlName="txtHostURL" runat="server" />
                    <asp:TextBox ID="txtHostURL" runat="server" MaxLength="256" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plHostEmail" ControlName="txtHostEmail" runat="server" />
                    <div>
                        <asp:TextBox ID="txtHostEmail" runat="server" MaxLength="256" />
                        <asp:RegularExpressionValidator ID="valHostEmail" CssClass="dnnFormMessage dnnFormError"
                            runat="server" ControlToValidate="txtHostEmail" Display="Dynamic" ResourceKey="HostEmail.Error" />
                    </div>
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plHostDefaultDocType" ControlName="cboHostDefaultDocType" runat="server" />
                    <asp:DropDownList ID="docTypeCombo" runat="server" DataTextField="Key" DataValueField="Value" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plRememberMe" ControlName="chkRemember" runat="server" />
                    <asp:CheckBox ID="chkRemember" runat="server" />
                </div>
            </fieldset>
            <h2 id="Panel-Appearance" class="dnnFormSectionHead">
                <a href="" class="">
                    <%=LocalizeString("Appearance")%></a></h2>
            <fieldset>
                <div class="dnnFormItem">
                    <dnn:Label ID="plCopyright" ControlName="chkCopyright" runat="server" />
                    <asp:CheckBox ID="chkCopyright" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plUseCustomErrorMessages" ControlName="chkUseCustomErrorMessages"
                        runat="server" />
                    <asp:CheckBox ID="chkUseCustomErrorMessages" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plUseCustomModuleCssClass" ControlName="chkUseCustomModuleCssClass"
                        runat="server" />
                    <asp:CheckBox ID="chkUseCustomModuleCssClass" runat="server" />
                </div>
                <div id="hostSkinSettings">
                    <div class="dnnFormItem">
                        <dnn:Label ID="plHostSkin" ControlName="hostSkinCombo" runat="server" />
                        <asp:DropDownList ID="hostSkinCombo" runat="Server" DataTextField="Key" DataValueField="Value" />
                    </div>
                    <div class="dnnFormItem">
                        <dnn:Label ID="plHostContainer" ControlName="hostContainerCombo" runat="server" />
                        <asp:DropDownList ID="hostContainerCombo" runat="Server" DataTextField="Key" DataValueField="Value" />
                        <a href="#" class="dnnSecondaryAction">
                            <%=LocalizeString("SkinPreview")%></a>
                    </div>
                </div>
                <div id="adminSkinSettings">
                    <div class="dnnFormItem">
                        <dnn:Label ID="plAdminSkin" ControlName="editSkinCombo" runat="server" />
                        <asp:DropDownList ID="editSkinCombo" runat="Server" DataTextField="Key" DataValueField="Value" />
                    </div>
                    <div class="dnnFormItem" id="adminContainerPreview">
                        <dnn:Label ID="plAdminContainer" ControlName="editContainerCombo" runat="server" />
                        <asp:DropDownList ID="editContainerCombo" runat="Server" DataTextField="Key" DataValueField="Value" />
                        <a href="#" class="dnnSecondaryAction">
                            <%=LocalizeString("EditSkinPreview")%></a>
                    </div>
                </div>
            </fieldset>
            <h2 id="Panel-Payment" class="dnnFormSectionHead">
                <a href="" class="">
                    <%=LocalizeString("Payment")%></a></h2>
            <fieldset class="dnnhsPaymentSettings">
                <div class="dnnFormItem">
                    <dnn:Label ID="plProcessor" ControlName="processorCombo" runat="server" />
                    <asp:DropDownList ID="processorCombo" DataTextField="value" DataValueField="text"
                        runat="server" />
                    <asp:HyperLink ID="processorLink" Target="new" CssClass="dnnSecondaryAction" ResourceKey="ProcessorWebSite"
                        runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plUserId" ControlName="txtUserId" runat="server" />
                    <asp:TextBox ID="txtUserId" runat="server" MaxLength="50" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plPassword" ControlName="txtPassword" runat="server" />
                    <asp:TextBox ID="txtPassword" runat="server" MaxLength="50" TextMode="Password" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plHostFee" ControlName="txtHostFee" runat="server" />
                    <asp:TextBox ID="txtHostFee" runat="server" MaxLength="10" />
                    <asp:CompareValidator ID="valHostFee" CssClass="dnnFormMessage dnnFormError" runat="server"
                        ControlToValidate="txtHostFee" Display="Dynamic" ResourceKey="valHostFee.Error"
                        Operator="DataTypeCheck" Type="Currency" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plHostCurrency" ControlName="cboHostCurrency" runat="server" />
                    <asp:DropDownList ID="currencyCombo" DataValueField="value" DataTextField="text"
                        runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plHostSpace" ControlName="txtHostSpace" runat="server" />
                    <asp:TextBox ID="txtHostSpace" runat="server" MaxLength="6" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plPageQuota" ControlName="txtPageQuota" runat="server" />
                    <asp:TextBox ID="txtPageQuota" runat="server" MaxLength="6" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plUserQuota" ControlName="txtUserQuota" runat="server" />
                    <asp:TextBox ID="txtUserQuota" runat="server" MaxLength="6" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plDemoPeriod" ControlName="txtDemoPeriod" runat="server" />
                    <asp:TextBox ID="txtDemoPeriod" runat="server" MaxLength="3" />
                    <asp:Label ID="lblDemoPeriod" runat="server" resourcekey="Days" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plDemoSignup" ControlName="chkDemoSignup" runat="server" />
                    <asp:CheckBox ID="chkDemoSignup" runat="server" />
                </div>
            </fieldset>
        </div>
    </div>
    <div id="advancedSettings" class="ssAdvancedSettings dnnClear">
        <div class="dnnFormExpandContent">
            <a href="">
                <%=Localization.GetString("ExpandAll", Localization.SharedResourceFile)%></a></div>
        <div class="ssasContent dnnClear">
            <h2 id="Panel-FriendlyUrl" class="dnnFormSectionHead">
                <a href="#" class="">
                    <%=LocalizeString("FriendlyUrl")%></a></h2>
            <fieldset class="asContentFriendlyUrls">
                <div class="dnnFormItem">
                    <dnn:Label ID="plUseFriendlyUrls" ControlName="chkUseFriendlyUrls" runat="server" />
                    <asp:CheckBox ID="chkUseFriendlyUrls" runat="server" />
                </div>
                <div id="friendlyUrlsRow" class="dnnFormItem" runat="server">
                    <dnn:FriendlyUrls ID="friendlyUrls" runat="server" />
                </div>
            </fieldset>
            <h2 id="Panel-Proxy" class="dnnFormSectionHead">
                <a href="#" class="">
                    <%=LocalizeString("Proxy")%></a></h2>
            <fieldset>
                <div class="dnnFormItem">
                    <dnn:Label ID="plProxyServer" ControlName="txtProxyServer" runat="server" />
                    <asp:TextBox ID="txtProxyServer" runat="server" MaxLength="256" Width="300" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plProxyPort" ControlName="txtProxyPort" runat="server" />
                    <asp:TextBox ID="txtProxyPort" runat="server" MaxLength="256" Width="300" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plProxyUsername" ControlName="txtProxyUsername" runat="server" />
                    <asp:TextBox ID="txtProxyUsername" runat="server" MaxLength="256" Width="300" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plProxyPassword" ControlName="txtProxyPassword" runat="server" />
                    <asp:TextBox ID="txtProxyPassword" runat="server" MaxLength="256" Width="300" TextMode="Password" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plWebRequestTimeout" ControlName="txtWebRequestTimeout" runat="server" />
                    <asp:TextBox ID="txtWebRequestTimeout" runat="server" MaxLength="256" Width="300" />
                </div>
            </fieldset>
            <h2 id="Panel-SMTP" class="dnnFormSectionHead">
                <a href="#" class="">
                    <%=LocalizeString("SMTP")%></a></h2>
            <fieldset class="dnnhsSMTPSettings">
                <div class="dnnFormItem">
                    <dnn:Label ID="plSMTPServer" ControlName="txtSMTPServer" runat="server" />
                    <asp:TextBox ID="txtSMTPServer" runat="server" MaxLength="256" Width="225" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plSMTPAuthentication" ControlName="optSMTPAuthentication" runat="server" />
                    <asp:RadioButtonList ID="optSMTPAuthentication" CssClass="dnnHSRadioButtons" runat="server"
                        RepeatLayout="Flow">
                        <asp:ListItem Value="0" resourcekey="SMTPAnonymous" />
                        <asp:ListItem Value="1" resourcekey="SMTPBasic" />
                        <asp:ListItem Value="2" resourcekey="SMTPNTLM" />
                    </asp:RadioButtonList>
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plSMTPEnableSSL" ControlName="chkSMTPEnableSSL" runat="server" />
                    <asp:CheckBox ID="chkSMTPEnableSSL" runat="server" />
                </div>
                <div id="SMTPUserNameRow" class="dnnFormItem">
                    <dnn:Label ID="plSMTPUsername" ControlName="txtSMTPUsername" runat="server" />
                    <asp:TextBox ID="txtSMTPUsername" runat="server" MaxLength="256" Width="300" />
                </div>
                <div id="SMTPPasswordRow" class="dnnFormItem">
                    <dnn:Label ID="plSMTPPassword" ControlName="txtSMTPPassword" runat="server" />
                    <asp:TextBox ID="txtSMTPPassword" runat="server" MaxLength="256" Width="300" TextMode="Password" />
                </div>
                <ul class="dnnActions dnnClear">
                    <li>
                        <asp:LinkButton ID="cmdEmail" resourcekey="EmailTest" runat="server" CssClass="dnnPrimaryAction" /></li>
                </ul>
            </fieldset>
            <h2 id="Panel-Performance" class="dnnFormSectionHead">
                <a href="#" class="">
                    <%=LocalizeString("Performance")%></a></h2>
            <fieldset class="dnnhsPerformanceSettings">
                <div class="dnnFormItem">
                    <dnn:Label ID="plPageState" runat="server" ControlName="cboPageState" />
                    <asp:RadioButtonList ID="cboPageState" CssClass="dnnHSRadioButtons" runat="server"
                        RepeatLayout="Flow">
                        <asp:ListItem resourcekey="Page" Value="P" />
                        <asp:ListItem resourcekey="Memory" Value="M" />
                    </asp:RadioButtonList>
                    <div class="dnnFormItem psPageStateWarning dnnClear">
                        <asp:Label ID="plPsWarning" runat="server" CssClass="dnnFormMessage dnnFormWarning"
                            resourcekey="plPsWarning" /></div>
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="lblModuleCacheProvider" runat="server" ControlName="cboModuleCacheProvider"
                        ResourceKey="ModuleCacheProvider" HelpKey="ModuleCacheProvider.Help" />
                    <asp:DropDownList ID="cboModuleCacheProvider" runat="server" DataValueField="key"
                        DataTextField="filteredkey" />
                </div>
                <div id="PageCacheRow" class="dnnFormItem" runat="server">
                    <dnn:Label ID="lblPageCacheProvider" runat="server" ControlName="cboPageCacheProvider"
                        ResourceKey="PageCacheProvider" HelpKey="PageCacheProvider.Help" />
                    <asp:DropDownList ID="cboPageCacheProvider" runat="server" DataValueField="key" DataTextField="filteredkey" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plPerformance" ControlName="cboPerformance" runat="server" />
                    <asp:DropDownList ID="cboPerformance" runat="server">
                        <asp:ListItem resourcekey="NoCaching" Value="0" />
                        <asp:ListItem resourcekey="LightCaching" Value="1" />
                        <asp:ListItem resourcekey="ModerateCaching" Value="3" />
                        <asp:ListItem resourcekey="HeavyCaching" Value="6" />
                    </asp:DropDownList>
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plCacheability" ControlName="cboCacheability" runat="server" />
                    <asp:DropDownList ID="cboCacheability" runat="server">
                        <asp:ListItem resourcekey="NoCache" Value="0" />
                        <asp:ListItem resourcekey="Private" Value="1" />
                        <asp:ListItem resourcekey="Public" Value="2" />
                        <asp:ListItem resourcekey="Server" Value="3" />
                        <asp:ListItem resourcekey="ServerAndNoCache" Value="4" />
                        <asp:ListItem resourcekey="ServerAndPrivate" Value="5" />
                    </asp:DropDownList>
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plCompression" ControlName="cboCompression" runat="server" />
                    <asp:DropDownList ID="cboCompression" runat="server">
                        <asp:ListItem resourcekey="NoCompression" Value="0" />
                        <asp:ListItem resourcekey="GZip" Value="1" />
                    </asp:DropDownList>
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plWhitespace" ControlName="chkWhitespace" runat="server" />
                    <asp:CheckBox ID="chkWhitespace" runat="server" />
                </div>
            </fieldset>
            <h2 id="Panel-Compression" class="dnnFormSectionHead">
                <a href="#" class="">
                    <%=LocalizeString("Compression")%></a></h2>
            <fieldset>
                <div class="dnnFormItem">
                    <dnn:Label ID="plExcludedPaths" runat="server" ControlName="txtExcludedPaths" />
                    <asp:TextBox ID="txtExcludedPaths" runat="server" MaxLength="256" Width="300" TextMode="MultiLine"
                        Rows="3" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plWhitespaceFilter" runat="server" ControlName="txtWhitespaceFilter" />
                    <asp:TextBox ID="txtWhitespaceFilter" runat="server" MaxLength="256" Width="300"
                        TextMode="MultiLine" Rows="3" />
                </div>
            </fieldset>
            <h2 id="Panel-JQuery" class="dnnFormSectionHead">
                <a href="#" class="">
                    <%=LocalizeString("JQuery")%></a></h2>
            <fieldset>
                <div class="dnnFormItem">
                    <dnn:Label ID="plJQueryVersion" ControlName="jQueryVersion" runat="server" />
                    <asp:Label ID="jQueryVersion" runat="server"></asp:Label>
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plJQueryUIVersion" ControlName="jQueryUIVersion" runat="server" />
                    <asp:Label ID="jQueryUIVersion" runat="server"></asp:Label>
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plJQueryDebugVersion" ControlName="chkJQueryDebugVersion" runat="server" />
                    <asp:CheckBox ID="chkJQueryDebugVersion" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plJQueryUseHosted" ControlName="chkJQueryUseHosted" runat="server" />
                    <asp:CheckBox ID="chkJQueryUseHosted" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plJQueryHostUrl" ControlName="txtJQueryHostedUrl" runat="server" />
                    <asp:TextBox ID="txtJQueryHostedUrl" runat="server" MaxLength="256" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plJQueryUIHostUrl" ControlName="txtJQueryUIHostedUrl" runat="server" />
                    <asp:TextBox ID="txtJQueryUIHostedUrl" runat="server" MaxLength="256" />
                </div>
            </fieldset>
        </div>
    </div>
    <div id="otherSettings" class="ssOtherSettings dnnClear">
        <div class="ssosContent dnnClear">
            <fieldset class="dnnhsOtherSettings">
                <div class="dnnFormItem">
                    <dnn:Label ID="plEnableRequestFilters" ControlName="chkEnableRequestFilters" runat="server" />
                    <asp:CheckBox ID="chkEnableRequestFilters" runat="server" />
                </div>
                <div id="requestFiltersRow" class="dnnFormItem">
                    <dnn:RequestFilters ID="requestFilters" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plControlPanel" ControlName="cboControlPanel" runat="server" />
                    <asp:DropDownList ID="cboControlPanel" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plSiteLogStorage" ControlName="optSiteLogStorage" runat="server" />
                    <asp:RadioButtonList ID="optSiteLogStorage" CssClass="dnnHSRadioButtons" runat="server"
                        RepeatLayout="Flow">
                        <asp:ListItem Value="D" resourcekey="Database" />
                        <asp:ListItem Value="F" resourcekey="FileSystem" />
                    </asp:RadioButtonList>
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plSiteLogBuffer" ControlName="txtSiteLogBuffer" runat="server" />
                    <asp:TextBox ID="txtSiteLogBuffer" runat="server" MaxLength="4" />
                    <asp:Label ID="lblSiteLogBuffer" runat="server" resourcekey="Items" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plSiteLogHistory" ControlName="txtSiteLogHistory" runat="server" />
                    <asp:TextBox ID="txtSiteLogHistory" runat="server" MaxLength="3" />
                    <asp:Label ID="lblSiteLogHistory" runat="server" resourcekey="Days" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plUsersOnline" ControlName="chkUsersOnline" runat="server" />
                    <asp:CheckBox ID="chkUsersOnline" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plUsersOnlineTime" ControlName="txtUsersOnlineTime" runat="server" />
                    <asp:TextBox ID="txtUsersOnlineTime" runat="server" MaxLength="3" />
                    <asp:Label ID="lblUsersOnlineTime" runat="server" resourcekey="Minutes" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plAutoAccountUnlock" ControlName="txtAutoAccountUnlock" runat="server" />
                    <asp:TextBox ID="txtAutoAccountUnlock" runat="server" MaxLength="3" />
                    <asp:Label ID="lblAutoAccountUnlock" runat="server" resourcekey="Minutes" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plFileExtensions" ControlName="txtFileExtensions" runat="server" />
                    <asp:TextBox ID="txtFileExtensions" runat="server" MaxLength="256" TextMode="MultiLine"
                        Rows="3" />
                    <asp:RegularExpressionValidator ID="valFileExtensions" CssClass="dnnFormMessage dnnFormError"
                        runat="server" ControlToValidate="txtFileExtensions" EnableClientScript="true"
                        ValidationExpression="[A-Za-z0-9,_]*" resourceKey="valFileExtensions.Error" Display="Dynamic" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plSchedulerMode" ControlName="cboSchedulerMode" runat="server" />
                    <asp:DropDownList ID="cboSchedulerMode" runat="server">
                        <asp:ListItem resourcekey="Disabled" Value="0" />
                        <asp:ListItem resourcekey="TimerMethod" Value="1" />
                        <asp:ListItem resourcekey="RequestMethod" Value="2" />
                    </asp:DropDownList>
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plLogBuffer" ControlName="chkLogBuffer" runat="server" />
                    <asp:CheckBox ID="chkLogBuffer" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plHelpUrl" ControlName="txtHelpURL" runat="server" />
                    <asp:TextBox ID="txtHelpURL" runat="server" MaxLength="256" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plEnableHelp" ControlName="chkEnableHelp" runat="server" />
                    <asp:CheckBox ID="chkEnableHelp" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plAutoSync" ControlName="chkAutoSync" runat="server" />
                    <asp:CheckBox ID="chkAutoSync" runat="server" />
                </div>
                <div class="dnnFormItem">
                    <dnn:Label ID="plEnableContentLocalization" ControlName="chkEnableContentLocalization"
                        runat="server" />
                    <asp:CheckBox ID="chkEnableContentLocalization" runat="server" />
                </div>
            </fieldset>
        </div>
    </div>
    <ul class="dnnActions dnnClear">
        <li>
            <asp:LinkButton ID="cmdUpdate" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdUpdate" /></li>
        <li>
            <asp:HyperLink ID="uploadSkinLink" CssClass="dnnSecondaryAction" ResourceKey="SkinUpload"
                runat="server" /></li>
        <li>
            <asp:LinkButton ID="cmdCache" resourcekey="ClearCache" runat="server" CssClass="dnnSecondaryAction"
                CausesValidation="false" /></li>
        <li>
            <asp:LinkButton ID="cmdRestart" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdRestart"
                CausesValidation="False" /></li>
    </ul>
    <div class="dnnFormItem dnnhsUpgradeLog">
        <div>
            <dnn:Label ID="plLog" Text="View Upgrade Log For Version:" ControlName="cboUpgrade"
                runat="server" />
        </div>
        <div>
            <asp:DropDownList ID="cboVersion" runat="server" />
            <dnn:CommandButton ID="cmdUpgrade" ResourceKey="cmdGo" runat="server" IconKey="View"
                CausesValidation="false" />
        </div>
        <div>
            <asp:Label ID="lblUpgrade" runat="server" /></div>
    </div>
</div>
