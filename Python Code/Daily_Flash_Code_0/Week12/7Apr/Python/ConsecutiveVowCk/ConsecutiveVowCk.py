st=input("Enter String:")
list1=['a','A','e','E','i','I','o','O','u','U']
for i in range(len(st)):
    if(st[i] in list1):
        if(st[i+1] in list1):
            if(st[i] in list1 and st[i+1] in list1):
                print(st[i],end=' ')
                print(st[i+1],end=' ')
