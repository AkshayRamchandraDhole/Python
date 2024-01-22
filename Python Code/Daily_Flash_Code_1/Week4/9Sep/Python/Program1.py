import sys
print("Before setting the limit:",sys.getrecursionlimit())
sys.setrecursionlimit(10*3) 
print("After setting the limit:",sys.getrecursionlimit())
