// require the HTTP module so we can create a server object
var http = require('http');

// Create an HTTP server, passing a callback function to be
// executed on each request. The callback function will be
// passed two objects representing the incoming HTTP
// request and our response.
var helloServer = http.createServer(function (req, res) {
	// send back the response headers with an HTTP status
	// code of 200 and an HTTP header for the content type
	res.writeHead(200, {'Content-Type': 'text/plain'});

	// send back the string “Hello world!” and close the
	// connection
	res.end('Hello world!');
});

// tell our hello world server to listen for HTTP requests
// on localhost’s port 8124
helloServer.listen(8124, "127.0.0.1");

// log a message to the console
console.log('Server running at http://127.0.0.1:8124/');
