
/*
 * CPP Program to Convert the Hours entered by user into
 Seconds.
 */


#include<iostream>

using namespace std;

int main () {

	float hrs, min, sec = 0;

	cout << "Enter hours : ";

	cin >> hrs;

	sec = hrs * 60 * 60;

	cout << "\n" << hrs << " hours = "<< sec << " seconds"<<endl;

	return 0;

}
