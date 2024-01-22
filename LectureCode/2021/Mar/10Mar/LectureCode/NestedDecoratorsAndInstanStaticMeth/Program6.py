class India1:

    def decor(fun):
        
        def inner(self=None):

            fun()
        return inner

    @decor
    def printIndeDay():
        print("15 Aug 1947")

obj = India1()
obj.printIndeDay()

