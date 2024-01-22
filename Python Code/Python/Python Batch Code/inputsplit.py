#I,N,S=input("Enter Empolyee ID,Name,Salary")

#I,N,S=input("Enter Employee ID,Name,Salary").split()

I,N,S=input("Enter Employee ID,Name,Salary").split(',',3)
empid=int(I)
name=N
sal=float(S)

print(type(empid))
print(type(name))
print(type(sal))

print(empid)
print(name)
print(sal)

