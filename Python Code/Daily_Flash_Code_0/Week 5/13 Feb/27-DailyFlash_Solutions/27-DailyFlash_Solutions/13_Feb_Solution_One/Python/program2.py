hex1 = raw_input("Enter the hex number : ")

base = 1
decNum = 0 

for itr in range(len(hex1)-1,-1,-1):

    if hex1[itr]>='0' and hex1[itr]<='9':

        decNum = decNum + (ord(hex1[itr])-48)*base;
    elif hex1[itr]>='A' and hex1[itr]<='F':
        decNum = decNum + (ord(hex1[itr])-55)*base;
    base = base*16    

print(decNum)
