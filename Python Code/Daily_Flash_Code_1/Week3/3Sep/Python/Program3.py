def fact(num):
    """ This Function is for to Calculate the factorial of enter number
        function fact takes one argument which is integer number and then
        gives factorial of that number
    """
    fact=1
    for i in range(1,num+1):
        fact*=i
    print("Factorial of",num,"is:",fact) 
num=int(input("Enter Number:"))
fact(num)
print(fact.__doc__)
