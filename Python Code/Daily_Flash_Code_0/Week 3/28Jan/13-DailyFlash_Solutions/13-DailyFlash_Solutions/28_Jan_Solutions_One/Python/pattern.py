

num = 1

for outer in range(4):
    for inner in range(outer+1):
        print(num*num*num,end = "\t")
        num=num+1
    print(" ")    
