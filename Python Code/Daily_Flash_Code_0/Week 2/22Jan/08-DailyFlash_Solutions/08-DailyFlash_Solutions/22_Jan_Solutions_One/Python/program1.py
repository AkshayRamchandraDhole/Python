try:
	print("Enter Numbes : ")
	a = int(raw_input())
	b = int(raw_input())
except ValueError as e:
	print("Invalid")
	exit(0)
	pass	

k = a + b;
if(a>b):
	b = a - b
else :
	b = b - a;

print("Addition : {}\nSubtraction : {}".format(k, b));
