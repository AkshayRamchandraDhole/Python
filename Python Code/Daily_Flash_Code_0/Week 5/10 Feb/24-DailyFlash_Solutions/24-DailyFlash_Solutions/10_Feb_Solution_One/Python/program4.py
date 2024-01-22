
for itr in range (4):

    for jtr in range(4):

        if jtr<3-itr:
            print("\t",end="")
        else :
            if 3-jtr==itr:
                print(3,end="\t")
            else:
                print(jtr*(itr+jtr),end="\t")

    print("")                
