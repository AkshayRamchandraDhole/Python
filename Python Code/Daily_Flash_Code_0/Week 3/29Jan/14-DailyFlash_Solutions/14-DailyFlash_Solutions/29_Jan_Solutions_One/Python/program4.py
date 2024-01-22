

num = 3

for itr in range(4):
    for jtr in range(itr+1):
        print(num,end=" ")
        num = num +1;
    print("")
    num = num -(itr+2)
