import socket 

client=socket.socket(socket.AF_INET,socket.SOCK_DGRAM) 
client.sendto(input("Enter message: ").encode(),('localhost',65432)) 
print(client.recvfrom(1024)[0].decode())
client.close()