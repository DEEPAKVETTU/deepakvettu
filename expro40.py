a=input("enter the string")
n=0
k=["d","h","o","n","i"]
for i in a:
  if i in k:
    n=n+1
if n==5:
  print("yes")
else:
 print("no")
