a=list(input("Enter the numbers"))
b=a[:len(a)//2]
c=a[len(a)//2:]
b.sort()
f=sorted(c,reverse=True)
g=b+f
print("".join(g))
