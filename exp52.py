n=int(input("enter range"))
d=[]
for i in range(0,n):
  c=int(input("enter elements"))
  d.append(c)
d.sort()
b=int(input("enter the kth elements"))
print(d[b-1])
