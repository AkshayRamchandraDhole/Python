
def calFact(num) :

	num = int(num)
	fact = 1
	while num > 0 :
		fact*=num
		num-=1
	return fact;

n = int(input("Enter Number of Employees : \n"))
r = int(input("Enter No of medals to be distributed : \n"))

p = int(calFact(n)) / int(calFact(n-r))

print("There are ",p," ways to distribute ",r," medals among ",n," Employees")
