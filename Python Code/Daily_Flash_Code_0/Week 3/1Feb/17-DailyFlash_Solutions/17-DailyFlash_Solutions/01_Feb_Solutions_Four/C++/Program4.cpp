

/*
   Write a Program to Print following Pattern.
   + = + =
   + = +
   + =
   +
   */

#include <iostream>
using namespace std;
int main()  {

	int rows;
	cout << "Enter number of rows: ";
	cin >> rows;
	for(int i = rows; i >= 1; --i){

		for(int j = 1; j <= i; ++j){

			if(j % 2 == 0) {
				cout << " = ";

			}
			else {
				cout << " + ";
			}	    
		}
		cout << endl;
	}

	return 0;
}
