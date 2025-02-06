import socket

with socket.socket() as client:
    client.connect(('localhost',65432))
    client.sendall(input("Enter file name: ").encode())
    print(client.recv(1024).decode())
    client.close()