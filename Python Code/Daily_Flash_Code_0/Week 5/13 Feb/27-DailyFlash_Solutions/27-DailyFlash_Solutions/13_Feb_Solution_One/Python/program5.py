
oddCount = 0
evenCount = 0

num = input("Enter the number : ")

rem = 0


while num!=0:
    rem = num%10

    if rem%2==0 :
        evenCount =evenCount+1
    else:
        oddCount =oddCount+1

    num = num/10


print("Even count "+str(evenCount))

print("Odd count "+str(oddCount))
