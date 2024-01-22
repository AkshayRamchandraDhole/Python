def sumNum(x,y):
    sum=0
    for i in range(x,y+1):
        sum+=i
    print(sum)
start = int(input("Enter Starting Value:"))
end = int(input("Enter Ending Value:"))
sumNum(start,end)
