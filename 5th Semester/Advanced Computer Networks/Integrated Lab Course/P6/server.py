#Credits for this code: https://msrit.pages.dev/
import socket
from ch import c

s=socket.socket(socket.AF_INET,socket.SOCK_RAW,socket.IPPROTO_ICMP)
while True:
    p,_=s.recvfrom(1024)
    if p[20]==8:
        print("Received:",p[28:])
        print("Checksum:", "OK" if c(p[20:])==0 else "Fail")

#ch.py
def c(d):
    s=0
    for i in range(0,len(d),2):
        w=(d[i]<<8)+(d[i+1] if i+1<len(d) else 0)
        s=(s+w)&0xffff
    return (~s)&0xffff