import os,sys
if(len(sys.argv)!=2):
    print("Usage: python ping.py <hostname>")
host=sys.argv[1]
response=os.system(f"ping -c 4 {host}")
if(response==0):
    print(f"{host} is reachable")
else:
    print(f"{host} is unreachable")
