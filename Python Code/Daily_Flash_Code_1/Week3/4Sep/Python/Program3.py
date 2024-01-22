cnt=0
for i in range(1,7):
    for j in range(1,7):
        if(i==j):
            cnt+=1
print("Probability of getting a doublet:",cnt)
