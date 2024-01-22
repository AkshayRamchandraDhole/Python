def decor(fun):

    print(fun)

    def Inner():
        print("In Inner Function")
        fun()
        print("After Fun")
    return Inner
@decor
def decorDemo():
    print("Simple Decor")
decorDemo()


