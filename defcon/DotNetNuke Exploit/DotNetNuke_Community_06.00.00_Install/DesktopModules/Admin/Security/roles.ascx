<%@ Control Inherits="DotNetNuke.Modules.Admin.Security.Roles" Language="C#" AutoEventWireup="false" CodeFile="Roles.ascx.cs" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<div class="dnnForm dnnSecurityRoles">
    <div runat="server" id="divGroups">
        <div class="dnnFormItem">
            <dnn:label id="plRoleGroups" runat="server" suffix="" controlname="cboRoleGroups" />
            <asp:dropdownlist id="cboRoleGroups" Runat="server" AutoPostBack="True" />
			<asp:hyperlink ID="lnkEditGroup" runat="server">
				<dnn:dnnImage ID="imgEditGroup" IconKey="Edit" AlternateText="Edit" runat="server" resourcekey="Edit" />
			</asp:hyperlink>
			<dnn:DnnImagebutton ID="cmdDelete" Runat="server" IconKey="Delete" />
        </div>
    </div>
	<asp:datagrid id="grdRoles" Width="98%" AutoGenerateColumns="false" EnableViewState="false" runat="server" BorderStyle="None" GridLines="None" CssClass="dnnGrid">
        <headerstyle cssclass="dnnGridHeader" verticalalign="Top"/>
	    <itemstyle cssclass="dnnGridItem" horizontalalign="Left" />
	    <alternatingitemstyle cssclass="dnnGridAltItem" />
	    <edititemstyle cssclass="dnnFormInput" />
	    <selecteditemstyle cssclass="dnnFormError" />
	    <footerstyle cssclass="dnnGridFooter" />
	    <pagerstyle cssclass="dnnGridPager" />
		<columns>
			<dnn:imagecommandcolumn commandname="Edit" IconKey="Edit" editmode="URL" keyfield="RoleID" />
			<dnn:imagecommandcolumn commandname="UserRoles" IconKey="Users" editmode="URL" keyfield="RoleID" />
			<asp:boundcolumn DataField="RoleName" HeaderText="Name">
			</asp:boundcolumn>
			<asp:boundcolumn DataField="Description" HeaderText="Description">
			</asp:boundcolumn>
			<asp:templatecolumn HeaderText="Fee">
				<itemtemplate>
					<asp:label runat="server" Text='<%#FormatPrice((float)DataBinder.Eval(Container.DataItem, "ServiceFee")) %>' ID="Label1" />
				</ItemTemplate>
			</asp:templatecolumn>
			<asp:templatecolumn HeaderText="Every">
				<itemtemplate>
					<asp:label runat="server" Text='<%#FormatPeriod((int)DataBinder.Eval(Container.DataItem, "BillingPeriod")) %>' ID="Label2" />
				</ItemTemplate>
			</asp:templatecolumn>
			<asp:boundcolumn DataField="BillingFrequency" HeaderText="Period" />
			<asp:templatecolumn HeaderText="Trial">
				<itemtemplate>
					<asp:label runat="server" Text='<%#FormatPrice((float)DataBinder.Eval(Container.DataItem, "TrialFee")) %>' ID="Label3" />
				</ItemTemplate>
			</asp:templatecolumn>
			<asp:templatecolumn HeaderText="Every">
				<itemtemplate>
					<asp:label runat="server" Text='<%#FormatPeriod((int)DataBinder.Eval(Container.DataItem, "TrialPeriod")) %>' ID="Label4" />
				</ItemTemplate>
			</asp:templatecolumn>
			<asp:boundcolumn DataField="TrialFrequency" HeaderText="Period" />
			<asp:templatecolumn HeaderText="Public">
				<itemtemplate>
					<dnn:DnnImage Runat="server" ID="imgApproved" IconKey="Checked" Visible='<%# DataBinder.Eval(Container.DataItem,"IsPublic") %>' />
					<dnn:DnnImage Runat="server" ID="imgNotApproved" IconKey="Unchecked" Visible='<%# !(bool)DataBinder.Eval(Container.DataItem,"IsPublic")%>' />
				</ItemTemplate>
			</asp:templatecolumn>
			<asp:templatecolumn HeaderText="Auto">
				<itemtemplate>
					<dnn:Dnnimage Runat="server" ID="Image1" IconKey="Checked" Visible='<%# DataBinder.Eval(Container.DataItem,"AutoAssignment") %>' />
					<dnn:Dnnimage Runat="server" ID="Image2" IconKey="Unchecked" Visible='<%# !(bool)DataBinder.Eval(Container.DataItem,"AutoAssignment") %>' />
				</ItemTemplate>
			</asp:templatecolumn>
		</columns>
	</asp:datagrid>
</div>
<script language="javascript" type="text/javascript">
/*globals jQuery, window, Sys */
(function ($, Sys) {
    function setupDnnRoles() {
        $('#<%= cmdDelete.ClientID %>').dnnConfirm({
            text: '<%= LocalizeString("DeleteItem") %>',
            yesText: '<%= Localization.GetString("Yes.Text", Localization.SharedResourceFile) %>',
            noText: '<%= Localization.GetString("No.Text", Localization.SharedResourceFile) %>',
            title: '<%= Localization.GetString("Confirm.Text", Localization.SharedResourceFile) %>'
        });
    }

    $(document).ready(function () {
        setupDnnRoles();
        Sys.WebForms.PageRequestManager.getInstance().add_endRequest(function () {
        	setupDnnRoles();
        });
    });
} (jQuery, window.Sys));
</script>