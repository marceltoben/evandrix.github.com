<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Portals.Portals" CodeFile="Portals.ascx.cs" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<div class="dnnForm dnnPortals dnnClear" id="dnnPortals">
	<ul class="vLetterSearch">
		<asp:Repeater id=rptLetterSearch Runat="server">
			<itemtemplate>
				<li><asp:HyperLink ID="HyperLink1" runat="server" NavigateUrl='<%# FilterURL(Container.DataItem.ToString(),"1") %>' Text='<%# Container.DataItem.ToString() %>' /></li>
			</ItemTemplate>
		</asp:Repeater>
	</ul>
	<asp:DataGrid ID="grdPortals" runat="server" Width="100%" AutoGenerateColumns="false" GridLines="None" cssclass="dnnPortalsGrid">
		<headerstyle cssclass="dnnGridHeader" verticalalign="Top"/>
		<itemstyle cssclass="dnnGridItem" horizontalalign="Left" />
		<alternatingitemstyle cssclass="dnnGridAltItem" />
		<edititemstyle cssclass="dnnFormInput" />
		<selecteditemstyle cssclass="dnnFormError" />
		<footerstyle cssclass="dnnGridFooter" />
		<pagerstyle cssclass="dnnGridPager" />
		<Columns>
			<dnn:imagecommandcolumn CommandName="Edit" IconKey="Edit" EditMode="URL" KeyField="PortalID" />
			<dnn:imagecommandcolumn commandname="Delete" IconKey="Delete" keyfield="PortalID" />
			<asp:TemplateColumn HeaderText="PortalId">
				<ItemTemplate>
					<asp:Label ID="lblPortalId" runat="server" Text='<%# DataBinder.Eval(Container.DataItem, "PortalId") %>' />
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Title">
				<ItemTemplate>
					<asp:Label ID="lblPortal" runat="server" Text='<%# DataBinder.Eval(Container.DataItem, "PortalName") %>' />
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Portal Aliases">
				<ItemTemplate>
					<asp:Label ID="lblPortalAliases" runat="server" Text='<%# FormatPortalAliases(Convert.ToInt32(DataBinder.Eval(Container.DataItem, "PortalID").ToString())) %>' />
				</ItemTemplate>
			</asp:TemplateColumn>
			<dnn:textcolumn DataField="Users" HeaderText="Users" />
			<dnn:textcolumn DataField="Pages" HeaderText="Pages"/>
			<dnn:textcolumn DataField="HostSpace" HeaderText="DiskSpace"/>
			<asp:BoundColumn DataField="HostFee" HeaderText="HostingFee" DataFormatString="{0:0.00}" />
			<asp:TemplateColumn HeaderText="Expires" >
				<ItemTemplate>
					<asp:Label runat="server" Text='<%#FormatExpiryDate((DateTime)DataBinder.Eval(Container.DataItem, "ExpiryDate")) %>' ID="Label1" />
				</ItemTemplate>
			</asp:TemplateColumn>
		</Columns>
	</asp:DataGrid>
	<dnn:pagingcontrol id=ctlPagingControl runat="server"></dnn:pagingcontrol>
</div>