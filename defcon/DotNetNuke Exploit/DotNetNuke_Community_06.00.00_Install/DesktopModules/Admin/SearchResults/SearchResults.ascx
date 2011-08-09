<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.SearchResults.SearchResults" CodeFile="SearchResults.ascx.cs" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<div class="dnnForm dnnSearchResults dnnClear">
    <asp:label ID="lblMessage" runat="server" />
    <asp:Datagrid id="dgResults" runat="server" AutoGenerateColumns="False" AllowPaging="true" BorderStyle="None" ShowHeader="False" GridLines="None" PagerStyle-Visible="false">
	    <itemstyle cssclass="dnnGridItem" horizontalalign="Left" />
	    <alternatingitemstyle cssclass="dnnGridAltItem" />
	    <footerstyle cssclass="dnnGridFooter" />
	    <Columns>
		    <asp:TemplateColumn>
			    <ItemTemplate>
				    <asp:Label id="lblNo" runat="server" Text='<%# (int)DataBinder.Eval(Container, "ItemIndex") + 1 %>' CssClass="SubHead" />
			    </ItemTemplate>
		    </asp:TemplateColumn>
		    <asp:TemplateColumn>
			    <ItemTemplate>
				    <asp:HyperLink id="lnkTitle" runat="server" CssClass="SubHead" NavigateUrl='<%# FormatURL((int)DataBinder.Eval(Container.DataItem,"TabId"),(string)DataBinder.Eval(Container.DataItem,"Guid")) %>' Text='<%# DataBinder.Eval(Container.DataItem, "Title") %>' />
				    <asp:Label id="lblRelevance" runat="server" CssClass="Normal" Text='<%# FormatRelevance((int)DataBinder.Eval(Container.DataItem, "Relevance")) %>' />
				    <br/>
				    <asp:Label id="lblSummary" runat="server" CssClass="Normal" Text='<%# DataBinder.Eval(Container.DataItem, "Description") + "<br>" %>' Visible="<%# !String.IsNullOrEmpty(ShowDescription()) %>" />
				    <asp:HyperLink id="lnkLink" runat="server" CssClass="CommandButton" NavigateUrl='<%# FormatURL((int)DataBinder.Eval(Container.DataItem,"TabId"),(string)DataBinder.Eval(Container.DataItem,"Guid")) %>' Text='<%# FormatURL((int)DataBinder.Eval(Container.DataItem,"TabId"),(string)DataBinder.Eval(Container.DataItem,"Guid")) %>'/>&nbsp;-
				    <asp:Label id="lblPubDate" runat="server" CssClass="Normal" Text='<%# FormatDate((DateTime)DataBinder.Eval(Container.DataItem, "PubDate")) %>'/>
			    </ItemTemplate>
		    </asp:TemplateColumn>
	    </Columns>
    </asp:Datagrid>
    <dnn:pagingcontrol id=ctlPagingControl runat="server" Mode="PostBack"/>
</div>