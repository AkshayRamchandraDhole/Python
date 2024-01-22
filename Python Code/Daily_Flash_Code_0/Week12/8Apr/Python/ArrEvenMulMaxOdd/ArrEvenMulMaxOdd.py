
import numpy
def even(n):
    if(n%2==0):
        return n
    else:
        return 0;

def odd(n):
    if(n%2!=0):
        return n
    else:
        return 0

m = int(input("Row : "))
n = int(input("Col : "))
l = []
for i in range(0,m):
    l.append([])
for i in range(0,m):
    for j in range(0,n):
        l[i].append(int(input()))

add=0
maxodd=0
list1=[]
for i in range(0,m):
    for j in range(0,n):
            x=even(l[i][j])
            y=odd(l[i][j])
            add+=x
            list1.append(y)
print("Sum of even element:",add)
z=max(list1)
print(add,"*",z,"=",add*z)

