<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.UI.UserControls.Help" %>
<div class="dnnForm dnnHelpControl">
	<fieldset>
        <div class="dnnFormItem dnnClear">
            <asp:Label ID="lblHelp" Runat="server" Width="100%" enableviewstate="False" />
        </div>
        <ul class="dnnActions dnnClear">
            <li><asp:HyperLink id="cmdHelp" Runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdHelp" Target="_new" enableviewstate="False" /></li>
            <li><asp:linkbutton id="cmdCancel" runat="server" class="dnnSecondaryAction" resourcekey="cmdCancel" causesvalidation="False" enableviewstate="False" /></li>
        </ul>
        <div class="dnnFormItem"><asp:Label ID="lblInfo" Runat="server" Width="100%" enableviewstate="False" /></div>
    </fieldset>
</div>