import time
print("Starting task...")
start=time.time()
while((time.time()-start)<30):
    x=0
    for i in range(1_000_000):
        x+=i*i
print("Task done")
