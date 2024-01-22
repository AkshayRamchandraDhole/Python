st1=input("Enter String1:")
st2=input("Enter String2:")
x=len(st1)
y=len(st2)
n=" "
for j in range(len(st2)):
    if(st1[j]!=st2[j]):
        n=n+st2[j]
print("After removing all character:",n)


