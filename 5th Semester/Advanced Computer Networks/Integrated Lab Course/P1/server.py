import socket

with socket.socket() as server:
    server.bind(('localhost',65432))
    server.listen(1)
    while(True):
        conn,_=server.accept()
        with conn:
            conn.sendall(open(conn.recv(1024).decode()).read().encode())