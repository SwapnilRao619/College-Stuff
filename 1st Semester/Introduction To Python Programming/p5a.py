import math
import time
import pprint
import sys
import random

PROFILE_DATA = {"user_id":409,"name":"abc","DOB":"23/06/1996","qualification":"B.E.","work_experience":3}

print(f"Prints a random number from the entered range: {random.randrange(10)}")
print(f"Shows local time: {time.localtime()}")
print(f"Gives back absolute value: {math.fabs(-3)}")
print(f"System version shown: {sys.version}")
print(f"Dictionary before pretty print:\n{PROFILE_DATA}")
print("Dictionary after pretty print:\n")
p = pprint.PrettyPrinter()
p.pprint(PROFILE_DATA)
