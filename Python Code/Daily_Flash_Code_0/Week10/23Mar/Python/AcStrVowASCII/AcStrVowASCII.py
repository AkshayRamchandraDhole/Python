str=input("Enter String:")
list1=['A','a','E','e','I','i','O','o','U','u']
for i in str:
    if(i in list1):
        print(i,":",ord(i),end='\n')

    
