a=int(input("enter the number of elements:"))
f=[]
k=input("enter the number k:")
for i in range(a):
 c=input("enter the  elements:")
 f.append(c)
d=0

for i in f:
   if  i==k :
     d=d+1
if(d>0):
  print("count",d)
  print("yes")
else:
  print("no")
