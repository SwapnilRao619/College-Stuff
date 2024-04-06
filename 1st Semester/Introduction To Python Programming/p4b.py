import pprint

PROFILE_DATA = {"user_id":409,"name":"abc","DOB":"23/06/1996","qualification":"B.E.","work_experience":3}
print(f"Without pretty print, it will look like this:\n{PROFILE_DATA}")

print("With pretty print, it will look like this:\n")
p = pprint.PrettyPrinter()
p.pprint(PROFILE_DATA)