def fact(n : int)-> int:
    f = 1
    if n == 0:
        return 1

    for i in range(1,n+1):
        f = f*i
    return f


n = int(input("Enter N : "))
r = int(input("Enter R : "))
per = fact(n)/(fact(r)*fact(n-r))
print("There are",int(per),"combination to distribute",r,"medals amongst",n,"employees")

