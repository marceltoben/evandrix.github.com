Object.prototype.bind = function(context){
    var slice = Array.prototype.slice;
    var __method = this, args = slice.call(arguments, 1);
    return function() {
        var a = merge(args, arguments);
        return __method.apply(context, a);
    }
}

function createResultElement(data){
    var li = document.createElement('li');
    var html = '<img src="'+data+'" class="pic-thumb" /><br/>';
    html += 'Image data:<span class="data-result">'+data+'</span><br/>';
    html += '<details><summary>Use examples</summary>Image example:<span class="data-result">&lt;img src="'+data+'" alt=""/&gt;</span><br/>';
    html += 'CSS example:<span class="data-result">background-image: url('+data+');</span></details>';
    li.innerHTML = html;
    return li;
}

function appendExternalResult(data){
    var li = createResultElement(data);
    var results = document.querySelector('output.parsed-files > ul');
    results.appendChild(li);
}

function FileFormHandler(){
    this.observe();
}
FileFormHandler.prototype = {
    fileList: [],
    observe: function(){
        var form = document.querySelector("form#file-process");
        form.addEventListener("submit", this.handleFileForm.bind(this), true);
        var fileInput = form.querySelector('input#filesUploaderField');
        fileInput.addEventListener("change", this.handleInputFileChange.bind(this), false);
        document.addEventListener('dragenter', this.documentDragEnter.bind(this), true);
        var drop = document.querySelector('div.drop-zone');
        drop.addEventListener('dragover', function(e){
            e.stopPropagation();
            e.preventDefault();
        }, false);
        drop.addEventListener('drop', this.handleInputFileChange.bind(this), false);
    },
    documentDragEnter: function(e){
        
        var drop = document.querySelector('div.drop-zone');
        if( drop.classList.contains('hidden') ){
            drop.classList.remove('hidden')
            drop.classList.add('in');
        }
    },
    
    handleFileForm: function(e){
        if(e){
            e.preventDefault();
        }
        this.processFile();
    },
    
    processFile: function(){
        if( this.fileList.length == 0 ) {
            //clean up form
            var list = document.querySelectorAll('output.file-list > ul > li:not(.error)');
            for(var i=0;i<list.length;i++){
                list[i].parentNode.removeChild( list[i] );
            }
            document.querySelector('input#filesUploaderField').value = '';
            return;
        }
        
        var results = document.querySelector('output.parsed-files > ul');
        var li = document.querySelector('output.file-list > ul > li:not(.process)');
        li.classList.add('process');
        var file = this.fileList.shift();
        var context = this;
        var worker = new Worker('js/pictureencoder.js');
        worker.onmessage = function (event) {
            var data = event.data;
            if( data.result ){//finished
                this.classList.add('done');
                var li = createResultElement(data.result);
                results.appendChild(li);
            } else if( data.error ){
                li.classList.add('error');
            } else {
                ///
            }
            context.processFile();
        }.bind(li);
        worker.postMessage(file);
    },
    
    handleInputFileChange: function(e){
        e.stopPropagation();
        e.preventDefault()
        var drop = document.querySelector('div.drop-zone');
        if( !drop.classList.contains('hidden') ){
            drop.classList.add('hidden')
            drop.classList.remove('in');
        }
        var list = document.querySelector('output.file-list > ul');
        var files = e.dataTransfer ? e.dataTransfer.files : e.target.files;
        
        for (var i = 0, f; f = files[i]; i++) {
            if (!f.type.match('image.*')) {
                continue;
            }
            var li = document.createElement('li');
            li.innerHTML = '<details><summary>' + f.name + '</summary> (' + (f.type ? f.type : 'n/a') + '), size: '+f.size+'</details>';
            list.appendChild(li);
            this.fileList.push(f);
        }
    }
}

new FileFormHandler();