<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Console.ViewConsole" CodeFile="ViewConsole.ascx.cs" %>

<script type="text/javascript">
	jQuery(document).ready(function($) {
		$("#<%=Console.ClientID %>").dnnConsole({<%=GetClientSideSettings() %>});
	});
</script>

<div id="Console" runat="server" class="console">
	<asp:DropDownList ID="IconSize" runat="server" />
	<asp:DropDownList ID="View" runat="server" />
	<br id="SettingsBreak" runat="server" style="clear:both" />
	<div>
	<asp:Repeater ID="DetailView" runat="server">
		<ItemTemplate><%#GetHtml(Container.DataItem)%></ItemTemplate>
	</asp:Repeater>
	</div>
	<br style="clear:both" />
</div>
