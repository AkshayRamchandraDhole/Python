
import array as arr
#for i in range(5):
a=int(input("Enter A 1 Value:-"))
b=int(input())
c=int(input())
d=int(input())
e=int(input())
list1=[a,b,c,d,e]
ar=arr.array('i',list1)
for i in ar:
	print(i)
print()
ar2=arr.array(ar.typecode,(var for var in ar))

for j in ar2:
	print(j)
print()




