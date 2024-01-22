Home=["TV","SOfa","Cooler","Fan","Bed","Table","Cheer","Clock"]
print(Home)

#delete single element from list

del Home[0]
print(Home) # Sofa,Cooler,Fan

# Deleting from range

del Home[0:2]
print(Home)  # Fan,Bed,Table,Cheer,Clock

# Delete Whole list

del Home
print(Home)  # shows error Home is not defined because it delete the Home entirely
