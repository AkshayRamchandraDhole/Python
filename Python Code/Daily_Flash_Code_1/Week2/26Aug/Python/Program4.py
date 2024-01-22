list1=[7,4,8,9,5]
max1,max2,max3=0,0,0
print(list1)
for i in list1:
    if(i > max1):
        max3=max2
        max2=max1
        max1=i
    elif(i > max2):
        max3=max2
        max2=i
    elif(i > max3):
        max3=i
print("Third Highest in list:",max3)


