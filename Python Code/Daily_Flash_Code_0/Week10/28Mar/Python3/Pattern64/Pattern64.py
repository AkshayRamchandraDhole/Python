st="CORE2WEB"
for i in range(0,15):
    for  j in range(0,8):
        if(j<=i and i<15-j):
            print(st[j],end='\t')
        else:
            print(" ",end='\t')
    print()
