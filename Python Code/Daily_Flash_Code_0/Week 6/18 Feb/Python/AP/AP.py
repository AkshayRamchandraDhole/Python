s=int(input("Enter Starting Element:-"))
n=int(input("Number of Element:"))
cd=int(input("Common Difference:"))
sum=s
for i in range(n):
	print(sum,end=' ')
	sum+=cd
print()
