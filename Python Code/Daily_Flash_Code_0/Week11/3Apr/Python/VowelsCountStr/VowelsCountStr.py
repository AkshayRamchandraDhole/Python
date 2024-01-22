st=input("Enter String:")
a=0
list1=['a','A','e','E','i','I','o','O','u','U']
for i in st:
    if(i in list1):
        a+=1
print("The Vowels is occurred for",a,"times in that string")
