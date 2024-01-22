st=input("Enter String:")
list1=['a','A','e','E','i','I','o','O','u','U']
a=0
A=0
e=0
E=0
i1=0
I1=0
o=0
O=0
u=0
U=0
for i in st:
    if i in list1:
        if(i=='a'):
            a+=1
        elif(i=='A'):
            A+=1
        elif(i=='e'):
            e+=1
        elif(i=='E'):
            E+=1
        elif(i=='i'):
            i1+=1
        elif(i=='I'):
            I1+=1
        elif(i=='o'):
            o+=1
        elif(i=='O'):
            O+=1
        elif(i=='u'):
            u+=1
        elif(i=='U'):
            U+=1
print("a=",a)
print("A=",A)
print("i=",i1)
print("I=",I1)
print("e=",e)
print("E=",E)
print("i=",i1)
print("I=",I1)
print("o=",o)
print("O=",O)
print("u=",u)
print("U=",U)


