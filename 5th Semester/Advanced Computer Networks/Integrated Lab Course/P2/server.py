import socket 

server=socket.socket(socket.AF_INET,socket.SOCK_DGRAM) 
server.bind(('localhost',65432))
while(True):
    d,a=server.recvfrom(1024)
    server.sendto(d,a)