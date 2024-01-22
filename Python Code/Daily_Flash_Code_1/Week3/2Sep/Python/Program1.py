import math
def pronicNum(num):
    sqr=int(math.sqrt(num))
    pro=sqr*(sqr+1)
    if(pro==num):
        print(num,"is Pronic Number")
    else:
        print(num,"is not Pronic Number")
num=int(input("Enter Number:"))
pronicNum(num)

