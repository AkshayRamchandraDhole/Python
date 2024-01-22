var1=int(input("enter first integer "))
var2=int(input("enter second integer "))

mul=var1*var2
print("Multiplication is ",mul)

if(var1 > var2):
	div=var1//var2
	print("Division is ",div)
elif(var2>var1):
	div=var2//var1
	print("Division is ",div)
