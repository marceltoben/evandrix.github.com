<%@ Control Inherits="DotNetNuke.Modules.Admin.Users.UserAccounts" Language="C#" AutoEventWireup="false" CodeFile="Users.ascx.cs" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<div class="dnnForm dnnUsers dnnClear" id="dnnUsers">
    <div class="dnnFormItem">
        <asp:textbox id="txtSearch" Runat="server" CssClass="dnnUserSearchInput" />
        <asp:dropdownlist id="ddlSearchType" Runat="server" CssClass="dnnUsersSearchFilter" />
        <asp:LinkButton ID="cmdSearch" runat="server" resourcekey="Search" CssClass="dnnPrimaryAction" />
    </div>
    <ul class="uLetterSearch">
        <asp:Repeater id="rptLetterSearch" Runat="server">
            <ItemTemplate>
                <li><asp:HyperLink ID="hlLetter" runat="server" NavigateUrl='<%# FilterURL((string)Container.DataItem,"1") %>' Text='<%# Container.DataItem %>'></asp:HyperLink></li>
            </ItemTemplate>
        </asp:Repeater>
    </ul>
    <div>
        <asp:datagrid id="grdUsers" AutoGenerateColumns="false" width="100%" CellPadding="2" GridLines="None" cssclass="dnnGrid dnnSecurityRolesGrid" Runat="server">
            <headerstyle cssclass="dnnGridHeader" verticalalign="Top" />
            <itemstyle cssclass="dnnGridItem" horizontalalign="Left" />
            <alternatingitemstyle cssclass="dnnGridAltItem" />
            <edititemstyle cssclass="dnnFormInput" />
            <selecteditemstyle cssclass="dnnFormError" />
            <footerstyle cssclass="dnnGridFooter" />
            <pagerstyle cssclass="dnnGridPager" />
            <columns>
                <dnn:imagecommandcolumn CommandName="Edit" IconKey="Edit" EditMode="URL" KeyField="UserID" />
                <dnn:imagecommandcolumn commandname="Delete" IconKey="ActionDelete" keyfield="UserID" />
                <dnn:imagecommandcolumn CommandName="UserRoles" IconKey="SecurityRoles" EditMode="URL" KeyField="UserID" />
                <dnn:imagecommandcolumn commandname="Restore" IconKey="Restore" keyfield="UserID" />
                <dnn:imagecommandcolumn commandname="Remove" IconKey="Delete" keyfield="UserID"  />
                <asp:templatecolumn>
                    <itemtemplate>
                        <dnn:DnnImage id="imgOnline" runat="Server" IconKey="userOnline" />		
                    </itemtemplate>
                </asp:templatecolumn>
                <dnn:textcolumn datafield="UserName" headertext="Username"/>
                <dnn:textcolumn datafield="FirstName" headertext="FirstName"/>
                <dnn:textcolumn datafield="LastName" headertext="LastName"/>
                <dnn:textcolumn datafield="DisplayName" headertext="DisplayName"/>
                <asp:TemplateColumn HeaderText="Address">
                    <itemTemplate>
                        <asp:Label ID="lblAddress" Runat="server" Text='<%# DisplayAddress(((UserInfo)Container.DataItem).Profile.Unit,((UserInfo)Container.DataItem).Profile.Street, ((UserInfo)Container.DataItem).Profile.City, ((UserInfo)Container.DataItem).Profile.Region, ((UserInfo)Container.DataItem).Profile.Country, ((UserInfo)Container.DataItem).Profile.PostalCode) %>'>
                        </asp:Label>
                    </itemTemplate>
                </asp:TemplateColumn>
                <asp:TemplateColumn HeaderText="Telephone">
                    <itemtemplate>
                        <asp:Label ID="Label4" Runat="server" Text='<%# DisplayEmail(((UserInfo)Container.DataItem).Profile.Telephone) %>'>
                        </asp:Label>
                    </ItemTemplate>
                </asp:TemplateColumn>
                <asp:TemplateColumn HeaderText="Email">
                    <itemtemplate>
                        <asp:Label ID="lblEmail" Runat="server" Text='<%# DisplayEmail(((UserInfo)Container.DataItem).Email) %>'>
                        </asp:Label>
                    </ItemTemplate>
                </asp:TemplateColumn>
                <asp:TemplateColumn HeaderText="CreatedDate">
                    <itemtemplate>
                        <asp:Label ID="lblLastLogin" Runat="server" Text='<%# DisplayDate(((UserInfo)Container.DataItem).Membership.CreatedDate) %>'>
                        </asp:Label>
                    </ItemTemplate>
                </asp:TemplateColumn>
                <asp:TemplateColumn HeaderText="LastLogin">
                    <itemtemplate>
                        <asp:Label ID="Label7" Runat="server" Text='<%# DisplayDate(((UserInfo)Container.DataItem).Membership.LastLoginDate) %>'>
                        </asp:Label>
                    </ItemTemplate>
                </asp:TemplateColumn>
                <asp:TemplateColumn HeaderText="Authorized"  HeaderStyle-HorizontalAlign="Center"  ItemStyle-HorizontalAlign="Center">
                    <itemtemplate>
                        <dnn:DnnImage Runat="server" ID="imgApproved" IconKey="Checked" Visible="False" />
                        <dnn:DnnImage Runat="server" ID="imgNotApproved" IconKey="Unchecked" Visible="False" />
                        <dnn:DnnImage Runat="server" ID="imgApprovedDeleted" IconKey="CheckedDisabled" Visible="False" />
                        <dnn:DnnImage Runat="server" ID="imgNotApprovedDeleted" IconKey="UncheckedDisabled" Visible="False" />
                    </ItemTemplate>
                </asp:TemplateColumn>
            </columns>
        </asp:datagrid>
        <dnn:pagingcontrol id="ctlPagingControl" runat="server"></dnn:pagingcontrol>
    </div>
</div>