

num = input("Enter the number : ")


sum1 = 0

for itr in range(1,num+1):

    sum1=0
    for jtr in range(1,itr/2+1):
        if itr%jtr==0:
            sum1 = sum1 + jtr

    if itr == sum1 or itr ==1:
        print(itr)
