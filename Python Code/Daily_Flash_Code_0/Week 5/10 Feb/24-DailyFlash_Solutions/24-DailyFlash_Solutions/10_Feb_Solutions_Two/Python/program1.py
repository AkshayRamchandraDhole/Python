try:
    n = int(input("Enter Number : "))
except ValueError as e:
    exit(0)
sum = 0
for j in range(1,n+1):
    sum = 0
    for i in range(1,j//2+1):
        if(j % i == 0):
            sum = sum + i
    if(sum > j):
        print(j, end = " ") 
print()

