<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Host.FriendlyUrls" CodeFile="FriendlyUrls.ascx.cs" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<asp:DataGrid ID="grdRules" AutoGenerateColumns="false" width="100%" GridLines="None" 
    CssClass="dnnGrid" Runat="server">
    <headerstyle CssClass="dnnGridHeader" />
    <itemstyle CssClass="dnnGridItem" />
    <alternatingitemstyle CssClass="dnnGridAltItem" />
    <edititemstyle />
    <selecteditemstyle />
    <footerstyle />
    <Columns>
		<asp:TemplateColumn HeaderText="Match">
		    <HeaderStyle  Width="47%" HorizontalAlign="Left" />
		    <ItemStyle  Width="47%" HorizontalAlign="Left" />
		    <ItemTemplate>
                <asp:label runat="server" Text='<%#DataBinder.Eval(Container.DataItem, "LookFor") %>' ID="lblMatch" />
		    </ItemTemplate>
		    <EditItemTemplate>
                <asp:textbox runat="server" Text='<%#DataBinder.Eval(Container.DataItem, "LookFor") %>' ID="txtMatch" />
		    </EditItemTemplate>
		</asp:TemplateColumn>
		<asp:TemplateColumn HeaderText="ReplaceWith">
		    <HeaderStyle  Width="200px" HorizontalAlign="Left" />
		    <ItemStyle  Width="200px" HorizontalAlign="Left" />
		    <ItemTemplate>
                <asp:label runat="server" Text='<%#DataBinder.Eval(Container.DataItem, "SendTo") %>' ID="lblReplace" />
		    </ItemTemplate>
		    <EditItemTemplate>
                <asp:textbox runat="server" Text='<%#DataBinder.Eval(Container.DataItem, "SendTo") %>' ID="txtReplace" />
		    </EditItemTemplate>
		</asp:TemplateColumn>
        <asp:TemplateColumn>
            <ItemStyle HorizontalAlign="Right"></ItemStyle>
            <EditItemTemplate>
	            <dnn:DnnImageButton Runat="server" ID="lnkSave" resourcekey="saveRule" OnCommand="SaveRule" IconKey="Save" />
            </EditItemTemplate>
        </asp:TemplateColumn>
        <asp:TemplateColumn>
            <ItemStyle HorizontalAlign="Right"></ItemStyle>
            <EditItemTemplate>
	            <dnn:DnnImageButton Runat="server" ID="lnkCancelEdit" resourcekey="cmdCancel" OnCommand="CancelEdit" IconKey="Cancel" />
            </EditItemTemplate>
        </asp:TemplateColumn>
		<dnn:imagecommandcolumn commandname="Edit" IconKey="Edit" />
		<dnn:imagecommandcolumn commandname="Delete" IconKey="Delete" />
    </Columns>
</asp:DataGrid>
<ul class="dnnActions rfAddRule dnnClear"><li><asp:LinkButton ID="cmdAddRule" runat="server" resourcekey="cmdAdd" CssClass="dnnPrimaryAction" /></li></ul>