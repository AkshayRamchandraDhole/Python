st = input("Enter the string : ")

v = {'A' : 0, 'E' : 0, 'I' : 0, 'O' : 0, 'U' : 0, 'a' : 0, 'e' : 0, 'i' : 0, 'o':0, 'u' : 0}



for x in st :

	if x in v :
		v[x]+=1

print("Count Of Vowels is ")
for x  in v :
	if v[x] != 0 :
		print(x," = ",v[x])
