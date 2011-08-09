<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.UI.ControlPanel.AddModule"
    CodeFile="AddModule.ascx.cs" %>
<%@ Register Assembly="Telerik.Web.UI" Namespace="Telerik.Web.UI" TagPrefix="telerik" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.Web.UI.WebControls" Assembly="DotNetNuke.Web" %>
<asp:UpdatePanel ID="UpdateAddModule" runat="server" ChildrenAsTriggers="true">
    <ContentTemplate>
        <div class="dnnCPAddModule">
            <h5><asp:Label runat="server" ResourceKey="AddModule" /></h5>
            <asp:RadioButton ID="AddNewModule" runat="server" ResourceKey="AddNew" GroupName="AddModule" Checked="true" AutoPostBack="true" />
            <asp:RadioButton ID="AddExistingModule" runat="server" ResourceKey="AddExisting" GroupName="AddModule" AutoPostBack="true" />
            <asp:HyperLink ID="hlMoreExtensions" runat="server" CssClass="dnnPrimaryAction" Visible="false" />
        </div>
        <div class="dnnCPModSelection dnnFormItem">
            <h5><asp:Label ID="Label1" runat="server" ResourceKey="SelectModule" /></h5>
            <asp:Panel ID="CategoryListPanel" runat="server" Visible="false" CssClass="dnnClear">
                <asp:Label ID="CategoryListLbl" runat="server" ResourceKey="Category" AssociatedControlID="CategoryList" />
                <asp:DropDownList ID="CategoryList" runat="server" MaxHeight="300px" AutoPostBack="true" DataTextField="Name" DataValueField="Name" />
            </asp:Panel>
            <asp:Panel ID="PageListPanel" runat="server" Visible="false" CssClass="dnnClear">
                <asp:Label ID="PageListLbl" runat="server" ResourceKey="Page" AssociatedControlID="PageLst" />
                <asp:DropDownList ID="PageLst" runat="server" MaxHeight="300px" AutoPostBack="true" />
            </asp:Panel>
            <div class="dnnClear">
                <asp:Label ID="ModuleLstLbl" runat="server" ResourceKey="Module" AssociatedControlID="ModuleLst" />
                <dnn:DnnModuleComboBox ID="ModuleLst" runat="server" />
            </div>
            <asp:Panel ID="TitlePanel" runat="server" Visible="true" CssClass="dnnClear">
                <asp:Label ID="TitleLbl" runat="server" ResourceKey="Title" AssociatedControlID="Title" />
                <asp:TextBox ID="Title" runat="server" />
            </asp:Panel>
            <div class="dnnClear">
                <asp:Label ID="VisibilityLstLbl" runat="server" ResourceKey="Visibility" AssociatedControlID="VisibilityLst" />
                <asp:DropDownList ID="VisibilityLst" runat="server" />
            </div>
        </div>
        <div class="dnnCPModLocation dnnFormItem">
            <h5><asp:Label ID="Label2" runat="server" ResourceKey="LocateModule" /></h5>
            <div class="dnnClear">
                <asp:Label ID="PaneLstLbl" runat="server" ResourceKey="Pane" AssociatedControlID="PaneLst" />
                <asp:DropDownList ID="PaneLst" runat="server" AutoPostBack="true" />
            </div>
            <div class="dnnClear">
                <asp:Label ID="PositionLstLbl" runat="server" ResourceKey="Insert" AssociatedControlID="PositionLst" />
                <asp:DropDownList ID="PositionLst" runat="server" AutoPostBack="true" />
            </div>
            <div class="dnnClear">
                <asp:Label ID="PaneModulesLstLbl" runat="server" ResourceKey="Module" AssociatedControlID="PaneModulesLst" />
                <asp:DropDownList ID="PaneModulesLst" runat="server" />
            </div>
            <div class="dnnFormCheckbox"><asp:CheckBox ID="chkCopyModule" runat="server" /></div>
        </div>
        <asp:LinkButton ID="cmdAddModule" runat="server"  ResourceKey="AddModule" CssClass="dnnPrimaryAction" />
    </ContentTemplate>
</asp:UpdatePanel>