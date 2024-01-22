from numpy import *
arr1=linspace(2,3,num=5)
print(arr1)
type(arr1)

arr2=linspace(2,3,num=2,retstep=True)
print(arr2)

arr3=linspace(2,5,num=5,endpoint=False)
print(arr3)

arr4=linspace(1,5,num=2,dtype=float)
print(arr4)

arr5=linspace(4,5,num=3,dtype=str)
print(arr5)

arr6=linspace(7,9,num=3,dtype=int)
print(arr6)
