import urllib.request as ur
import json

jsonurl=input("Enter url-")
print("Retrieving",jsonurl)
data=ur.urlopen(jsonurl).read().decode()
print("Retrieved",len(data),"characters")
jsonobject=json.loads(data)

sum=0
totalnumber=0
for comment in jsonobject["comments"]:
    sum=sum+int(comment["count"])
    totalnumber=totalnumber+1
print("Count:",totalnumber)
print("Sum:",sum)
//commit
