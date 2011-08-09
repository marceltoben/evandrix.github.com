<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Syndication.FeedExplorerSettings" CodeFile="FeedExplorerSettings.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>

<table cellSpacing="2" cellPadding="5" summary="Feed Explorer Settings">
	<tr>
		<td class="SubHead" vAlign="top" nowrap><dnn:label id="plContentSource" runat="server" controlname="ContentSource" suffix=":"></dnn:label></td>
		<td class="NormalTextBox" vAlign="top">
			<asp:RadioButtonList id="ContentSource" CssClass="NormalTextBox" RepeatDirection="Vertical" RepeatColumns="1" runat="server">
			    <asp:ListItem Value="SolutionsExplorer" resourceKey="SolutionsExplorer" Selected="true">DotNetNuke Solutions Explorer</asp:ListItem>
			    <asp:ListItem Value="NewsExplorer" resourceKey="NewsExplorer">News Explorer</asp:ListItem>
			    <asp:ListItem Value="OpmlUrlFile" resourceKey="OpmlUrl">Custom OPML URL/File</asp:ListItem>
			    <asp:ListItem Value="OpmlText" resourceKey="OpmlText">Custom OPML Text</asp:ListItem>
			</asp:RadioButtonList> 
			<br />&nbsp;
		</td>
	</tr>
	<tr>
		<td class="SubHead" vAlign="top" nowrap><dnn:label id="plCustomOpmlUrlFile" runat="server" controlname="OpmlUrlFile" suffix=":"></dnn:label></td>
		<td class="NormalTextBox" vAlign="top">
			<asp:TextBox id="OpmlUrlFile" Runat="server" CssClass="NormalTextBox" Width="500px"></asp:TextBox>
		</td>
	</tr>
	<tr>
		<td class="SubHead" vAlign="top" nowrap><dnn:label id="plCustomOpmlText" runat="server" controlname="OpmlText" suffix=":"></dnn:label></td>
		<td class="NormalTextBox" vAlign="top">
			<asp:TextBox id="OpmlText" Runat="server" CssClass="NormalTextBox" Width="500px" Height="300px" TextMode="MultiLine" style="font-size:0.8em;"></asp:TextBox>
		</td>
	</tr>
	<tr>
	    <td colspan="2">&nbsp;</td>
	</tr>
	<tr>
		<td class="SubHead" vAlign="top" nowrap><dnn:label id="plTheme" runat="server" controlname="Theme" suffix=":"></dnn:label></td>
		<td class="NormalTextBox" vAlign="top">
		    <asp:DropDownList ID="Theme" runat="server" CssClass="NormalTextBox" Width="250px">
		        <asp:ListItem Value="Platinum">Platinum</asp:ListItem>
		        <asp:ListItem Value="Graphite">Graphite</asp:ListItem>
		    </asp:DropDownList>
		</td>
	</tr>
</table>
