<%@ Control Language="C#" AutoEventWireup="false" CodeFile="editfoldermapping.ascx.cs" Inherits="DotNetNuke.Modules.Admin.FileManager.EditFolderMapping" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<div class="dnnForm dnnEditFolderMapping dnnClear" id="dnnEditFolderMapping">
	<div class="dnnFormMessage dnnFormInfo"><asp:Label ID="lbDescription" runat="server" resourcekey="Description"></asp:Label></div>
    <asp:PlaceHolder id="phSyncWarning" runat="server">
        <div class="dnnFormMessage dnnFormInfo"><asp:Label runat="server" Visible="true" ResourceKey="SyncWarning" /></div>
    </asp:PlaceHolder>
    <div class="EditFolderMappingContent dnnClear">
        <div class="dnnFormItem dnnFormHelp dnnClear"><p class="dnnFormRequired"><span><%=LocalizeString("RequiredFields")%></span></p></div>
        <div id="exFolderMappingSettings" class="exFolderMappingSettings dnnClear">
            <div class="exfmsContent dnnClear">
                <h2 id="Panel-GeneralSettings" class="dnnFormSectionHead"><%=LocalizeString("GeneralSettings")%></h2>
                <fieldset>
                    <div class="dnnFormItem">
                        <dnn:label id="plName" runat="server" controlname="txtName" />
                        <asp:TextBox ID="txtName" CssClass="dnnFormRequired" runat="server" MaxLength="50"></asp:TextBox>
                        <asp:RequiredFieldValidator ID="valName" runat="server" ControlToValidate="txtName" Display="Dynamic" CssClass="dnnFormMessage dnnFormError" resourcekey="valName.ErrorMessage" ValidationGroup="vgEditFolderMapping"></asp:RequiredFieldValidator>
                    </div>
                    <div class="dnnFormItem">
                        <dnn:label id="plFolderProvider" runat="server" controlname="cboFolderProviders" />
                        <asp:DropDownList ID="cboFolderProviders" runat="server" AutoPostBack="true" CausesValidation="false" OnSelectedIndexChanged="cboFolderProviders_SelectedIndexChanged"></asp:DropDownList>
                        <asp:RequiredFieldValidator ID="valFolderProvider" runat="server" ControlToValidate="cboFolderProviders" InitialValue="" Display="Dynamic" CssClass="dnnFormMessage dnnFormError" resourcekey="valFolderProvider.ErrorMessage" EnableClientScript="false" ValidationGroup="vgEditFolderMapping"></asp:RequiredFieldValidator>
                    </div>
                </fieldset>
                <h2 id="Panel-FolderProviderSettings" class="dnnFormSectionHead"><%=LocalizeString("FolderProviderSettings")%></h2>
                <fieldset>
                    <asp:PlaceHolder ID="phProviderSettings" runat="server"></asp:PlaceHolder>
                </fieldset>
            </div>
        </div>
    </div>
    <ul class="dnnActions dnnClear">
        <li><dnn:CommandButton ID="cmdUpdate" runat="server" CssClass="dnnPrimaryAction" ResourceKey="cmdUpdate" IconKey="Add" ValidationGroup="vgEditFolderMapping" /></li>
        <li><asp:HyperLink ID="cancelHyperLink" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdCancel" /></li>
    </ul>
</div>