num = int(input("Enter the number : "))
numArr_list1 = list()
numArr_list2 = list()

print("Enter Elements for Array 1")
for i in range(num):
    numArr_list1.append(int(input()))

print("Enter Elements for Array 2")
for i in range(num):
    numArr_list2.append(int(input()))

for i in range(num):
	numArr_list2[i],numArr_list1[i] = numArr_list1[i],numArr_list2[i]

print("After Swapping Elements in First Array and Second Array are\n");
print("\t\tFirst\t\tSecond\n")	
for i in range(num):
	print("At Index ",i," = \t",numArr_list1[i],"\t\t",numArr_list2[i])


