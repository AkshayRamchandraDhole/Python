st=input("Enter String:")
l1=st
sub=input("Enter substring to find:")
if sub in l1:
    print("The entered string consists",sub,"as substring")
else:
    print("No substring found!!")
