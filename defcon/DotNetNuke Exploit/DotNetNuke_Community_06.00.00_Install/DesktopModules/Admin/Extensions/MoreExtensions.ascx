<%@ Control Language="C#" AutoEventWireup="false" Inherits="DotNetNuke.Modules.Admin.Extensions.MoreExtensions" CodeFile="MoreExtensions.ascx.cs" %>
<%@ Import Namespace="DotNetNuke.Entities.Icons" %>
<%@ Register TagPrefix="dnn" TagName="Label" Src="~/controls/LabelControl.ascx" %>  
<div id="dnnCatalog" class="dnnForm dnnCatalog dnnClear">
    <span id="loading" class="dnnCatalogLoading">Loading...</span>
    <div class="dnnCatalogTags">
        <div class="dnnCatalogSearch">
            <h2 class="dnnGallerySubHeading"><%=LocalizeString("CatalogSearchTitle") %></h2>
            <div class="dnnFormItem">
                <dnn:Label ID="dnnlblType" runat="server" ResourceKey="TypeLabel" ControlName="typeDDL" />
                <select id="typeDDL">
                    <option value="all">All</option>
                    <option selected="selected" value="module"><%=LocalizeString("CatalogModule") %></option>
                    <option value="skin"><%=LocalizeString("CatalogSkin") %></option>
                </select>        
            </div>
            <div class="dnnFormItem">
                <dnn:Label ID="dnnlblSearch" runat="server" ResourceKey="SearchLabel" ControlName="searchText" />
                <input type="text" id="searchText" title="<%=LocalizeString("SearchLabel.Help")%>" />        
            </div>
            <div class="dnnClear">
               <a href="javascript:void(0);" id="search-go" class="dnnPrimaryAction"><%=LocalizeString("Search")%></a>
               <a href="javascript:void(0);" id="search-reset" class="dnnSecondaryAction"><%=LocalizeString("ClearSearch")%></a>
            </div>
        </div>      
        <h2 class="dnnGallerySubHeading"><%=LocalizeString("TagCloud")%></h2>
        <div class="dnnCatalogTagList dnnClear" id="tag-list"></div>
        <div class="dnnFormMessage dnnFormInfo">
            <% =LocalizeString("ListExtensions") %>
        </div>
    </div>
    <div class="dnnCatalogListing">
        <div id="extensionDetail"><div id="extensionDetailInner"></div></div>
        <h2 class="dnnGallerySubHeading"><%=LocalizeString("Extensions")%></h2>
        <fieldset id="extensionsSummary">
            <div class="sort-options fullWidth-Center">
               <span class="sort-button-off"><a href="javascript:void(0);" id="NameSorter"><%=LocalizeString("NameZA") %></a></span> 
               <span class="sort-button-off"><a href="javascript:void(0);" id="PriceSorter"><%=LocalizeString("PriceHighLow")%></a></span>
            </div>
            <div id="searchFilters" class="dnnSearchFilters dnnClear"></div>
            <div id="extensionList" class="extensionList"></div>
        </fieldset>
    </div>
    <script id="tag-tmpl" type="text/html">
{{if tagName}}
    <a href="javascript:void(0);" style="font-size:${fontSize}%" class="tag" alt="${tagName} (${TagCount})" title="${tagName} (${TagCount})" tagId="${tagID}">${tagName}</a>&nbsp;
{{/if}}
    </script>
    <script id="eTmpl" type="text/x-jquery-tmpl">
        {{if Catalog}}    
            {{if ExtensionName}}
    	        <div class="dnnProduct ${Catalog.CatalogCSS} dnnClear ext-${ExtensionID}">    
                    <a name="ext-${ExtensionID}"></a>
                    <div class="dnnProductImage">
                        {{if ImageURL}}
                            <img alt='${ExtensionName}' src="${ImageURL}" />
                        {{else}}
                            <img  alt='${ExtensionName}' src='<%=ResolveUrl("~/images/System-Box-Empty-icon.png")%>' />
                        {{/if}}
                        <div class='dnnProductPrice'>${_gallery.FormatCurrency(Price)}</div>
                        <div class="${Catalog.CatalogCSS}">
                            <img class='productTypeImage dnnIcon' alt='${ExtensionType}'  title='${ExtensionType}'  src='<%=IconController.IconURL("Catalog${ExtensionType}")%>' />                            
                            {{if License}}                                
                                <a class="galleryLink  inline" onclick="return _gallery.ShowDetails(${ExtensionID})">                    
                                    <img class='productTypeImage dnnIcon' alt='License for ${ExtensionName}' title='License Specified' src='<%=IconController.IconURL("CatalogLicense")%>' />
                                </a>
                            {{/if}}                            
                            {{if Catalog.CatalogUrl}}                                            
                                <a class="galleryLink inline" href="${Catalog.CatalogUrl}" target="_new"><img class='deploy galleryLink' alt='Browse ${Catalog.CatalogName}' Title='Browse ${Catalog.CatalogName}' src='${_gallery.resolveImage(Catalog.CatalogIcon)}' /></a>
                            {{/if}}                
                        </div>
                    </div>
                    <div class="dnnProductDetails">
                        <h3 class="dnnProductTitle">${ExtensionName}</h3>
                        <p class="dnnProductOwner">
                            {{if OwnerName}}<%=LocalizeString("By") %> <a href="javascript:void(0)" onclick="_gallery.OwnerFilterGallery('${OwnerName}')">${OwnerName}</a>{{/if}}
                        </p>
		                <div class='dnnProductDescription dnnClear'>{{html Description}}&nbsp;{{if DetailURL}}<a href="${DetailURL}" target="_details"><%=LocalizeString("ExtensionDetail")%></a>{{/if}}</div>
                        <div class="dnnProductLicense">    
                            <span class="dnnProductLicenseLabel">
                                <%=LocalizeString("License") %>
                            </span>
                            {{if License}}
                                ${License}
                            {{else}}
                                <%=LocalizeString("NotSpecified") %>
                            {{/if}}
                        </div>
                        <div class="dnnProductVersion">    
                            <span class="dnnProductVersionLabel">
                                <%=LocalizeString("Version") %>
                            </span>
                            {{if MinDnnVersion}}
                                ${MinDnnVersion}
                            {{else}}
                                <%=LocalizeString("NotSpecified") %>
                            {{/if}}
                        </div>
            

                        {{if CatalogID !== 1 && DownloadURL }}<a class="dnnPrimaryAction" href="${_gallery.getDownloadUrl(ExtensionID)}">Deploy ${ExtensionName}</a>{{/if}}
                        {{if CatalogID === 1}}<a class="dnnPrimaryAction" href="${DetailURL}&PackageOptionID=0&action=Add" target="_cart">Buy ${ExtensionName}</a>{{/if}}
            
 
                        
                   </div>
                </div>
             {{/if}}
         {{/if}}
    </script>
    
    <script type="text/javascript">
		var _gallery; //global scope!
		(function($){
			$(document).ready(function () {
				_gallery = new Gallery(
					{
						host: '<%=LocalizeString("feedEndpoint") %>'
						, NameTextASC: '<%=LocalizeString("NameAZ") %>'
						, NameTextDESC: '<%=LocalizeString("NameZA") %>'
						, PriceTextASC: '<%=LocalizeString("PriceLowHigh") %>'
						, PriceTextDESC: '<%=LocalizeString("PriceHighLow") %>'
						, tagLabel: '<%=LocalizeString("TagLabel") %>'
						, searchLabel: '<%=LocalizeString("SearchLabel") %>'
						, vendorLabel: '<%=LocalizeString("VendorLabel") %>'
						, extensionLabel: '<%=LocalizeString("ExtensionsLabel") %>'
						, noneLabel: '<%=LocalizeString("NoneLabel") %>'
						, orderLabel: '<%=LocalizeString("OrderLabel") %>'
						, typeLabel: '<%=LocalizeString("TypeLabel") %>'
						, errorLabel: '<%=LocalizeString("ErrorLabel") %>'
						, loadingLabel: '<%=LocalizeString("LoadingLabel") %>'
						, siteRoot : '<%=ResolveUrl("~/")%>'
						, DataBaseVersion : "<%=DotNetNuke.Common.Globals.DataBaseVersion%>"
						, CacheTimeoutMinutes : <%=(IsDebugEnabled() ? 0: 1440) %>
						, BaseDownLoadUrl : "<%=ModuleContext.EditUrl("ExtensionID", "{{ExtensionID}}", "Download") %>"
					});

				setTimeout(function(){
					_gallery.getCatalogs(function(){
						_gallery.Search();
					});
					_gallery.getTags();
				}, 0);
			});
		}(jQuery));
    </script>
</div>