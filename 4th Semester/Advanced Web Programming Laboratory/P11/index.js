const http = require('http');
const os = require('os');
const path = require('path');
const { EventEmitter } = require('events');

const emitter = new EventEmitter();

http.createServer((req, res) => {
  res.writeHead(200,{'Content-Type':'text/plain'})
  res.end('Hello, World!');
}).listen(3000,() => {
  console.log('Server running on http://127.0.0.1:3000/');
});

console.log('OS:', os.type(), os.platform(), os.arch());
console.log('CPU Cores:', os.cpus().length);
console.log('CWD:', process.cwd());
console.log('Path:', path.join(__dirname, 'public', 'images'));

emitter.on('custom', data => console.log('Event:', data));
emitter.emit('custom', 'Hello!');