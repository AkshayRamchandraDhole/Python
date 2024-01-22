eg="4+x+12=24"
print(eg)
n=len(eg)
s=1
c=0
t=0
i=0
for j in range(0,n):
    if(eg[j]=='+' or eg[j]=='-'):
        if(j > i):
            t=(t + s * int(eg[i: j]))
        i=j
    elif(eg[j]=='x'):
        if((i==j) or eg[j-1]=='+'):
            c+=s
        elif(eg[j-1]=='-'):
            c=c-s
        else:
            c=(c + s * int(eg[i: j]))
            
        i=j+1
    elif(eg[j]=='='):
        if(j>i):
            t=(t + s * int(eg[i: j]))
        s=-1
        i=j+1
if(i < n):
    t=(t + s * int(eg[i: len(eg)]))
if(c ==0 and t == 0):
    print("no output")
if(c ==0 and t):
    print("no ")
ans = -t / c
print("X=",int(ans))

