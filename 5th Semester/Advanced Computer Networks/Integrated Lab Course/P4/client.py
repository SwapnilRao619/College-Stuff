import socket,struct

segments = [0x4500, 0x001c, 0x0000, 0x4000, 0x0411,0x0000, 0x0A0C, 0x0E05, 0x0E06, 0x0709]
c=socket.create_server(('localhost',12345))
for seg in segments:
    c.send(struct.pack('!H',seg))
rcs=struct.unpack('!H',c.recv(2))[0]
ccs=~sum(segments)&0xFFFF
for seg in segments:
    print(f"Segment: {hex(seg)}")
print(f"Received checksum: {hex(rcs)}")
print(f"Calculated checksum: {hex(ccs)}")