<%@ Control Language="C#" AutoEventWireup="false" Explicit="true" Inherits="DotNetNuke.Modules.SearchResults.ResultsSettings" CodeFile="ResultsSettings.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<div class="dnnForm dnnResultsSettings dnnClear">
    <div class="dnnFormItem">
        <dnn:label id="plResults" runat="server" controlname="txtresults" />
        <asp:textbox id="txtresults" runat="server" MaxLength="5" />
        <asp:CompareValidator ID="CompareValidator5" runat="server" CssClass="NormalRed" resourcekey="Validation.ErrorMessage" Display="Dynamic" ControlToValidate="txtresults" Operator="GreaterThan" Type="Integer" ValueToCompare="0" />
    </div>
    <div class="dnnFormItem">
        <dnn:label id="plPage" runat="server" controlname="txtPage" />
        <asp:textbox id="txtPage" runat="server" MaxLength="5" />
        <asp:CompareValidator ID="CompareValidator1" runat="server" ControlToValidate="txtPage" CssClass="NormalRed" Display="Dynamic" Operator="GreaterThan" resourcekey="Validation.ErrorMessage" />
    </div>
    <div class="dnnFormItem">
        <dnn:label id="plTitle" runat="server" controlname="txtTitle" />
        <asp:textbox id="txtTitle" runat="server" MaxLength="5" />
        <asp:CompareValidator ID="CompareValidator2" runat="server" ControlToValidate="txtTitle" CssClass="NormalRed" Display="Dynamic" Operator="GreaterThan" resourcekey="Validation.ErrorMessage" Type="Integer" ValueToCompare="0" />
    </div>
    <div class="dnnFormItem">
        <dnn:label id="plDescription" runat="server" controlname="txtdescription" />
        <asp:textbox id="txtdescription" runat="server" MaxLength="5" />
        <asp:CompareValidator ID="CompareValidator3" runat="server" ControlToValidate="txtdescription" CssClass="NormalRed" Display="Dynamic" Operator="GreaterThan" resourcekey="Validation.ErrorMessage" Type="Integer" ValueToCompare="0" />
    </div>
    <div class="dnnFormItem">
        <dnn:label id="plShowDescription" runat="server" controlname="chkDescription" />
        <asp:checkbox id="chkDescription" runat="server" />
    </div>
</div>