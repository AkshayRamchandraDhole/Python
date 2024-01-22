st=input("Enter String:")
list1=[]
a=" "
st=st+" "
for i in range(0,len(st)):
    if(st[i]!=" "):
        a=a+st[i]
    else:
        list1.append(a)
        a=" "
large=list1[0]
for k in range(0,len(list1)):
    if(len(large)<len(list1[k])):
        large=list1[k]
    print(large)
print("The Word with maximum length from the entered string is:",large)


        
