<%@ Control Language="C#" AutoEventWireup="false" Explicit="true" Inherits="DotNetNuke.Modules.Admin.LogViewer.LogViewer" TargetSchema="http://schemas.microsoft.com/intellisense/ie5" CodeFile="LogViewer.ascx.cs" %>
<%@ Register TagPrefix="dnnsc" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>

<script language="javascript" type="text/javascript">
/*globals jQuery, window, Sys */
(function ($, Sys) {
	function setUpDnnLogViewer() {
		$('.dnnLogItemHeader').unbind("click").click(function () {
			$(this).next('.dnnLogItemDetail').slideToggle();
		});
		$('.dnnLogItemHeader input').click(function (e) {
			e.stopPropagation();
		});
		$('#dnnLogViewer').dnnPanels();
		$('#<%= btnClear.ClientID %>').dnnConfirm({
			text: '<%= LocalizeString("ClearLog.Text") %>',
			yesText: '<%= Localization.GetString("Yes.Text", Localization.SharedResourceFile) %>',
			noText: '<%= Localization.GetString("No.Text", Localization.SharedResourceFile) %>',
			title: '<%= Localization.GetString("Confirm.Text", Localization.SharedResourceFile) %>'
		});
		$('#<%= btnEmail.ClientID %>,#<%= btnDelete.ClientID %>').click(function (e) {
			var checked = $('#dnnLogViewer input').is(':checked');
			if (!checked) {
				e.preventDefault();
				$.dnnAlert({
					closeText: '<%= Localization.GetString("Close.Text", Localization.SharedResourceFile)%>',
					text: '<%= Localization.GetString("SelectException", this.LocalResourceFile) %>'
				});
			}
			return checked;
		});
	}
	$(document).ready(function () {
		setUpDnnLogViewer();
		Sys.WebForms.PageRequestManager.getInstance().add_endRequest(function () {
			setUpDnnLogViewer();
		});
	});
} (jQuery, window.Sys));
</script>

<div class="dnnForm dnnLogViewer dnnClear" id="dnnLogViewer">
	<h2 class="dnnFormSectionHead" id="dnnPanel-ViewLog"><a href="" class="dnnSectionExpanded"><%=LocalizeString("Viewer")%></a></h2>
	<fieldset>
		<div class="dnnClear">        
			<div class="dnnlvOptions dnnLeft">
				<div class="dnnFormItem">
					<dnn:Label ID="plPortalID" runat="server" ControlName="ddlPortalid" Suffix=":" />
					<asp:DropDownList ID="ddlPortalid" runat="server" AutoPostBack="true" />
				</div>
				<div class="dnnFormItem">
					<dnn:Label ID="plLogType" runat="server" ControlName="ddlLogType" Suffix=":" />
					<asp:DropDownList ID="ddlLogType" runat="server" AutoPostBack="true" Width="225px" />
				</div>            
				<div class="dnnFormItem">
					<dnn:Label ID="plRecordsPage" runat="server" ResourceKey="Recordsperpage" Suffix=":" />
					<asp:DropDownList ID="ddlRecordsPerPage" runat="server" AutoPostBack="True">
						<asp:ListItem Value="10">10</asp:ListItem>
						<asp:ListItem Value="25">25</asp:ListItem>
						<asp:ListItem Value="50">50</asp:ListItem>
						<asp:ListItem Value="100">100</asp:ListItem>
						<asp:ListItem Value="250">250</asp:ListItem>
					</asp:DropDownList>
				</div>            
			</div>
			<div class="dnnlvLegend dnnRight">
				<h3>Color Legend</h3>
				<div class="dnnLeft">
					<div class="Exception lvlItem"><asp:Label ID="Label1" runat="server" resourcekey="ExceptionCode" /></div>
					<div class="ItemCreated lvlItem"><asp:Label ID="Label2" runat="server" resourcekey="ItemCreatedCode" /></div>
					<div class="ItemUpdated lvlItem"><asp:Label ID="Label3" runat="server" resourcekey="ItemUpdatedCode" /></div>
					<div class="ItemDeleted lvlItem"><asp:Label ID="Label4" runat="server" resourcekey="ItemDeletedCode" /></div>
				</div>
				<div class="dnnLeft">
					<div class="AdminAlert lvlItem"><asp:Label ID="Label8" runat="server" resourcekey="AdminAlertCode" /></div>
					<div class="HostAlert lvlItem"><asp:Label ID="Label9" runat="server" resourcekey="HostAlertCode" /></div>
					<div class="SecurityException lvlItem"><asp:Label ID="Label10" runat="server" resourcekey="SecurityException" /></div>
				</div>
				<div class="dnnLeft">
					<div class="OperationSuccess lvlItem"><asp:Label ID="Label5" runat="server" resourcekey="SuccessCode" /></div>
					<div class="OperationFailure lvlItem"><asp:Label ID="Label6" runat="server" resourcekey="FailureCode" /></div>
					<div class="GeneralAdminOperation lvlItem"><asp:Label ID="Label7" runat="server" resourcekey="AdminOpCode" /></div>
				</div>
			</div>
		</div>
		<div class="dnnlvContent dnnClear">
			<div class="dnnFormMessage dnnShortFormInfo">
				<asp:Label ID="lbClickRow" runat="server" resourcekey="ClickRow" />
				<asp:Label ID="txtShowing" runat="server" />
			</div>         
			<asp:Repeater EnableViewState="False" runat="server" ID="dlLog">
				<HeaderTemplate>
					<div class="dnnLogHeader dnnClear">
						<div style="width:150px"><%= Localization.GetString("Date", this.LocalResourceFile) %></div>
						<div style="width:175px"><%= Localization.GetString("Type", this.LocalResourceFile) %></div>
						<div style="width:100px"><%= Localization.GetString("Username", this.LocalResourceFile) %></div>
						<div style="width:125px"><%= Localization.GetString("Portal", this.LocalResourceFile) %></div>
						<div style="width:310px"><%= Localization.GetString("Summary", this.LocalResourceFile) %></div>
					</div>
				</HeaderTemplate>
				<ItemTemplate>
					<div class='dnnLogItemHeader <%# GetMyLogType(DataBinder.Eval(Container.DataItem,"LogTypeKey").ToString()).LogTypeCSSClass %>'>
						<input type="checkbox" name="Exception" value='<%# ((DotNetNuke.Services.Log.EventLog.LogInfo)Container.DataItem).LogGUID %>|<%# ((DotNetNuke.Services.Log.EventLog.LogInfo)Container.DataItem).LogFileID %>' />
						<div style="width:150px"><%# DataBinder.Eval(Container.DataItem,"LogCreateDate") %>&nbsp;</div>
						<div style="width:175px"><%# GetMyLogType(DataBinder.Eval(Container.DataItem,"LogTypeKey").ToString()).LogTypeFriendlyName %>&nbsp;</div>
						<div style="width:100px"><%# DataBinder.Eval(Container.DataItem,"LogUserName") %>&nbsp;</div>
						<div style="width:125px"><%# DataBinder.Eval(Container.DataItem,"LogPortalName") %>&nbsp;</div>
						<div style="width:310px"><%# ((DotNetNuke.Services.Log.EventLog.LogInfo)Container.DataItem).LogProperties.Summary %>&nbsp;</div>
					</div>
					<div class="dnnLogItemDetail" style="display:none;">
						<%# GetPropertiesText(Container.DataItem) %>
					</div>
				</ItemTemplate>
			</asp:Repeater>
			<dnnsc:PagingControl ID="ctlPagingControlBottom" runat="server"></dnnsc:PagingControl>
		</div>
	</fieldset>
	<h2 class="dnnFormSectionHead" id="dnnPanel-LogSendExceptions"><a href="" class="dnnSectionExpanded"><%=LocalizeString("SendExceptions")%></a></h2>
	<fieldset id="dnnSendExceptions">
		<div class="dnnFormItem">
			<dnn:Label ID="plEmailAddress" runat="server" ControlName="txtEmailAddress" Suffix=":" />
			<asp:TextBox ID="txtEmailAddress" runat="server" />
		</div>        
		<div class="dnnFormItem">
			<dnn:Label ID="plSubject" runat="server" ControlName="txtSubject" Suffix=":" />
			<asp:TextBox ID="txtSubject" runat="server" Rows="2" Columns="25" TextMode="MultiLine" />
		</div>        
		<div class="dnnFormItem">
			<dnn:Label ID="plMessage" runat="server" ResourceKey="SendMessage" ControlName="txtMessage" Suffix=":" />
			<asp:TextBox ID="txtMessage" runat="server" Rows="6" Columns="25" TextMode="MultiLine" />
		</div>        
		<ul class="dnnActions dnnClear">
			<li><asp:LinkButton ID="btnEmail" runat="server" CssClass="dnnPrimaryAction" resourcekey="btnEmail" /></li>
		</ul>    
	</fieldset>
	<ul class="dnnActions dnnClear">
		<li><asp:LinkButton CssClass="dnnPrimaryAction" ID="btnDelete" resourcekey="btnDelete" runat="server" /></li>
		<li><asp:LinkButton CssClass="dnnSecondaryAction dnnLogDelete" ID="btnClear" resourcekey="btnClear" runat="server" /></li>
	</ul>
</div>