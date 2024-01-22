

num = 7

for itr in range(4):
    num = 7 -itr
    for jtr in range(itr+1):
        print(num,end="\t")
        num = num - 1
    print("")    
