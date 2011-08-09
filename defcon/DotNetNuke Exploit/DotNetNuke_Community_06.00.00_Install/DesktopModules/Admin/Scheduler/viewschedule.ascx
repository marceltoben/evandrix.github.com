<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Scheduler.ViewSchedule" CodeFile="ViewSchedule.ascx.cs" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<%@ Register TagPrefix="dnn" Namespace="Telerik.Web.UI" %>
<div class="dnnViewSchedule dnnClear">
    <dnn:DnnGrid id="dgSchedule" runat="server" AutoGenerateColumns="false" AllowSorting="true" CssClass="dnnGrid">
        <MasterTableView DataKeyNames="ScheduleID,Enabled,TimeLapse,TimeLapseMeasurement,RetryTimeLapse,RetryTimeLapseMeasurement,NextStart">
            <Columns>
                <dnn:DnnGridTemplateColumn UniqueName="EditItem">
                    <ItemTemplate>
                        <asp:HyperLink ID="hlEdit" runat="server"><dnn:DnnImage IconKey="Edit" id="imgEdit" runat="server" /></asp:HyperLink>
                    </ItemTemplate>
                </dnn:DnnGridTemplateColumn>
                <dnn:DnnGridBoundColumn DataField="FriendlyName" HeaderText="Name" />
                <dnn:DnnGridCheckBoxColumn DataField="Enabled" HeaderText="Enabled" />
                <dnn:DnnGridTemplateColumn UniqueName="Frequency" HeaderText="Frequency">
                    <ItemTemplate><asp:Label ID="lblFrequency" runat="server" /></ItemTemplate>
                </dnn:DnnGridTemplateColumn>
                <dnn:DnnGridTemplateColumn UniqueName="RetryTimeLapse" HeaderText="RetryTimeLapse">
                    <ItemTemplate><asp:Label ID="lblRetryTimeLapse" runat="server" /></ItemTemplate>
                </dnn:DnnGridTemplateColumn>
                <dnn:DnnGridTemplateColumn UniqueName="NextStart" HeaderText="NextStart">
                    <ItemTemplate><asp:Label ID="lblNextStart" runat="server" /></ItemTemplate>
                </dnn:DnnGridTemplateColumn>
                <dnn:DnnGridTemplateColumn UniqueName="ViewHistory">
                    <ItemTemplate>
                        <asp:HyperLink ID="hlHistory" runat="server">
                            <dnn:DnnImage IconKey="ScheduleHistory" id="imgHistory" runat="server" />
                        </asp:HyperLink>
                    </ItemTemplate>
                </dnn:DnnGridTemplateColumn>
            </Columns>
        </MasterTableView>
    </dnn:DnnGrid>
</div>