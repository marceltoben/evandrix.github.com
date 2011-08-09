<%@ Control Inherits="DotNetNuke.Modules.Admin.Portals.SiteWizard" Language="C#" AutoEventWireup="false" EnableViewState="True" CodeFile="SiteWizard.ascx.cs" %>
<%@ Register TagPrefix="dnn" TagName="Skin" Src="~/controls/SkinThumbNailControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="url" Src="~/controls/UrlControl.ascx" %>
<%@ Register TagPrefix="dnn" TagName="label" Src="~/controls/LabelControl.ascx" %>
<asp:Wizard ID="Wizard" runat="server" DisplaySideBar="false" ActiveStepIndex="0" StartNextButtonType="Link" StepNextButtonType="Link" StepPreviousButtonType="Link" FinishPreviousButtonType="Link" FinishCompleteButtonType="Link" CssClass="dnnSiteWizard dnnClear">
    <StepStyle VerticalAlign="Top" />
    <NavigationButtonStyle />
    <HeaderTemplate>
        <h2><% =Localization.GetString(Wizard.ActiveStep.Title + ".Title", LocalResourceFile)%></h2>
        <div class="dnnFormMessage dnnFormInfo">
            <% =Localization.GetString(Wizard.ActiveStep.Title + ".Help", LocalResourceFile)%>
        </div>
    </HeaderTemplate>
    <WizardSteps>
        <asp:WizardStep ID="wizIntroduction" runat="server" Title="Introduction" StepType="Start" AllowReturn="false" />
        <asp:WizardStep ID="wizTemplate" runat="server" Title="Template">
            <div class="dnnForm dnnSiteWizardStep2 dnnClear">
                <asp:CheckBox ID="chkTemplate" runat="server" AutoPostBack="True" resourcekey="TemplateDetail" />
                <div class="dnnFormItem"><asp:ListBox ID="lstTemplate" runat="server" Rows="8" Width="350" AutoPostBack="True" /></div>
                <asp:Label ID="lblTemplateMessage" runat="server" />
                <div class="dnnFormItem dnnSWMergeModules">
                    <asp:Label ID="lblMergeTitle" runat="server" resourcekey="MergeDetail" />    
                    <asp:RadioButtonList ID="optMerge" CssClass="dnnFormRadioButtons" runat="server" RepeatDirection="Horizontal">
                        <asp:ListItem SelectedValue="Ignore" resourcekey="Ignore"></asp:ListItem>
                        <asp:ListItem Value="Replace" resourcekey="Replace"></asp:ListItem>
                        <asp:ListItem Value="Merge" resourcekey="Merge"></asp:ListItem>
                    </asp:RadioButtonList>
                    <asp:Label ID="lblMergeWarning" runat="server" resourcekey="MergeWarning" CssClass="dnnFormMessage dnnFormValidationSummary" />
                </div>
            </div>
        </asp:WizardStep>
        <asp:WizardStep ID="wizSkin" runat="server" Title="Skin">
            <div class="dnnForm dnnSiteWizardStep3 dnnClear">
                <dnn:Skin ID="ctlPortalSkin" runat="server"></dnn:Skin>
            </div>
        </asp:WizardStep>
        <asp:WizardStep ID="wizContainer" runat="server" Title="Container">
            <div class="dnnForm dnnSiteWizardStep4 dnnClear">
                <div class="dnnFormItem">
                    <asp:CheckBox ID="chkIncludeAll" runat="server" resourcekey="IncludeAll" TextAlign="Left" AutoPostBack="True" />
                </div>
                <div>
                    <dnn:Skin ID="ctlPortalContainer" runat="server"></dnn:Skin>
                </div>
            </div>
        </asp:WizardStep>
        <asp:WizardStep ID="wizDetails" runat="server" Title="Details">
            <div class="dnnForm dnnSiteWizardStep5 dnnClear">
                <div class="dnnFormItem">
                    <dnn:label ID="lblPortalName" runat="server" ControlName="txtPortalName" />
                    <asp:TextBox ID="txtPortalName" runat="server" MaxLength="128" />
                </div>
                <div class="dnnFormItem">
                    <dnn:label ID="lblDescription" runat="server" ControlName="txtDescription" />
                    <asp:TextBox ID="txtDescription" runat="server" Width="300" MaxLength="475" Rows="3" TextMode="MultiLine" />
                </div>
                <div class="dnnFormItem">
                    <dnn:label ID="lblKeyWords" runat="server" ControlName="txtKeyWords" />
                    <asp:TextBox ID="txtKeyWords" runat="server" Width="300" MaxLength="475" Rows="3" TextMode="MultiLine" />
                </div>
                <div class="dnnFormItem">
                    <dnn:label ID="lblLogo" runat="server" ControlName="urlLogo" />
                    <div class="dnnLeft"><dnn:url ID="urlLogo" runat="server" ShowLog="False" ShowTabs="False" ShowUrls="False" ShowTrack="false" Required="false" /></div>
                </div>
            </div>
        </asp:WizardStep>
        <asp:WizardStep ID="wizComplete" runat="server" StepType="Complete">
            <div class="dnnForm dnnSiteWizardStep6 dnnClear">
                <h2><asp:Label ID="lblWizardTitle" resourcekey="Complete.Title" runat="server" /></h2>
                <div class="dnnFormMessage dnnFormSuccess">
                    <asp:Label ID="lblHelp" resourcekey="Complete.Help" runat="server" />
                </div>            
            </div>
        </asp:WizardStep>
    </WizardSteps>
</asp:Wizard>