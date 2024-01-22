def outer(x):
    print(x)
    def inner(y):
        #nonlocal x
        x+=y
        print(x)
        #print(x+y)
    inner(20)
outer(10)
