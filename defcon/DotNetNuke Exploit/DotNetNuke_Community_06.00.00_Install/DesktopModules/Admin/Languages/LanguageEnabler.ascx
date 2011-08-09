<%@ Control Language="C#" Inherits="DotNetNuke.Modules.Admin.Languages.LanguageEnabler" AutoEventWireup="false" Explicit="True" CodeFile="LanguageEnabler.ascx.cs" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<dnn:DnnToolTipManager ID="toolTipManager" runat="server" Position="TopCenter" RelativeTo="BrowserWindow"
    Width="620px" Height="200px" HideEvent="ManualClose" ShowEvent="OnClick" Modal="true"
    Skin="Default" RenderInPageRoot="true" AnimationDuration="200" ManualCloseButtonText="Close" />

<div class="dnnForm dnnLanguages dnnClear" id="dnnLanguages">
    <fieldset>
        <legend></legend>
        <div class="dnnFormItem">
            <dnn:Label ID="systemDefaultLabel" runat="server" />
            <dnn:DnnLanguageLabel ID="systemDefaultLanguageLabel" runat="server" Width="300" />
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="siteDefaultLabel" runat="server" />
            <dnn:DnnLanguageLabel ID="defaultLanguageLabel" runat="server" />
            <dnn:DnnLanguageComboBox ID="languagesComboBox" runat="server" LanguagesListType="Supported" cssClass="dnnLanguageCombo" />
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="detectBrowserLable" runat="server" />
            <asp:CheckBox ID="chkBrowser" runat="server" />
        </div>
        <ul class="dnnActions dnnClear">
    	    <li><asp:LinkButton id="updateButton" runat="server" CssClass="dnnPrimaryAction" resourcekey="Update" /></li>
        </ul>
        <div class="dnnFormItem">
            <asp:PlaceHolder ID="enabledPublishedPlaceHolder" runat="server">
                <asp:Label ID="enabledPublishedLabel" runat="server" CssClass="NormalRed" Text="*" />
                <asp:Label ID="enabledPublishedMessage" runat="server" CssClass="Normal" ResourceKey="EnabledPublishedMessage" />
                <br />
            </asp:PlaceHolder>
            <asp:Label ID="defaultPortalLabel" runat="server" CssClass="NormalRed" Text="**" />
            <asp:Label ID="defaultPortalMessage" runat="server" CssClass="Normal" />
            <asp:HyperLink ID="cmdEnableLocalizedContent" runat="server" CssClass="dnnSecondaryAction enableLocalization" ResourceKey="EnableLocalization" />
        </div>
        <div class="dnnFormItem">
            <dnn:DnnGrid ID="languagesGrid" runat="server" AutoGenerateColumns="false" Width="900px">
                <MasterTableView>
                    <ItemStyle VerticalAlign="Top" HorizontalAlign="Center" />
                    <AlternatingItemStyle VerticalAlign="Top" HorizontalAlign="Center" />
                    <HeaderStyle VerticalAlign="Bottom" HorizontalAlign="Center" Wrap="false" />
                    <Columns>
                        <dnn:DnnGridTemplateColumn ItemStyle-HorizontalAlign="Left" HeaderStyle-HorizontalAlign="Left">
                            <HeaderTemplate>
                                <%# Localization.GetString("Culture.Header", this.LocalResourceFile)%>
                            </HeaderTemplate>
                            <ItemTemplate>
                                <dnn:DnnLanguageLabel ID="translationStatusLabel" runat="server" Language='<%# Eval("Code") %>' />
                                <asp:Label ID="defaultLanguageMessageLabel" runat="server" CssClass="NormalRed" Text="**"
                                    Visible='<%# IsDefaultLanguage(Eval("Code").ToString()) %>' />
                            </ItemTemplate>
                        </dnn:DnnGridTemplateColumn>
                        <dnn:DnnGridTemplateColumn ItemStyle-Width="80px">
                            <HeaderTemplate>
                                <%# Localization.GetString("Enabled.Header", this.LocalResourceFile)%>
                                <asp:Label ID="enabledMessageLabel" runat="server" CssClass="NormalRed" Text="*"
                                    Visible='<%# PortalSettings.ContentLocalizationEnabled %>' />
                            </HeaderTemplate>
                            <ItemTemplate>
                                <dnn:DnnCheckBox ID="enabledCheckbox" runat="server" AutoPostBack="True" CommandArgument='<%# Eval("LanguageId") %>'
                                    Enabled='<%# CanEnableDisable(Eval("Code").ToString()) %>' Checked='<%# IsLanguageEnabled(Eval("Code").ToString())%>'
                                    OnCheckedChanged="enabledCheckbox_CheckChanged" />
                            </ItemTemplate>
                        </dnn:DnnGridTemplateColumn>
                        <dnn:DnnGridTemplateColumn ItemStyle-Width="80px">
                            <HeaderTemplate>
                                <%# Localization.GetString("Settings", this.LocalResourceFile)%>
                            </HeaderTemplate>
                            <ItemTemplate>
                                <asp:HyperLink ID="editLink" runat="server" NavigateUrl='<%# GetEditUrl(Eval("LanguageId").ToString()) %>'>
                                    <dnn:DnnImage ID="editImage" runat="server" IconKey="Edit" resourcekey="Edit" />
                                </asp:HyperLink>
                            </ItemTemplate>
                        </dnn:DnnGridTemplateColumn>
                        <dnn:DnnGridTemplateColumn HeaderStyle-Width="194px">
                            <HeaderTemplate>
                                <table cellspacing="0" class="DnnGridNestedTable" style="width: 180px;">
                                    <caption>
                                        <%# Localization.GetString("Static.Header", this.LocalResourceFile) %></caption>
                                    <tbody>
                                        <tr>
                                            <%
                                                if (UserInfo.IsSuperUser)
                                                {%>
                                            <td id="Td2" style="width: 60px;" runat="server">
                                                <%# Localization.GetString("System", this.LocalResourceFile)%>
                                            </td>
                                            <td id="Td1" style="width: 60px;" runat="server">
                                                <%# Localization.GetString("Host", this.LocalResourceFile)%>
                                            </td>
                                            <td style="width: 60px;">
                                                <%# Localization.GetString("Portal", this.LocalResourceFile)%>
                                            </td>
                                            <%
                                                }
                                                else
                                                {%>
                                            <td style="width: 180px;">
                                                <%# Localization.GetString("Portal", this.LocalResourceFile)%>
                                            </td>
                                            <%
                                                }%>
                                        </tr>
                                    </tbody>
                                </table>
                            </HeaderTemplate>
                            <ItemTemplate>
                                <%
                                                if (UserInfo.IsSuperUser)
                                                {%>
                                <table cellspacing="0" class="DnnGridNestedTable" style="width: 180px;">
                                    <%
                                                }
                                                else
                                                {%>
                                    <table cellspacing="0" class="DnnGridNestedTable" style="width: 60px;">
                                        <%
                                                }%>
                                        <tbody>
                                            <tr>
                                                <%
                                                if (UserInfo.IsSuperUser)
                                                {
                                                %>
                                                <td id="Td4" style="width: 60px; border-width: 0px">
                                                    <asp:HyperLink ID="editSystemLink" runat="server" NavigateUrl='<%# GetEditKeysUrl(Eval("Code").ToString(), "System") %>'>
                                                        <dnn:DnnImage ID="editSystemImage" runat="server" IconKey="Edit" resourcekey="System.Help" />
                                                    </asp:HyperLink>
                                                </td>
                                                <td id="Td3" style="width: 60px;" runat="server">
                                                    <asp:HyperLink ID="editHostLink" runat="server" NavigateUrl='<%# GetEditKeysUrl(Eval("Code").ToString(), "Host") %>'>
                                                        <dnn:DnnImage ID="editHostImage" runat="server" IconKey="Edit" resourcekey="Host.Help" />
                                                    </asp:HyperLink>
                                                </td>
                                                <%
                                                }%>
                                                <td style="width: 60px;">
                                                    <asp:HyperLink ID="editPortalLink" runat="server" NavigateUrl='<%# GetEditKeysUrl(Eval("Code").ToString(), "Portal") %>'>
                                                        <dnn:DnnImage ID="editPortalImage" runat="server" IconKey="Edit" resourcekey="Portal.Help" />
                                                    </asp:HyperLink>
                                                </td>
                                            </tr>
                                        </tbody>
                                    </table>
                            </ItemTemplate>
                        </dnn:DnnGridTemplateColumn>
                        <dnn:DnnGridTemplateColumn UniqueName="ContentLocalization" HeaderStyle-Width="204px">
                            <HeaderTemplate>
                                <table cellspacing="0" class="DnnGridNestedTable" style="width: 250px;">
                                    <caption>
                                        <%# Localization.GetString("Content.Header", this.LocalResourceFile)%></caption>
                                    <tr>
                                        <td style="width: 50px;">
                                            <dnn:DnnImage ID="pagesImage" runat="server" IconKey="Languages"
                                                resourcekey="LocalizePages" />
                                        </td>
                                        <td style="width: 50px;">
                                            <dnn:DnnImage ID="translatedImage" runat="server" IconKey="Translated"
                                                resourcekey="TranslatedPages" />
                                        </td>
                                        <td style="width: 75px;">
                                            <%# Localization.GetString("Active.Header", this.LocalResourceFile)%>
                                            <asp:Label ID="publishedMessageLabel" runat="server" CssClass="NormalRed" Text="*"
                                                Visible='<%# PortalSettings.ContentLocalizationEnabled %>' />
                                        </td>
                                        <td style="width: 75px;">
                                            <%# Localization.GetString("Publish.Header", this.LocalResourceFile)%>
                                            <asp:Label ID="Label1" runat="server" CssClass="NormalRed" Text="*"
                                                Visible='<%# PortalSettings.ContentLocalizationEnabled %>' />
                                        </td>
                                    </tr>
                                </table>
                            </HeaderTemplate>
                            <ItemTemplate>
                                <table cellspacing="0" class="DnnGridNestedTable" style="width: 250px;">
                                    <tr>
                                        <td style="width: 50px; border-width: 0px">
                                            <asp:PlaceHolder ID="localizationStatus" runat="server" Visible='<%# IsLocalized(Eval("Code").ToString()) %>'>
                                                <span><%# GetLocalizedPages(Eval("Code").ToString())%></span>
                                                <br />
                                                <span style="font-size: 0.8em"><%# GetLocalizedStatus(Eval("Code").ToString()) %></span> 
                                            </asp:PlaceHolder>
                                            <asp:HyperLink ID="localizeLink" runat="server" Visible='<%# !IsLocalized(Eval("Code").ToString()) && CanLocalize(Eval("Code").ToString()) %>'>
                                                <asp:Image ID="localizeImage" runat="server" ImageAlign="Middle" IconKey="Languages" ResourceKey="CreateLocalizedPages" />
                                            </asp:HyperLink>
                                        </td>
                                        <td style="width: 50px;">
                                            <span><%# GetTranslatedPages(Eval("Code").ToString())%></span>
                                            <br />
                                            <span style="font-size: 0.8em"><%# GetTranslatedStatus(Eval("Code").ToString())%></span>
                                        </td>
                                        <td style="width: 75px;">
                                            <dnn:DnnCheckBox ID="publishedCheckbox" runat="server" AutoPostBack="True" CommandArgument='<%# Eval("LanguageId") %>'
                                                Enabled='<%# IsLanguageEnabled(Eval("Code").ToString()) && !IsDefaultLanguage(Eval("Code").ToString()) %>'
                                                Checked='<%# IsLanguagePublished(Eval("Code").ToString()) %>' OnCheckedChanged="publishedCheckbox_CheckChanged"
                                                Visible='<%# IsLocalized(Eval("Code").ToString()) %>' />
                                        </td>
                                        <td style="width: 75px;">
                                            <dnn:DnnImageButton ID="publishButton" runat="server" ImageAlign="Middle" IconKey="PublishLanguage"
                                                CommandArgument='<%# Eval("Code") %>' Visible='<%# IsLanguageEnabled(Eval("Code").ToString()) && !IsDefaultLanguage(Eval("Code").ToString()) %>'
                                                ResourceKey="PublishTranslatedPages" OnCommand="PublishPages" />
                                        </td>
                                    </tr>
                                </table>
                            </ItemTemplate>
                        </dnn:DnnGridTemplateColumn>
                    </Columns>
                </MasterTableView>
            </dnn:DnnGrid>
        </div>
    </fieldset>
    <ul class="dnnActions dnnClear">
    	<li><asp:Hyperlink id="addLanguageLink" runat="server" CssClass="dnnPrimaryAction" resourcekey="AddLanguage" /></li>
    	<li><asp:Hyperlink id="installLanguagePackLink" runat="server" CssClass="dnnSecondaryAction" ResourceKey="InstallLanguage" /></li>
    	<li><asp:Hyperlink id="createLanguagePackLink" runat="server" CssClass="dnnSecondaryAction" ResourceKey="CreateLanguage"  /></li>
    	<li><asp:Hyperlink id="verifyLanguageResourcesLink" runat="server" CssClass="dnnSecondaryAction" ResourceKey="Verify"  /></li>
    </ul>
</div>
