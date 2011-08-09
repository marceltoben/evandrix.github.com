<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.UI.UserControls.LabelControl" %>
<div class="dnnTooltip">
    <label id="label" runat="server">
        <asp:LinkButton ID="cmdHelp" TabIndex="-1" runat="server" CausesValidation="False" EnableViewState="False" CssClass="dnnFormHelp">
            <asp:Label ID="lblLabel" runat="server" EnableViewState="False" />
        </asp:LinkButton>
        <asp:Label ID="lblNoHelpLabel" runat="server" EnableViewState="False" Visible="false" />
    </label>
    <asp:Panel ID="pnlHelp" runat="server" CssClass="dnnFormHelpContent dnnClear" EnableViewState="False" style="display:none;">
        <asp:Label ID="lblHelp" runat="server" EnableViewState="False" class="dnnHelpText" />
        <a href="#" class="pinHelp"></a>
    </asp:Panel>
</div>