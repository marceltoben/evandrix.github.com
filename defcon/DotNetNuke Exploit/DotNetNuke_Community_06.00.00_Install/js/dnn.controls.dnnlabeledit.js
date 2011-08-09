
Type.registerNamespace('dnn.controls');dnn.extend(dnn.controls,{initLabelEdit:function(ctl)
{if(ctl)
{var lbl=new dnn.controls.DNNLabelEdit(ctl);lbl.initialize();return lbl;}}});dnn.controls.DNNLabelEdit=function(o)
{dnn.controls.DNNLabelEdit.initializeBase(this,[o]);this.control=this.container;this.editWrapper=null;this.editContainer=null;this.editControl=null;this.prevText='';this.onblurSave=(this.getProp('blursave','1')=='1');this.toolbarId=this.getProp('tbId','');this.nsPrefix=this.getProp('nsPrefix','');this.toolbarEventName=this.getProp('tbEvent','onmousemove');this.toolbar=null;this.css=o.className;this.cssEdit=this.getProp('cssEdit','');this.cssWork=this.getProp('cssWork','');this.cssOver=this.getProp('cssOver','');this.sysImgPath=this.getProp('sysimgpath','');this.callBack=this.getProp('callback','');this.callBackStatFunc=this.getProp('callbackSF','');if(this.callBackStatFunc.length>0)
this.add_handler('callBackStatus',eval(this.callBackStatFunc));this.beforeSaveFunc=this.getProp('beforeSaveF','');if(this.beforeSaveFunc.length>0)
this.add_handler('beforeSave',eval(this.beforeSaveFunc));this.eventName=this.getProp('eventName','onclick');this.multiLineEnabled=this.getProp('multiline','0')=='1';this.saveOnEnter=this.getProp('saveonenter','1')=='1';this.richTextEnabled=this.getProp('richtext','0')=='1';this.supportsCE=(document.body.contentEditable!=null);if(dnn.dom.browser.isType(dnn.dom.browser.Safari)||dnn.dom.browser.isType(dnn.dom.browser.Opera))
this.supportsCE=false;this.supportsRichText=(this.supportsCE||(dnn.dom.browser.isType(dnn.dom.browser.Mozilla)&&navigator.productSub>='20050111'));if(this.eventName!='none')
this.addHandlers(o,this.getDynamicEventObject(this._getEventName(this.eventName),this.performEdit),this);if(this.toolbarId.length>0)
this.addHandlers(o,this.getDynamicEventObject(this._getEventName(this.toolbarEventName),this.showToolBar),this);this.addHandlers(o,{'mousemove':this.mouseMove,'mouseout':this.mouseOut},this);this._toolbarActionDelegate=dnn.createDelegate(this,this.toolbarAction);this._initToolbarDelegate=dnn.createDelegate(this,this.initToolbar);this._performEditDelegate=dnn.createDelegate(this,this.performEdit);}
dnn.controls.DNNLabelEdit.prototype={isEditMode:function()
{return(this.container.style.display!='')},initToolbar:function()
{if(this.toolbar==null)
{var status=dnn.dom.scriptStatus('dnn.controls.dnntoolbar.js');if(status=='complete')
{this.toolbar=new dnn.controls.DNNToolBar(this.ns);this.toolbar.loadDefinition(this.toolbarId,this.nsPrefix,this.container,this.container.parentNode,this.container,this._toolbarActionDelegate);this.handleToolbarDisplay();}
else if(status=='')
dnn.dom.loadScript(dnn.dom.getScriptPath()+'dnn.controls.dnntoolbar.js','',this._initToolbarDelegate);}},toolbarAction:function(btn,src)
{var action=btn.clickAction;if(action=='edit')
this.performEdit();else if(action=='save')
{this.persistEdit();this.toolbar.hide();}
else if(action=='cancel')
{this.cancelEdit();this.toolbar.hide();}
else if(this.isFormatButton(action))
{if(this.editWrapper)
{var link;if(action=='createlink'&&dnn.dom.browser.isType(dnn.dom.browser.InternetExplorer)==false)
link=prompt(btn.tooltip);this.editWrapper.focus();this.editWrapper.execCommand(action,null,link);}}},performEdit:function()
{if(this.toolbar)
this.toolbar.hide();this.initEditWrapper();if(this.editContainer!=null)
{this.editContainer.style.height=(dnn.dom.positioning.elementHeight(this.container)+4)+'px';this.editContainer.style.width='100%';this.editContainer.style.display='';this.editContainer.style.overflow='auto';this.editContainer.style.overflowX='hidden';this.prevText=this.container.innerHTML;if(dnn.dom.browser.isType(dnn.dom.browser.Safari)&&this.container.innerText)
this.prevText=this.container.innerText;this.editWrapper.setText(this.prevText);this.initEditControl();this.container.style.display='none';this.handleToolbarDisplay();var arg=new Sys.CancelEventArgs();this.invoke_handler('beforeEdit',arg);if(arg.get_cancel())
{this.cancelEdit();return;}}},showToolBar:function()
{this.initToolbar();if(this.toolbar)
this.toolbar.show(true);},mouseMove:function(e)
{if(this.toolbarId.length>0&&this.toolbarEventName=='onmousemove')
this.showToolBar();this.container.className=this.css+' '+this.cssOver;},mouseOut:function()
{if(this.toolbar)
this.toolbar.beginHide();this.container.className=this.css;},initEditWrapper:function()
{if(this.editWrapper==null)
{var richText=(this.richTextEnabled&&this.supportsRichText);var script=(richText?'dnn.controls.dnnrichtext.js':'dnn.controls.dnninputtext.js');var status=dnn.dom.scriptStatus(script);if(status=='complete')
{var txt;if(this.richTextEnabled&&this.supportsRichText)
{var func=dnn.dom.getObjMethRef(this,'initEditControl');txt=new dnn.controls.DNNRichText(func);}
else
txt=new dnn.controls.DNNInputText(this.multiLineEnabled);this.editWrapper=txt;this.editContainer=this.editWrapper.container;this.container.parentNode.insertBefore(this.editContainer,this.container);if(this.richTextEnabled&&this.supportsCE)
this.initEditControl();}
else if(status=='')
dnn.dom.loadScript(dnn.dom.getScriptPath()+script,'',this._performEditDelegate);}},initEditControl:function()
{if(this.editWrapper.initialized)
{this.editControl=this.editWrapper.control;this.editControl.className=this.container.className+' '+this.cssEdit;this.editWrapper.focus();if(this.editWrapper.loaded==false)
{var eventObj={keypress:this.handleKeyPress,mousemove:this.mouseMove,mouseout:this.mouseOut};if(this.onblurSave)
eventObj.blur=this.persistEdit;if(this.editWrapper.supportsCE||this.editWrapper.isRichText==false)
this.addHandlers(this.editControl,eventObj,this);else
this.addHandlers(this.editContainer.contentWindow.document,eventObj,this);this.editWrapper.loaded=true;}}},persistEdit:function()
{if(this.editWrapper.getText()!=this.prevText)
{if(this.invoke_compatHandler('beforeSave',null,this))
{this.editControl.className=this.container.className+' '+this.cssWork;eval(this.callBack.replace('[TEXT]',dnn.escapeForEval(this.editWrapper.getText())));}}
else
this.showLabel();},cancelEdit:function()
{this.editWrapper.setText(this.prevText);this.showLabel();},callBackStatus:function(result,ctx,req)
{var lbl=ctx;lbl.invoke_compatHandler('callBackStatus',result,ctx,req);},callBackSuccess:function(result,ctx,req)
{ctx.callBackStatus(result,ctx);ctx.invoke_handler('callBackSuccess',new dnn.controls.DNNCallbackEventArgs(result,ctx,req));ctx.showLabel();},raiseEvent:function(sFunc,evt,element)
{if(this[sFunc].length>0)
{var ptr=eval(this[sFunc]);return ptr(evt,element)!=false;}
return true;},handleToolbarDisplay:function()
{if(this.toolbar)
{var inEdit=this.isEditMode();var btn;for(var key in this.toolbar.buttons)
{btn=this.toolbar.buttons[key];if(typeof btn=='function')
continue;if(key=='edit')
btn.visible=!inEdit;else if(this.isFormatButton(key))
btn.visible=(inEdit&&this.editWrapper&&this.editWrapper.isRichText);else
btn.visible=inEdit;}
this.toolbar.refresh();}},isFormatButton:function(key)
{return'~bold~italic~underline~justifyleft~justifycenter~justifyright~insertorderedlist~insertunorderedlist~outdent~indent~createlink~'.indexOf('~'+key+'~')>-1;},showLabel:function()
{this.container.innerHTML=this.editWrapper.getText();this.container.style.display='';this.container.className=this.css;this.editContainer.style.display='none';this.handleToolbarDisplay();},callBackFail:function(result,ctx,req)
{ctx.invoke_handler('callBackFail',new dnn.controls.DNNCallbackEventArgs(result,ctx,req));ctx.cancelEdit();},handleKeyPress:function(e)
{if(e.charCode==KEY_RETURN&&this.editWrapper.supportsMultiLine==false)
{if(this.saveOnEnter)
this.persistEdit();e.preventDefault();}
else if(e.charCode==KEY_ESCAPE)
{this.cancelEdit();e.preventDefault();}},dispose:function()
{this._toolbarActionDelegate=null;this._initToolbarDelegate=null;this._performEditDelegate=null;dnn.controls.DNNLabelEdit.callBaseMethod(this,'dispose');}}
dnn.controls.DNNLabelEdit.registerClass('dnn.controls.DNNLabelEdit',dnn.controls.control);