n1=int(input())
n2=int(input())
l1=list()
l1.append(n1*n1)
l1.append(n2*n2)
l1.append(n1*n1*n1)
l1.append(n2*n2*n2)
print(l1)
l1=sorted(l1)
le=len(l1)
print(le)
min1=l1[0]
max1=l1[le-1]
print(min1,max1)
avg=0
sum1=0
count=0
for i in range(min1,max1):
    sum1+=i
    count+=1
avg=sum1/count
avg=int(avg)
print(sum1,avg,count)
for i in range(5):
    for j in range(i+1):
        print(avg,end=" ")
        avg+=1
    print()
