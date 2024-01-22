dishes=int(input("How many dishes You both want to have?:"))
l1=list()
for i in range(dishes):
    price=int(input("Enter The Price of dishes:"))
    l1.append(price)
myBill=0
frndBill=0
for i in l1:
    if( i % 2 != 0):
        myBill+=i
    else:
        frndBill+=i
print("My Bill:",(myBill+(frndBill/2)))
print("My Friend Bill:",(frndBill/2))
    
