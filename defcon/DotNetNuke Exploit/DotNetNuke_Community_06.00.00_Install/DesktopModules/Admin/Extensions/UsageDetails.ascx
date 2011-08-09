<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Extensions.UsageDetails" CodeFile="UsageDetails.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>                
<h2 class="dnnFormSectionHead"><asp:Literal ID="lblTitle" runat="server" /></h2>
<asp:UpdatePanel ID="PnlUsageDetails" runat="server" ChildrenAsTriggers="true">
    <ContentTemplate>
        <table id="tblFilterUsage" runat="server" cellspacing="0" cellpadding="4" border="0">
            <tr>
                <td width="150px" nowrap="nowrap"><dnn:Label ID="lblFilterUsageList" runat="server" ControlName="FilterUsageList" /></td>
                <td width="99%" align="left"><asp:DropDownList ID="FilterUsageList" runat="server" AutoPostBack="true" OnSelectedIndexChanged="FilterUsageList_SelectedIndexChanged" /></td>
            </tr>
        </table>
        <asp:Label ID="UsageListMsg" runat="server" />
        <asp:GridView ID="UsageList" runat="server" AutoGenerateColumns="false" PageSize="100" AllowPaging="true" GridLines="None" CellPadding="0" EnableViewState="False" CssClass="dnnGrid">
            <HeaderStyle Wrap="False" CssClass="dnnGridHeader"/>
            <PagerSettings Mode="NextPreviousFirstLast" />
            <Columns>
                <asp:TemplateField HeaderText="Page">
                    <ItemTemplate>
                        <%#GetFormattedLink(Container.DataItem)%>
                    </ItemTemplate>
                </asp:TemplateField>
            </Columns>
        </asp:GridView>
    </ContentTemplate>
</asp:UpdatePanel>