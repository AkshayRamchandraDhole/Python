r=int(input("Enter Row:"))
li=[1,2,3,4,5]
l1=[5,4,3,2,1]
def m1():
    z=0
    for i in range(r,0,-1):
        for j in range(i,r):
            print(" ",end="")
        for k in range(0,i):
            print(str(li[k-i])+" ",end="")
        print()
    for i in range(1,6):
        for j in range(5,i,-1):
            print(" ",end="")
        for k in range(0,i):
            print(str(li[k-i])+" ",end="")
        print()
m1()
