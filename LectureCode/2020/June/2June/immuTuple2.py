myfrnd=(["Gaurav","Krishna"],("Kavi","Navi","Pradnya"))

print(myfrnd)

#Tuple is immutable but list is mutuble hence we change into list

myfrnd[0].insert(1,"Amit")
print(myfrnd)
myfrnd[0].append("Shreyas")
print(myfrnd)


myfrnd[0].pop()
print(myfrnd)
