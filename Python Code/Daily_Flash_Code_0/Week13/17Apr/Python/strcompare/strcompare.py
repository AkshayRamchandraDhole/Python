st1=input("Enter String1:")
st2=input("Enter String2:")
x=len(st1)
y=len(st2)
if(st1==st2):
    print("Equal")
elif(x!=y):
    print("Not Equal")
else:
    for i in range(len(st1)):
        if(st1[i]!=st2[i]):
            a=ord(st1[i])
            b=ord(st2[i])
            c=a-b
            print("The String are not equal,the difference between dissimilar character is:",c)
        

