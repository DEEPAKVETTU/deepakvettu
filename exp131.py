a=input("ENTER THE NUMBERS")
n=0
for i in a:
 if int(i)%2!=0:
   n=n+int(i)
if(n%2==0):
 print("E")
else:
  print("O")
