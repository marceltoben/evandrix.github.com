<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Search.SearchAdmin" CodeFile="SearchAdmin.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<div class="dnnForm dnnEditSchedule dnnClear" id="dnnEditSchedule">
    <fieldset>
        <div class="dnnFormItem">
            <dnn:label id="plMaxWordLength" runat="server" controlname="txtMaxWordLength" />
            <asp:textbox id="txtMaxWordLength" runat="server" maxlength="128" />
            <asp:CompareValidator ID="valMinMaxValue" runat="server" ControlToValidate="txtMaxWordLength" Display="Dynamic" ValueToCompare="1" Type="Integer" Operator="GreaterThanEqual"  CssClass="dnnFormMessage dnnFormError" EnableClientScript="true" resourcekey="SearchWordMaxMinLength"/>
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plMinWordLength" runat="server" controlname="txtMinWordLength" />
            <asp:textbox id="txtMinWordLength" runat="server" maxlength="128" />
            <asp:CompareValidator ID="valWordLength" runat="server" ControlToValidate="txtMinWordLength" Display="Dynamic" ControlToCompare="txtMaxWordLength" Type="Integer" Operator="LessThanEqual"  CssClass="dnnFormMessage dnnFormError" EnableClientScript="true" resourcekey="SearchWordLength"/>
            <asp:CompareValidator ID="valMinValue" runat="server" ControlToValidate="txtMinWordLength" Display="Dynamic" ValueToCompare="1" Type="Integer" Operator="GreaterThanEqual"  CssClass="dnnFormMessage dnnFormError" EnableClientScript="true" resourcekey="SearchWordMinLength"/>
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plIncludeCommon" runat="server" controlname="chkIncludeCommon" text="Include Common Words:"></dnn:label>
            <asp:CheckBox ID="chkIncludeCommon" Runat="server"></asp:CheckBox>
        </div>
        <div class="dnnFormItem">
            <dnn:label id="plIncludeNumeric" runat="server" controlname="chkIncludeNumeric" text="Include Numbers:"></dnn:label>
            <asp:CheckBox ID="chkIncludeNumeric" Runat="server"></asp:CheckBox>
        </div>
    </fieldset>
    <ul class="dnnActions dnnClear">
    	<li><asp:LinkButton id="cmdUpdate" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdUpdate" CausesValidation="true" /></li>
        <li><asp:LinkButton id="cmdReIndex" runat="server" CssClass="dnnSecondaryAction" resourcekey="cmdReIndex" CausesValidation="true" /></li>
    </ul>
</div>