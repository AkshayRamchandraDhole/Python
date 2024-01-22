proglang=["C","C++","Java","Python"]
print(proglang)

# Insert using append() which insert element at last

proglang.append("Android")
print(proglang)

#Using insert() which insert element at specified index

proglang.insert(2,"ReactJS")
print(proglang)

#using extend() add multiple element at end 

proglang.extend(["HTML",".Net"])
print(proglang)

#update
proglang[6]="VeuJs"
print(proglang)


#Query  in extend() method 
'''
proglang.extend("HTML")
print(proglang)           #it Print ['C', 'C++', 'ReactJS', 'Java', 'Python', 'Android','H','T','M','L']
'''
