#Credits for this code: https://msrit.pages.dev/
import socket,os,struct
from ch import c

s=socket.socket(socket.AF_INET,socket.SOCK_RAW,socket.IPPROTO_ICMP)
d=b"data"
id=os.getpid()&0xffff
p=struct.pack("!BBHHH",8,0,0,id,1)+d
ck=c(p)
p=struct.pack("!BBHHH",8,0,ck,id,1)+d
s.sendto(p,("localhost",0))