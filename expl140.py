k=input("Enter the strig:")
a=len(k)
p=0
for i in k:
  if(i=='a' or i=='b'): 
    p=p+1
if p==a:
 print("yes")
else:
  print("no")
