net = require("net")

clients = [];

function broadcastMsg(msg){
	i = clients.length;
	while(i--){
		clients[i].write(msg);
	}
}

serv = net.createServer(function(socket){
	clients.push(socket);
	console.log("user connected");
	socket.write("hello from server");
	socket.on("data", function(data){
		console.log("!");
		broadcastMsg(data.toString());
	});
});



serv.listen(1337, "localhost");