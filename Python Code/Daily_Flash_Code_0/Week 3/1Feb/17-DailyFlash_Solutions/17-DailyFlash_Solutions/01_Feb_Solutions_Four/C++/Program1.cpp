/**
 * CPP program to all odd numbers in reverse in a given range
 */

#include <iostream>

int main() {

	int i, start;

	/* Input start limit from user */
	std::cout<<"Enter starting Range for Series:"<<std::endl;
	std::cin>>start;

	/*
	 * Run loop from 'start' to '1' and 
	 * decrement by 1 in each iteration
	 */ 
	for(i=start; i>=1; i--) {

		if(i % 2 != 0){

			std::cout<< i <<std::endl;
		}
	}
	return 0;
}
