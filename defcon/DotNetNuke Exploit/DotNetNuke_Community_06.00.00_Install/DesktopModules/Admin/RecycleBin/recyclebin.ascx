<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.RecycleBin.RecycleBin" CodeFile="RecycleBin.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="HelpButton" Src="~/controls/HelpButtonControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="SectionHead" Src="~/controls/SectionHeadControl.ascx" %>
<div class="dnnForm dnnRecycleBin dnnClear" id="dnnRecycleBin">
    <ul class="dnnAdminTabNav dnnClear">
		<li><a href="#rbTabs"><%=LocalizeString("Tabs")%></a></li>
		<li><a href="#rbModules"><%=LocalizeString("Modules")%></a></li>
	</ul>
    <div id="divMode" runat="server">
        <asp:RadioButtonList ID="modeButtonList" runat="server" RepeatDirection="Horizontal" AutoPostBack="true" CssClass="dnnFormRadioButtons">
            <asp:ListItem Value="ALL" Selected="True" resourcekey="allLocales" />
            <asp:ListItem Value="SINGLE" resourcekey="singleLocale" />
        </asp:RadioButtonList>
    </div>
    <div class="rbTabs dnnClear" id="rbTabs">
        <div class="rbtContent dnnClear">
            <fieldset>
                <div class="dnnFormItem"><asp:ListBox ID="lstTabs" runat="server" Width="450px" Rows="14" DataTextField="TabName" DataValueField="TabId" SelectionMode="Multiple" /></div>
                <div runat="server" id="divTabButtons">
                    <ul class="dnnActions">
                        <li><asp:LinkButton ID="cmdRestoreTab" runat="server" resourcekey="cmdRestoreTab" CssClass="dnnSecondaryAction cmdRestoreTab" /></li>
                        <li><asp:LinkButton ID="cmdDeleteTab" runat="server" resourcekey="cmdDeleteTab" CssClass="dnnSecondaryAction cmdDeleteTab" /></li>
                    </ul>     
                </div>
            </fieldset>
        </div>
    </div>
    <div class="rbModules dnnClear" id="rbModules">
        <div class="rbmContent dnnClear">
            <fieldset>
                <div class="dnnFormItem"><asp:ListBox ID="lstModules" runat="server" Width="450px" Rows="14" SelectionMode="Multiple" /></div>
                <div id="divModuleButtons" runat="server">
                    <ul class="dnnActions">
                        <li><asp:LinkButton ID="cmdRestoreModule" runat="server" resourcekey="cmdRestoreModule" CssClass="dnnSecondaryAction" /></li>
                        <li><asp:LinkButton ID="cmdDeleteModule" runat="server" resourcekey="cmdDeleteModule" CssClass="dnnSecondaryAction cmdDeleteModule" /></li>
                    </ul>     
                </div>
            </fieldset>
        </div>
    </div>
    <ul class="dnnActions dnnClear">
        <li><asp:LinkButton ID="cmdEmpty" resourcekey="cmdEmpty" CssClass="dnnPrimaryAction dnnEmptyBin" runat="server" /></li>
    </ul>
</div>

<script type="text/javascript">
	(function ($, Sys) {
		var setUpRecycleBin = function () {
			$('#dnnRecycleBin').dnnTabs();

			var yesText = '<%= Localization.GetString("Yes.Text", Localization.SharedResourceFile) %>';
			var noText = '<%= Localization.GetString("No.Text", Localization.SharedResourceFile) %>';
			var titleText = '<%= Localization.GetString("Confirm.Text", Localization.SharedResourceFile) %>';
			$('#<%= cmdEmpty.ClientID %>').dnnConfirm({
				text: '<%= LocalizeString("DeleteAll") %>',
				yesText: yesText,
				noText: noText,
				title: titleText
			});
			$('#<%= cmdDeleteTab.ClientID %>').dnnConfirm({
				text: '<%= LocalizeString("DeleteTab") %>',
				yesText: yesText,
				noText: noText,
				title: titleText
			});
			$('#<%= cmdDeleteModule.ClientID %>').dnnConfirm({
				text: '<%= LocalizeString("DeleteModule") %>',
				yesText: yesText,
				noText: noText,
				title: titleText
			});
		}

		$(document).ready(function () {
			setUpRecycleBin();
			Sys.WebForms.PageRequestManager.getInstance().add_endRequest(function () {
				setUpRecycleBin();
			});

		});
	} (jQuery, window.Sys));
	
</script>