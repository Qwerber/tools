net = require("net");

sock = new net.Socket();

sock.on("data", function(data){
	console.log("msg " + data.toString());
});

sock.connect(1337, "localhost", function(){
	console.log("you've connected");
});

process.stdin.on('data', function(text){
	sock.write(text);
});