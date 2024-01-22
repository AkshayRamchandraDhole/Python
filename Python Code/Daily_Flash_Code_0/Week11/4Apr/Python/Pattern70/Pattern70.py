st=input("Enter String:")
for i in range(10):
    for j in range(5):
        if(i<5):
            if(j<5-i):
                print(" ",end='\t')
            else:
                print(st[j],end='\t')
        else:
            if(j<i-5):
                print(" ",end='\t')
            else:
                print(st[j],end='\t')
    print()
