from random import random

def die():
    val = int(random() * 100 % 7)
    print(val) if val != 0 else die()

die()
