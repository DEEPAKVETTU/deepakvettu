a=input("enter the string")
n=0
k=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
a=a.lower()
for i in a:
  if i in k:
    n=n+1
if n==26:
  print("yes")
else:
  print("no")
