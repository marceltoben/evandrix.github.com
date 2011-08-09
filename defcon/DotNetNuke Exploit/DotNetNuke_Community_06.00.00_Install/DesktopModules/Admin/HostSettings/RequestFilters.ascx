<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Host.RequestFilters" CodeFile="RequestFilters.ascx.cs" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<div id="lblErr" class="NormalRed" runat="server" visible="false"></div>
<asp:DataList ID="rptRules" runat="server" CssClass="dnnRequestFilter">
	<HeaderStyle CssClass="" />
    <FooterStyle CssClass="" />
    <ItemTemplate>
        <table width="100%">
            <tr>
                <td rowspan="5" valign="top">
                    <dnn:DnnImageButton ID="cmdEdit" runat="server" CommandName="Edit" IconKey="Edit" CausesValidation="false" />
                    <dnn:DnnImageButton ID="cmdDelete" runat="server" CommandName="Delete" IconKey="Delete" CausesValidation="false" />
                </td>
                <td width="188"><dnn:label id="plServerVar" runat="server" controlname="lblServerVar" suffix=":" /></td>
                <td ><asp:label runat="server" Text='<%#Eval("ServerVariable") %>' ID="lblServerVar" /></td>
            </tr>
            <tr>
                <td><dnn:label id="plOperator" runat="server" controlname="lblOperator" suffix=":" /></td>
                <td><asp:label runat="server" Text='<%#Eval("Operator") %>' ID="lblOperator" /></td>
            </tr>
            <tr>
                <td><dnn:label id="plValue" runat="server" controlname="lblValue" suffix=":" /></td>
                <td><asp:label runat="server" Text='<%#Eval("RawValue") %>' ID="lblValue" /></td>
            </tr>
            <tr>
                <td><dnn:label id="plAction" runat="server" controlname="lblAction" suffix=":" /></td>
                <td><asp:label runat="server" Text='<%#Eval("Action") %>' ID="lblAction" /></td>
            </tr>
            <tr>
                <td><dnn:label id="plLocation" runat="server" controlname="lblLocation" suffix=":" /></td>
                <td><asp:label runat="server" Text='<%#Eval("Location") %>' ID="lblLocation" /></td>
            </tr>
        </table>
    </ItemTemplate>
    <EditItemTemplate>
        <table width="100%">
            <tr>
                <td colspan="3"><div class="dnnFormMessage dnnFormWarning"><asp:Label ID="lblWarning" runat="server" Text="Simple warning" resourcekey="lblWarning" /></div></td>
            </tr>
            <tr>
                <td rowspan="5" valign="top">
                    <dnn:DnnImageButton ID="cmdSave" runat="server" CommandName="Update" IconKey="Save" CssClass="dnnPrimaryAction" />
                    <dnn:DnnImageButton ID="cmdDelete" runat="server" CommandName="Cancel" IconKey="Delete" CssClass="dnnSecondaryAction" CausesValidation="false" />
                </td>
                <td width="188"><dnn:label id="plServerVar" runat="server" controlname="txtServerVar" suffix=":" /></td>
                <td>
                    <asp:TextBox ID="txtServerVar" runat="server" Text='<%#Eval("ServerVariable") %>' />
                    <asp:Label ID="lblServerVarLink" runat="server" text="Simple Link" resourcekey="lblServerVarLink" />
                </td>
            </tr>
            <tr>
                <td><dnn:label id="plOperator" runat="server" controlname="ddlOperator" suffix=":" /></td>
                <td>
                    <asp:DropDownList ID="ddlOperator" runat="server">
                        <asp:ListItem>Equal</asp:ListItem>
                        <asp:ListItem>NotEqual</asp:ListItem>
                        <asp:ListItem>Regex</asp:ListItem>
                    </asp:DropDownList>
                </td>
            </tr>
            <tr>
                <td><dnn:label id="plValue" runat="server" controlname="txtValue" suffix=":" /></td>
                <td><asp:TextBox ID="txtValue" runat="server" Text='<%#Eval("RawValue") %>' /></td>
            </tr>
            <tr>
                <td><dnn:label id="plAction" runat="server" controlname="ddlAction" suffix=":" /></td>
                <td>
                    <asp:DropDownList ID="ddlAction" runat="server">
                        <asp:ListItem>Redirect</asp:ListItem>
                        <asp:ListItem>PermanentRedirect</asp:ListItem>
                        <asp:ListItem>NotFound</asp:ListItem>
                    </asp:DropDownList>
                </td>
            </tr>
            <tr>
                <td><dnn:label id="plLocation" runat="server" controlname="txtLocation" suffix=":" /></td>
                <td><asp:TextBox ID="txtLocation" runat="server" Text='<%#Eval("Location") %>' /></td>
            </tr>
        </table>
    </EditItemTemplate>
    <SeparatorTemplate><div></div></SeparatorTemplate>
</asp:DataList>
<ul class="dnnActions rfAddRule dnnClear"><li><asp:LinkButton ID="cmdAddRule" runat="server" resourcekey="cmdAdd" CssClass="dnnPrimaryAction" CausesValidation="false" /></li></ul>