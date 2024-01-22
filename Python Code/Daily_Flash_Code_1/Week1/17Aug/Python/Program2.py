l1=int(input("Enter Length:"))
li1=[]
for i in range(l1):
    a=int(input("Enter value:"))
    li1.append(a)

'''
Reason to unpack too many values:
    a,b=input().split()
    
    i) In above example if we try to give three value as input then it through too many value error cause.
    
    ii) As you see i use split() then so we can insert only two value in two variable but if we try to insert thrid then it through error.

    iii) If we want to insert third value then we need use this like 
            
            a,b,c=input().split()

'''
