'''
This is the "nester.py" module and it provide one function called print_lol which print lists that may or may not include nested lists.
'''
def lol(name):
    '''
    This function takes a positional argument called "name" which is python list.Each data item in the provided list is recursively printed to the screen on its own line.
    '''
    for i in name:
        if(isinstance(i,list)):
            lol(i)
        else:
            print(i)
name=["Akshay","Gaurav",["Kavi","Navi"],["Amit","Krishu"]]
lol(name)
