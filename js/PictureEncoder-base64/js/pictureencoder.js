onmessage = function (event) {
    var file = event.data;
    
    if (!file.type || !file.type.match('image.*')) {
        postMessage({
            error:100
        });
        return;
    }
    
    var reader = new FileReader();
    reader.onload = fileLoaded;
    reader.onprogress = updateProgress;
    reader.onerror = errorHandler;
    reader.readAsDataURL(file);
    
}

function fileLoaded(e){
    postMessage({
        result:e.target.result
        });
}

function updateProgress(evt) {
    postMessage({progress:true});
    if (evt.lengthComputable) {
        // evt.loaded and evt.total are ProgressEvent properties
        var loaded = (evt.loaded / evt.total);
        if (loaded < 1) {
            // Increase the prog bar length
            // style.width = (loaded * 200) + "px";
            postMessage({load:loaded});
        }
    }
}
function errorHandler(evt) {
//  if(evt.target.error.code == evt.target.error.NOT_READABLE_ERR) {
    postMessage({error:evt.target.error.code});
//  }
}