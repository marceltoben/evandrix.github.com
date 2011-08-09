<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Common.Lists.ListEditor" CodeFile="ListEditor.ascx.cs" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="SectionHead" Src="~/controls/SectionHeadControl.ascx" %>
<%@ Register TagPrefix="dnntv" Namespace="DotNetNuke.UI.WebControls" Assembly="DotNetNuke.WebControls" %>
<%@ Register TagPrefix="dnn" TagName="ListEntries" Src="~/DesktopModules/Admin/Lists/ListEntries.ascx" %>
<div class="dnnForm dnnListEditor dnnClear" id="dnnListEditor">
    <fieldset>
        <div class="dnnFormItem">
            <div class="dnnListEditorTree">
                <dnntv:dnntree id="DNNtree" runat="server" SystemImagesPath="~/images/" />
                <asp:LinkButton id="cmdAddList" runat="server" resourcekey="AddList" CssClass="dnnSecondaryAction" causesvalidation="False" />
            </div>
			<div id="divDetails" runat="server" class="dnnListEditorDetails">
                <dnn:ListEntries id="lstEntries" runat="Server" />
			</div>
        </div>
    </fieldset>
</div>