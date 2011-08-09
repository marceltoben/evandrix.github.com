<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Portals.PortalAliases" CodeFile="PortalAliases.ascx.cs" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.Web.UI.WebControls" Assembly="DotNetNuke.Web" %>
<asp:DataGrid ID="dgPortalAlias" Runat="server" AutoGenerateColumns="false" width="100%" GridLines="None" CssClass="dnnGrid">
    <headerstyle CssClass="dnnGridHeader" />
    <itemstyle CssClass="dnnGridItem" horizontalalign="Left" />
    <alternatingitemstyle CssClass="dnnGridAltItem" />
    <edititemstyle />
    <selecteditemstyle />
    <footerstyle />
	<Columns>
		<dnn:imagecommandcolumn commandname="Edit" IconKey="Edit"/>
		<dnn:imagecommandcolumn commandname="Delete" IconKey="Delete" />
		<asp:TemplateColumn HeaderText="HTTPAlias">
		    <HeaderStyle  HorizontalAlign="Left" />
		    <ItemStyle  HorizontalAlign="Left" Width="85%" />
		    <ItemTemplate>
                <asp:label runat="server" Text='<%#DataBinder.Eval(Container.DataItem, "HTTPAlias") %>' ID="lbHTTPAlias" />
		    </ItemTemplate>
		    <EditItemTemplate>
                <asp:textbox runat="server" Text='<%#DataBinder.Eval(Container.DataItem, "HTTPAlias") %>' ID="txtHTTPAlias" CssClass="dnnFormInput" />
                <asp:CheckBox ID="chkChild" runat="server" resourcekey="createChild" />
		    </EditItemTemplate>
		</asp:TemplateColumn>
        <asp:TemplateColumn>
            <EditItemTemplate>
	            <dnn:DnnImageButton Runat="server" ID="lnkSave" resourcekey="saveRule" OnCommand="SaveAlias" IconKey="Save" />
            </EditItemTemplate>
        </asp:TemplateColumn>
        <asp:TemplateColumn>
            <EditItemTemplate>
	            <dnn:DnnImageButton Runat="server" ID="lnkCancelEdit" resourcekey="cmdCancel" OnCommand="CancelEdit" IconKey="Cancel" />
            </EditItemTemplate>
        </asp:TemplateColumn>
	</Columns>
</asp:DataGrid>
<asp:Label ID="lblError" runat="server" Visible="false" CssClass="dnnFormMessage dnnFormError" />
<dnn:CommandButton ID="cmdAddAlias" runat="server" ResourceKey="cmdAdd" IconKey="Add" />