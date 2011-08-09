<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Dashboard.Controls.Modules" CodeFile="Modules.ascx.cs" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls"%>
<div class="dnnForm dnnModules dnnClear">
    <asp:DataGrid ID="grdModules" runat="server" GridLines="None" AutoGenerateColumns="false" EnableViewState="False" CssClass="dnnGrid">
        <headerstyle cssclass="dnnGridHeader" verticalalign="Top" />
        <ItemStyle cssclass="dnnGridItem" horizontalalign="Left" />
        <AlternatingItemStyle cssclass="dnnGridAltItem" />
        <footerstyle cssclass="dnnGridFooter" />
        <pagerstyle cssclass="dnnGridPager" />
        <Columns>
            <asp:BoundColumn DataField="FriendlyName" HeaderText="Module" ItemStyle-Width="250px"/>
            <asp:BoundColumn DataField="Version" HeaderText="Version" ItemStyle-Width="100px"/>
            <asp:BoundColumn DataField="Instances" HeaderText="Instances" ItemStyle-Width="100px"/>
        </Columns>
    </asp:DataGrid>
</div>