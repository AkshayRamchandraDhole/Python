

sr = input("Enter a String  :\t")

cw = "AEIOUaeiou"

vow = []

for i in sr :
	
	if i in cw :
		vow.append(i)

print("Vowels are ",vow)
