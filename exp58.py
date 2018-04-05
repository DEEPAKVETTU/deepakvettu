d=input("enter a sentence")
char=input("enter the string to be found:")
print(d,("is the word you entered."), ("\n"),char,("is the string u wanted to count."))
if char in d :
    print(d.count(char),("times  the string u entered is repeated."))
else:
    print("no, the string is not in the word ")
