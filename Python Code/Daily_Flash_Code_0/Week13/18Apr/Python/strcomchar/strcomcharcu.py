st1=input("Enter String1:")
st2=input("Enter String2:")
n=int(input("How many character from string to compare:"))
for i in range(n):
    if(st1[i]==st2[i]):
        print("Equal")
    else:
        print("Not equal")

