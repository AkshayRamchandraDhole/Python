s=4
for x in range(s,-(s),-1):
    for y in range(1,abs(x)+1):
        print(" ",end="")
    for z in range(s,abs(x),-1):
        print("1 ",end="")
    print()
