developer=['Linus Torvalds','Guido Van Rossum','James Gosling','Dennis Ritchie']
work=['Linux','Python','Java','C&Unix']
tu=list()
for i in range(len(developer)):
    li=(developer[i],work[i])
    tu.append(li)
f_set=frozenset(tu)
print(f_set)
