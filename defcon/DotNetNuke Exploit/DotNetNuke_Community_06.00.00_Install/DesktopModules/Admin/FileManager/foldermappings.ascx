<%@ Control Language="C#" AutoEventWireup="false" CodeFile="foldermappings.ascx.cs" Inherits="DotNetNuke.Modules.Admin.FileManager.FolderMappings" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<%@ Register TagPrefix="telerik" Namespace="Telerik.Web.UI" Assembly="Telerik.Web.UI" %>
<script language="javascript" type="text/javascript">
<!--
    function grdMappings_OnRowDragStarted(sender, args) {
        if (sender.get_id() == "<%=grdMappings.ClientID %>") {
            var node = args.get_gridDataItem();
            if (node._itemIndexHierarchical < 3) {
                args.set_cancel(true);
            }
        }
    }

    function grdMappings_OnRowDropping(sender, args) {
        if (sender.get_id() == "<%=grdMappings.ClientID %>") {
            if (args._targetItemIndexHierarchical == "0" ||
            args._targetItemIndexHierarchical == "1" ||
            (args._targetItemIndexHierarchical == "2" && args._dropPosition == "above")) {
                args.set_cancel(true);
            }
        }
    }
-->
</script>
<div class="dnnForm dnnFolderMappings dnnClear">
    <div class="dnnFormMessage dnnFormInfo"><asp:Label ID="lbDescription" runat="server" resourcekey="Description.Text" /></div>
    <div>
        <h2><asp:Label ID="lbTableHeader" runat="server" resourcekey="TableHeader.Text" /></h2>
        <dnn:dnngrid id="grdMappings" runat="server" autogeneratecolumns="false" Width="98%" OnRowDrop="grdMappings_OnRowDrop" OnNeedDataSource="grdMappings_NeedDataSource" AllowAutomaticUpdates="false" AllowAutomaticDeletes="false" OnItemCommand="grdMappings_ItemCommand" OnItemDataBound="grdMappings_ItemDataBound">
            <MasterTableView DataKeyNames="FolderMappingID">
                <Columns>
                    <telerik:GridDragDropColumn HeaderStyle-Width="18px" />
                    <dnn:DnnGridTemplateColumn HeaderStyle-Width="60px">
                        <ItemTemplate>
                            <dnn:commandbutton id="cmdEditMapping" runat="server" IconKey="Edit" commandname="Edit" commandargument='<%# Eval("FolderMappingID") %>' causesvalidation="false" visible='<%# Eval("IsEditable") %>' />
                            <dnn:commandbutton id="cmdDeleteMapping" runat="server" IconKey="Delete" commandname="Delete" commandargument='<%# Eval("FolderMappingID") %>' causesvalidation="false" visible='<%# Eval("IsEditable") %>' />
                        </ItemTemplate>
                    </dnn:DnnGridTemplateColumn>
                    <dnn:DnnGridBoundColumn DataField="MappingName" HeaderText="Name" />
                    <dnn:DnnGridBoundColumn DataField="FolderProviderType" HeaderText="Type" />
                </Columns>
            </MasterTableView>
            <ClientSettings AllowRowsDragDrop="true">
                <Selecting AllowRowSelect="True" EnableDragToSelectRows="false" />
                <ClientEvents OnRowDragStarted="grdMappings_OnRowDragStarted" OnRowDropping="grdMappings_OnRowDropping" />
                <Scrolling AllowScroll="true" UseStaticHeaders="true" ScrollHeight="191" />
            </ClientSettings>
        </dnn:dnngrid>
    </div>
    <ul class="dnnActions dnnClear">
        <li><asp:LinkButton id="cmdNewMapping" resourcekey="cmdNewMapping" runat="server" cssclass="dnnPrimaryAction" causesvalidation="False" /></li>
        <li><asp:HyperLink id="cmdCancel" resourcekey="cmdCancel" runat="server" cssclass="dnnSecondaryAction" /></li>
    </ul>
</div>