<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Vendors.Vendors" CodeFile="Vendors.ascx.cs" %>
<%@ Register TagPrefix="dnnsc" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<div class="dnnForm dnnVendors dnnClear" id="dnnVendors">
	<div class="dnnFormItem">
		<asp:TextBox id="txtSearch" Runat="server" />
		<asp:DropDownList id="ddlSearchType" Runat="server">
			<asp:ListItem Value="name" resourcekey="Name.Header" />
			<asp:ListItem Value="email" resourcekey="Email.Header" />
		</asp:DropDownList>
		<asp:LinkButton ID="btnSearch" Runat="server" resourcekey="Search" />
		<div class="vPageSize dnnRight">
			<asp:Label ID="Label5" Runat="server" resourcekey="RecordsPage" />
			<asp:DropDownList id="ddlRecordsPerPage" Runat="server" AutoPostBack="True">
				<asp:ListItem Value="10">10</asp:ListItem>
				<asp:ListItem Value="25">25</asp:ListItem>
				<asp:ListItem Value="50">50</asp:ListItem>
				<asp:ListItem Value="100">100</asp:ListItem>
				<asp:ListItem Value="250">250</asp:ListItem>
			</asp:DropDownList>
		</div>
	</div>
	<ul class="vLetterSearch">
		<asp:Repeater id="rptLetterSearch" Runat="server">
			<ItemTemplate>
				<li><asp:HyperLink runat="server" NavigateUrl='<%# FilterURL(Container.DataItem.ToString(),"1") %>' Text='<%# Container.DataItem %>' ID="Hyperlink2" /></li>
			</ItemTemplate>
		</asp:Repeater>
	</ul>
	<asp:datagrid id="grdVendors" CellPadding="0" width="100%" AutoGenerateColumns="False" EnableViewState="False" runat="server" BorderStyle="None" BorderWidth="0px" GridLines="None" CssClass="dnnGrid">
		<headerstyle cssclass="dnnGridHeader" verticalalign="Top"/>
		<itemstyle cssclass="dnnGridItem" horizontalalign="Left" />
		<alternatingitemstyle cssclass="dnnGridAltItem" />
		<edititemstyle cssclass="dnnFormInput" />
		<selecteditemstyle cssclass="dnnFormError" />
		<footerstyle cssclass="dnnGridFooter" />
		<pagerstyle cssclass="dnnGridPager" />
		<Columns>
			<asp:TemplateColumn>
				<ItemStyle Width="20px"></ItemStyle>
				<ItemTemplate>
					<asp:HyperLink NavigateUrl='<%# FormatURL("VendorID",DataBinder.Eval(Container.DataItem,"VendorID").ToString()) %>' Visible="<%# IsEditable %>" runat="server" ID="Hyperlink1">
						<dnn:DnnImage IconKey="Edit" AlternateText="Edit" Visible="<%# IsEditable %>" runat="server" ID="Hyperlink1Image" resourcekey="Edit"/>
					</asp:HyperLink>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:BoundColumn DataField="VendorName" HeaderText="Name" />
			<asp:TemplateColumn HeaderText="Address">
				<ItemTemplate>
					<asp:Label ID="lblAddress" Runat="server" Text='<%# DisplayAddress(DataBinder.Eval(Container.DataItem, "Unit"),DataBinder.Eval(Container.DataItem, "Street"), DataBinder.Eval(Container.DataItem, "City"), DataBinder.Eval(Container.DataItem, "Region"), DataBinder.Eval(Container.DataItem, "Country"), DataBinder.Eval(Container.DataItem, "PostalCode")) %>'>
					</asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:BoundColumn DataField="Telephone" HeaderText="Telephone" />
			<asp:BoundColumn DataField="Fax" HeaderText="Fax" />
			<asp:BoundColumn DataField="Email" HeaderText="Email" />
			<asp:TemplateColumn HeaderText="Authorized">
				<ItemTemplate>
					<dnn:DnnImage Runat="server" ID="Image1" IconKey="Checked" Visible='<%# DataBinder.Eval(Container.DataItem,"Authorized") %>'/>
					<dnn:DnnImage Runat="server" ID="Image2" IconKey="Unchecked" Visible='<%# !(bool)DataBinder.Eval(Container.DataItem,"Authorized") %>'/>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:BoundColumn DataField="Banners" HeaderText="Banners" />
		</Columns>
	</asp:datagrid>
	<dnnsc:PagingControl id="ctlPagingControl" runat="server"></dnnsc:PagingControl>
</div>