
ch = 65


for itr in range(4):
    ch = 65+itr
    for jtr in range(4):
        if jtr<3-itr:
            print("\t",end="")
        else:
            print(chr(ch)+""+str(itr+jtr),end="\t")
            ch=ch-1
            
    print("")        
