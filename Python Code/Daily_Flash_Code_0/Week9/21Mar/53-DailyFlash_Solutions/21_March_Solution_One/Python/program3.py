length = input("Enter the length : ")

arr =[]

for itr in range(length):
    arr.append(input("Enter the num : "))

sum1 = 0 
for itr in range(length):
    sum1 = sum1 + arr[itr]


print("Sum = "+str(sum1))
print("Avg = "+str(sum1/length))
