


ch = 'A'


for itr in range(5):

    for jtr in range(5-itr,0,-1):
        letter = chr(ord(ch)+itr)
        print(letter,end=" ")
    print(" ")    
