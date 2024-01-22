int_value1, int_value2 = [int (value) for value in input("Enter integer values\n").split()]

print(int_value1, type(int_value1))
print(int_value2, type(int_value2))

'''
Here We have kept 2 variables on left of "="(assignment) operator while unpacking the list,
so interpreter expects exactly 2 values to be accomodated / stored in the list
If we give input less than 2 values, there will not be enough values to unpack.
If more than 2 values are given, there will be too many values to unpack.
'''
