
def Check_Palindrome(num):

    num = str(num)
    rev = num[::-1]
    rev = int(rev)
    num = int(num)

    if num == rev :
        print(num,end="\t")

m = int(input("Enter the number of Elements of Array : "))

numAr = list()
print("Enter Elements for Array ")
for i in range(m):
    numAr.append(int(input()))

print("Pallindrome Numbers in Array are")

for i in range(m):
    Check_Palindrome(i)

