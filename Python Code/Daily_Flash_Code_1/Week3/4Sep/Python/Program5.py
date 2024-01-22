lstSum,larSum,totalCnt,cntSum=0,0,0,0
for i in range(6):
    for j in range(6):
        for k in range(6):
            if(i+j+k==0):
                lstSum+=1
            if(i+j+k == 15):
                larSum+=1
            if(i+j+k==10):
                cntSum+=1
            totalCnt+=1
print("Probability of getting atleast sum of numbers :",lstSum)
print("Probability of getting atmost sum of numbers  :",larSum)
print("Probability of getting sum 10 :",cntSum)
