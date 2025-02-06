import socket, struct

s = socket.create_server(('', 12345))
while True:
    c, addr = s.accept()
    segs = [struct.unpack('!H', c.recv(2))[0] for _ in range(10)]
    checksum = ~sum(segs) & 0xFFFF
    c.send(struct.pack('!H', checksum))
    for seg in segs:
        print(f"Received: {hex(seg)}")
    print(f"Checksum: {hex(checksum)}")