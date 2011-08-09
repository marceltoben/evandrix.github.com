<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Console.Settings" CodeFile="Settings.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<div class="dnnForm dnnConsole dnnClear">
	<div class="dnnFormItem">
		<dnn:label id="lblParentTab" runat="server" ControlName="ParentTab" ResourceKey="ParentTab" Suffix=":" />
		<asp:DropDownList ID="ParentTab" runat="server" />
	</div>
	<div class="dnnFormItem">
		<dnn:label id="lblDefaultSize" runat="server" ControlName="DefaultSize" ResourceKey="DefaultSize" Suffix=":" />
		<asp:DropDownList ID="DefaultSize" runat="server" />
	</div>
	<div class="dnnFormItem">
		<dnn:label id="lblAllowResize" runat="server" ControlName="AllowResize" ResourceKey="AllowResize" Suffix=":" />
		 <asp:Checkbox ID="AllowResize" runat="server" Checked="true" />
	</div>
	<div class="dnnFormItem">
		<dnn:label id="lblDefaultView" runat="server" ControlName="DefaultView" ResourceKey="DefaultView" Suffix=":" />
		<asp:DropDownList ID="DefaultView" runat="server" />
	</div>
	<div class="dnnFormItem">
		<dnn:label id="lblAllowViewChange" runat="server" ControlName="AllowViewChange" ResourceKey="AllowViewChange" Suffix=":" />
		<asp:Checkbox ID="AllowViewChange" runat="server" Checked="true" />
	</div>
	<div class="dnnFormItem">
		<dnn:label id="lblShowTooltip" runat="server" ControlName="ShowTooltip" ResourceKey="ShowTooltip" Suffix=":" />
		<asp:Checkbox ID="ShowTooltip" runat="server" Checked="true" />
	</div>
	<div class="dnnFormItem">
		<dnn:label id="lblConsoleWidth" runat="server" ControlName="ConsoleWidth" ResourceKey="ConsoleWidth" Suffix=":" />
		<asp:TextBox ID="ConsoleWidth" runat="server" Text="" />
	</div>
</div>