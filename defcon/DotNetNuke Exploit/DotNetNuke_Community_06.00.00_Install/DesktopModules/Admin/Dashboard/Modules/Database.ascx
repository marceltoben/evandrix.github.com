<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Dashboard.Controls.Database" CodeFile="Database.ascx.cs" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls"%>
<div class="dnnForm dnnDatabase dnnClear">
    <dnn:propertyeditorcontrol id="ctlDbInfo" runat="Server"
        autogenerate = "false"
        enableclientvalidation = "true"
        sortmode="SortOrderAttribute" 
        helpstyle-cssclass="dnnFormHelpContent dnnClear" 
        editmode="View" 
        errorstyle-cssclass="dnnFormMessage dnnFormError">
        <Fields>
            <dnn:FieldEditorControl ID="fldProductVersion" runat="server" DataField="ProductVersion" />
            <dnn:FieldEditorControl ID="fldServicePack" runat="server" DataField="ServicePack" />
            <dnn:FieldEditorControl ID="fldProductEdition" runat="server" DataField="ProductEdition" />
            <dnn:FieldEditorControl ID="fldSoftwarePlatform" runat="server" DataField="SoftwarePlatform" />
        </Fields>
    </dnn:propertyeditorcontrol>    
    <h2><asp:label id="plBackups" runat="Server" resourcekey="plBackups" /></h2>
    <fieldset>
        <asp:GridView ID="grdBackups" runat="server" GridLines="None" AutoGenerateColumns="false"  EnableViewState="False" CssClass="dnnGrid" >
        <headerstyle cssclass="dnnGridHeader" verticalalign="Top" />
        <RowStyle cssclass="dnnGridItem" horizontalalign="Left" />
        <AlternatingRowStyle cssclass="dnnGridAltItem" />
        <footerstyle cssclass="dnnGridFooter" />
        <pagerstyle cssclass="dnnGridPager" />
            <Columns>
                <asp:BoundField DataField="name" HeaderText="BackupName" />
                <asp:BoundField DataField="StartDate" DataFormatString="{0:d}" HeaderText="Started" />
                <asp:BoundField DataField="FinishDate" DataFormatString="{0:d}" HeaderText="Finished" />
                <asp:BoundField DataField="Size" DataFormatString="{0:n}" HeaderText="BackupSize" />
                <asp:BoundField DataField="BackupType" HeaderText="BackupType" />
            </Columns>
            <EmptyDataTemplate>
                <div class="dnnFormMessage dnnFormWarning"><%= NoBackups %></div>
            </EmptyDataTemplate>
        </asp:GridView>
    </fieldset>
    <h2><asp:Label id="plFiles" runat="Server" resourcekey="plFiles" /></h2>
    <asp:GridView ID="grdFiles" runat="server" AutoGenerateColumns="False" EnableViewState="False" CssClass="dnnGrid" GidLines="None">
        <headerstyle cssclass="dnnGridHeader" verticalalign="Top" />
        <RowStyle cssclass="dnnGridItem" horizontalalign="Left" />
        <AlternatingRowStyle cssclass="dnnGridAltItem" />
        <footerstyle cssclass="dnnGridFooter" />
        <pagerstyle cssclass="dnnGridPager" />
        <Columns>
            <asp:BoundField DataField="Name" HeaderText="Name" />
            <asp:BoundField DataField="Megabytes" DataFormatString="{0:n} Mb" HeaderText="Size" />
            <asp:BoundField DataField="FileType" HeaderText="FileType" />
            <asp:TemplateField HeaderText="FileName">
                <ItemTemplate>
                    <asp:Label ID="Label1" runat="server" Text='<%# Bind("ShortFileName") %>'></asp:Label>
                </ItemTemplate>
            </asp:TemplateField>
        </Columns>
        <EmptyDataTemplate>
            <div class="dnnFormMessage dnnFormWarning"><%= NoBackups %></div>
        </EmptyDataTemplate>
    </asp:GridView>
</div>