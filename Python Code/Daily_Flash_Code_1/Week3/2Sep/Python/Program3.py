def specialNum(num):
    tmp=num
    rem=0
    su=0
    while(num!=0):
        rem=num%10
        fa=fact(rem)
        su+=fa
        num//=10
    if(tmp==su):
        print(tmp,"is Special Number")
    else:
        print(tmp,"is not Special Number")
def fact(num):
    fat=1
    for i in range(1,num+1):
        fat=fat*i
    return fat
num=int(input("Enter Number:"))
specialNum(num)


