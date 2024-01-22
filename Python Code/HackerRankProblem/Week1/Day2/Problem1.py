n=int(input())
evenSum=0
oddSum=0
eCount=0
oCount=0
if(n < 0):
    evenSum=-1.0
    oddSum=-1
    print(evenSum)
    evenSum=-2
    print(evenSum,oddSum)
for i in range(n+1):
    if(i % 2 == 0):
        evenSum+=i
        eCount+=1
    else:
        oddSum+=i
        oCount+=1
if(evenSum==oddSum):
    print(evenSum)
    print(evenSum)
if(evenSum >= oddSum):
    print(evenSum/eCount)
    print(oddSum,evenSum)
    

    
