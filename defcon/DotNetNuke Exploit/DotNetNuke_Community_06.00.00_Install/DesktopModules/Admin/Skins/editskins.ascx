<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Skins.EditSkins" CodeFile="EditSkins.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<div class="dnnForm dnnEditSkins dnnClear" id="dnnEditSkins">
	<fieldset>
		<legend></legend>
		<div id="typeRow" runat="server" class="dnnFormItem">
			<dnn:label id="plType" runat="server"/>
			<asp:checkbox id="chkHost" cssclass="esCheckBoxes" Runat="server" resourcekey="Host" AutoPostBack="True" Checked="True" />
			<asp:checkbox id="chkSite" cssclass="esCheckBoxes" Runat="server" resourcekey="Site" AutoPostBack="True" Checked="True" />
		</div>
		<div class="dnnFormItem">
			<dnn:label id="plSkins" controlname="cboSkins" runat="server" />
			<asp:dropdownlist id="cboSkins" Runat="server" AutoPostBack="True" />
		</div>
		<div class="dnnFormItem">
			<dnn:label id="plContainers" controlname="cboContainers" runat="server" />
			<asp:dropdownlist id="cboContainers" Runat="server" AutoPostBack="True" />
			<div class="legacySkinNotice">
				<asp:Label ID="lblLegacy" runat="server" class="dnnFormMessage dnnFormWarning" resourcekey="LegacySkin" Visible="false" />
			</div>	
		</div>
		<asp:panel id="pnlSkin" Runat="server" Visible="False" Cssclass="dnnFormItem">
			<dnn:label id="lblApply" runat="server" ControlName="chkPortal" Suffix=":" />
			<asp:CheckBox id="chkPortal" Checked="True" resourcekey="Portal" Runat="server" CssClass="esCheckBoxes" />
			<asp:CheckBox id="chkAdmin" Checked="True" resourcekey="Admin" Runat="server" CssClass="esCheckBoxes" />
		</asp:panel>
		<div>
			<h2 class="dnnFormSectionHead"><%=LocalizeString("plSkins")%></h2>
			<fieldset>
				<table id="tblSkins" runat="server" cellspacing="0" cellpadding="0" class="skinViewer" />
			</fieldset>
		</div>
		<div>
			<h2 class="dnnFormSectionHead"><%=LocalizeString("plContainers")%></h2>
			<fieldset>
				<table id="tblContainers" runat="server" cellspacing="0" cellpadding="0" class="skinViewer" />
			</fieldset>
		</div>
		<div id="pnlParse" Runat="server" Visible="False" class="dnnFormItem">
			<dnn:label id="lblParseOptions" runat="server" resourcekey="ParseOptions" />
			<asp:RadioButtonList id="optParse" Runat="server"  RepeatDirection="Horizontal" CssClass="dnnFormRadioButtons" RepeatLayout="Flow">
				<asp:ListItem resourcekey="Localized" Value="L" Selected="True" />
				<asp:ListItem resourcekey="Portable" Value="P" />
			</asp:RadioButtonList>
		</div>
		<div class="dnnFormItem"><asp:label id="lblOutput" Runat="server" EnableViewState="False" /></div>
	</fieldset>
	<ul class="dnnActions dnnClear">
		<li><asp:LinkButton id="cmdParse" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdParse" /></li>
		<li><asp:LinkButton id="cmdDelete" runat="server" CssClass="dnnSecondaryAction" ResourceKey="cmdDelete"  /></li>
		<li><asp:LinkButton id="cmdRestore" runat="server" CssClass="dnnSecondaryAction" ResourceKey="cmdRestore"  /></li>
	</ul>
</div>