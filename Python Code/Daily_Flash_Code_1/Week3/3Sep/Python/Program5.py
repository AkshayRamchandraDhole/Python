import os
shut=input("You want to shutdown your computer..(yes/no)")
if(shut=="no"):
    exit()
else:
    os.system("shutdown /s /t 1")
