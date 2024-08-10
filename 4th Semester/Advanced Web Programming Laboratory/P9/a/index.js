const http=require('http')
http.createServer((req,res)=>{
    res.writeHead(200,{'Content-Type':'text/plain'})
    if(req.url==='/about') res.end('About Us')
    else if(req.url==='contact') res.end('Contact Us')
    else res.end('Hello, Node.js!')
}).listen(3000,()=>{console.log("Listening at http://localhost:3000")})