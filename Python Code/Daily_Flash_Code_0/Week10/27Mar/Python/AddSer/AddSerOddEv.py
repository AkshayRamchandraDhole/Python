le=int(input("Enter Length of Series:"))
x,y=input("Enter value of X & Y:").split()
x=int(x)
y=int(y)
add=0
list1=[]
for i in range(1,le+1):
    if(i%2==0):
        add+=i/(x+y)**y
        list1.append(add)
    else:
        add+=i/(x+y)**x
        list1.append(add)
a=0
for i in list1:
    a+=i
print("The Additon of Series is:",round(a,2))
    
