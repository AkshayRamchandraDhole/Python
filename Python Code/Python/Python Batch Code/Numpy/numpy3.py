import numpy as np
dict1=dict()
for i in range(int(input("Enter no of Element:-"))):
	dict1[int(input("Enter key:-"))]=input("Value:-")
for i in dict1:
	print(i,":",dict1[i])
