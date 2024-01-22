Str1=input("Enter String1:")
Str2=input("Enter String2:")
len1=len(Str1)
len2=len(Str2)
if(len1 != len2):
    flag=0
else:
    Str1=sorted(Str1)
    Str2=sorted(Str2)
    for i in range(len(Str1)):
        if(Str1[i]==Str2[i]):
            flag=1
        else:
            flag=0
if(flag==1):
    print("Strings are Anagram")
else:
    print("Strings are not Anagram")


