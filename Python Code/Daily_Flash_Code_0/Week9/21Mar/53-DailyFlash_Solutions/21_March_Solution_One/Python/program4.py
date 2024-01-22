

for itr in range(4):
    for jtr in range((6-itr)+1):
        print("",end='\t')if jtr<itr else print(jtr+(itr*itr),end="\t")
    print("")    
