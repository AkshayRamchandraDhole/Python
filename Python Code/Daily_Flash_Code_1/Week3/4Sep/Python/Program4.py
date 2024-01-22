cntSum,cntDiff,totalCnt=0,0,0
for i in range(1,7):
    for j in range(1,7):
        if(i+j==6):
            cntSum+=1
        if(i-j==2 or j-i==2):
            cntDiff+=1
        totalCnt+=1
print("Probability of getting sum of numbers on both die as 6 :",cntSum,"/",totalCnt)
print("Probability of getting absolute difference of numbers on both die as 2 :",cntDiff,"/",totalCnt)
