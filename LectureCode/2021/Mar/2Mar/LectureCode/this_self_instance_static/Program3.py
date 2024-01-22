class Core2web:

    teacher = "Shashi"

    def __init__(ak):
        ak.studName = "Sachin"

obj1 = Core2web()
obj2 = Core2web()

print(obj1.teacher,",",obj2.teacher)
print(obj1.studName,",",obj2.studName)

obj1.studName = "Shardul"

print(obj1.teacher,",",obj2.teacher)
print(obj1.studName,",",obj2.studName)

#Core2web.teacher = "Pramod Sir"

print(obj1.teacher,",",obj2.teacher)
print(obj2.studName,",",obj2.studName)

obj2.teacher = "Pramod Sir"

print(obj1.teacher,",",obj2.teacher)
print(obj2.studName,",",obj2.studName)
