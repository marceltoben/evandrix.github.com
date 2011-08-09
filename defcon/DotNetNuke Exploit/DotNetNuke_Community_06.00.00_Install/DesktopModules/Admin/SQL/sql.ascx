<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.SQL.SQL" CodeFile="SQL.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<div class="dnnForm dnnSQLModule dnnClear" id="dnnSQLModule">
    <fieldset>
        <div class="dnnFormItem">
            <dnn:Label ID="plSqlScript" runat="server" ControlName="uplSqlScript" />
            <asp:FileUpload ID="uplSqlScript" runat="server" />
            <asp:LinkButton ID="cmdUpload" resourcekey="cmdUpload" EnableViewState="False" CssClass="dnnSecondaryAction" runat="server" />
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="plConnection" runat="server" ControlName="cboConnection" Text="Connection" />
            <asp:DropDownList ID="cboConnection" runat="server" />
        </div>
        <div class="dnnFormItem">
            <dnn:Label ID="scriptLabel" runat="server" ControlName="txtQuery" />
            <asp:TextBox ID="txtQuery" runat="server" TextMode="MultiLine" Columns="75" Rows="15" EnableViewState="False" />
        </div>
        <div class="dnnFormItem">
            <asp:CheckBox ID="chkRunAsScript" resourcekey="chkRunAsScript" runat="server" TextAlign="Left" />
        </div>
    </fieldset>
    <ul class="dnnActions dnnClear">
    	<li><asp:LinkButton id="cmdExecute" runat="server" CssClass="dnnPrimaryAction" resourcekey="cmdExecute" /></li>
    </ul>
    <div class="dnnFormItem dnnResults">
        <asp:GridView ID="gvResults" runat="server" AutoGenerateColumns="True" CellSpacing="4" 
            EnableViewState="False" CssClass="dnnGrid" gridlines="None">
            <headerstyle CssClass="dnnGridHeader" />
            <rowstyle CssClass="dnnGridItem" />
            <alternatingrowstyle CssClass="dnnGridAltItem" />
            <EmptyDataTemplate>
                <div class="dnnFormItem"><asp:Label ID="Label1" runat="server" resourcekey="NoDataReturned" CssClass="dnnFormMessage dnnFormWarning" /></div>
            </EmptyDataTemplate>
        </asp:GridView>
    </div>
</div>