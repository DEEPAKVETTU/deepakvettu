a=input("Enter the numbers")
b=a[:len(a)//2]
c=a[len(a)//2:]
d=[]
e=[]
for i in b:
  d=d+int(i)
for j in c:
  e=e+int(i)
f=d/len(b)
g=e/len(c)
if f==g:
  print("yes")
else:
  print("no")
