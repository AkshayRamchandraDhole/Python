n = int(input("How many dishes you both want to have?\n"))

my_bill = int()
common_bill = int()

print("Start entering the prices of dishes")

for i in range(n) :

    price = int(input())

    if price % 2 == 1 :
        my_bill += price

    else :
        common_bill += price

print('Amount that I am supposed to pay', my_bill + common_bill / 2)
print('Amount that my friend is supposed to pay', common_bill / 2)
