<%@ Control Language="C#" AutoEventWireup="false" CodeFile="LocalizePages.ascx.cs" Inherits="DotNetNuke.Modules.Admin.Languages.LocalizePages" Explicit="True"%>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke.Web" Namespace="DotNetNuke.Web.UI.WebControls" %>
<%@ Register TagPrefix="dnn" Assembly="DotNetNuke" Namespace="DotNetNuke.UI.WebControls" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>
<div class="dnnForm dnnLanguages dnnClear" id="dnnLanguages">
    <fieldset>
        <div class="dnnFormItem">
            <h2 class="dnnFormSectionHead"><asp:Label ID="headerLabel" runat="server" resourceKey="header" /></h2>
        </div>
        <div class="dnnFormItem">
            <asp:Label ID="localizeLabel" runat="server" />
        </div>
        <div class="dnnFormItem">
            <asp:Label ID="siteDefaultLabel" runat="server" resourceKey="siteDefaultLabel" />
            <dnn:DnnLanguageLabel ID="defaultLanguageLabel" runat="server"  />
        </div>
    </fieldset>
    <ul class="dnnActions dnnClear">
    	<li><asp:LinkButton id="updateButton" runat="server" CssClass="dnnPrimaryAction" resourcekey="Update" /></li>
    	<li><asp:LinkButton id="cancelButton" runat="server" CssClass="dnnSecondaryAction" ResourceKey="Cancel" /></li>
    </ul>
</div>
<div class="enableLocalizationProgress" style="text-align:center">
    <dnn:DnnProgressManager id="progressManager" runat="server" />
    <dnn:DnnProgressArea id="pageCreationProgressArea" runat="server" TimeElapsed="true"  />
</div>
<dnn:DnnScriptBlock ID="scriptBlock" runat="server">
	<script type="text/javascript">
		(function ($) {
			$("#<%=updateButton.ClientID %>").click(function (e) {
				$(this).hide();
			});
		}(jQuery));
	</script>
</dnn:DnnScriptBlock>