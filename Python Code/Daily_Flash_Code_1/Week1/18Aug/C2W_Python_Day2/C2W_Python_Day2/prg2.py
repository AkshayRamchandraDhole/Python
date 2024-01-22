from array import array

odd = [1, 3, 5, 7, 9]

odd_Array = array('i', (x * x for x in odd))
print(odd_Array)
