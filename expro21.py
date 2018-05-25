a=input("Enter the numbers")
b=a[len(a)//2:]
c=a[:len(a)//2]
d=0
e=0
for i in b:
  d=d+int(i)

for j in c:
  e=e+int(j)
  
f=d/len(b)
g=e/len(c)

if f==g:
  print("yes")
else:
 print("no")
