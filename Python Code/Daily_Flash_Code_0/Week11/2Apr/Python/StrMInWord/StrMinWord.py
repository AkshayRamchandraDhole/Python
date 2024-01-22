st=input("Enter String:")
a=" "
list1=[]
st=st+" "
for i in range(0,len(st)):
    if(st[i]!=" "):
        a=a+st[i]
    else:
        list1.append(a)
        a=" "
small=list1[0]
for k in range(0,len(list1)):
    if(len(small)>len(list1[k])):
        small=list1[k]
print("The Word with minimum length from the entered string is:",small)
