
def isPali(n:int)->int :
    rev = 0
    temp = n
    while(n!=0):
        rev = rev * 10 + n%10
        n //= 10
    	
    if(temp == rev):
    	return 1
    else:
        return 0


print("Enter length of Array : ")
n = int(input())
arr = list()
for i in range(0,n):
    arr.append(int(input()))

for i in range(0,n):
    if isPali(arr[i]) == 1:
        print(arr[i], end = " ")
print()
