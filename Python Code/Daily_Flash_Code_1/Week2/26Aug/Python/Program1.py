import psutil
for i in psutil.process_iter():
    print(i)
