st=input("Enter String:")
a=max(st)
print("Replace String is:",end='')
for i in st:
    if(i=='A' or i=='a' or i=='E' or i=='e' or i=='I' or i=='i' or i=='O' or i=='o' or i=='U' or i=='u'):
        i=a
    print(i,end='')
print()
