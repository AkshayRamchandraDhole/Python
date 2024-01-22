
list1=["10","20","30","40"]

list2=["10","20","30","40"]

if(list1 is list2): #Gives True when use (==) sign
	print("List1 and List2  have same identity")
else:
	print("List1 and List2 have not same Identity")


list3=("Akshay","Amit","Shreyas","Nitin")
list4=("Aksha","Amit","Shreyas","Nitin")

if(list3 is not list4): #Gives True when use (==) sign
	print("List3 and List4 have not same Identity")
else:
	print("List and List4 have same Identity")

print("id(List3)",id(list3))
print("id(List4)",id(list4))
print("id(List[0])",id(list3[0]))
print("id(List4[0])",id(list4[0]))

