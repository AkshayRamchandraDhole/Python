class IPL:

    runs=7867

    def __init__(self):
        print("In Constructor")
    
    def fun(self):
        print("In Fun")
ipl2020 = IPL()
print(ipl2020)
print(ipl2020.runs)
ipl2020.fun()
ipl2020.runs=10000
print(ipl2020.runs)

ipl2019 = IPL()
print(ipl2019)
print(ipl2019.runs)
ipl2019.fun()

