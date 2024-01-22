st=input("Enter String:")
ch=input("Enter character to find occurrence of:")
a=0
for i in st:
    if(i==ch):
        a+=1
print("The occurrence of",ch,"in the entered string is:",a)
