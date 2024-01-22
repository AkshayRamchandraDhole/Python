Cricket=["Bat","Bowl","Stumps","Player","Oponents","Ground","Umpires"]
print(Cricket)
print(type(Cricket))

#delete using remove() 

Cricket.remove("Ground")
print(Cricket)


#delete using pop() or pop(index)
Cricket.pop()
print(Cricket)

# pop(index)

Cricket.pop(0)
print(Cricket)


#clear() not delete entire reference it just clear the list []

Cricket.clear()    
print(Cricket)
