list = [0, 2, 4, 6, 8, 10]

from array import *

a = array('i', [i ** 2 for i in list])
print(a)
