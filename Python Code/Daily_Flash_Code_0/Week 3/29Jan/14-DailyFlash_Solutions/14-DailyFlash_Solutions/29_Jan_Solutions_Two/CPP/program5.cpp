
#include <iostream>
int main (void){

	int day,mn, yr;
	std::cout << ("Enter date dd mm yyyy : ");
	std::cin >> day >> mn >> yr;

	std::cout << day << "/"<< mn << "/" << yr << std::endl;
	if(day <= 0 || mn <= 0 || yr <= 0 || day > 31 || mn > 12 ){
		std::cout << ("Invalid date\n");
		exit(0);
	}
	else if((mn <= 7 && day <= 31 && mn % 2 != 0) || (mn >= 8 && day <= 31 && mn % 2 == 0)){
		std::cout << ("Valid Date\n");
	}
	else if((mn != 2 && mn <= 7 && day <= 30 && mn % 2 == 0) || (mn >= 8 && day <= 30 && mn % 2 != 0)){
		std::cout << ("Valid Date \n");
	}

	else if(mn == 2 && yr % 100 == 0){
		if(yr % 400 == 0 && day <= 29){
			std::cout << ("Valid Date\n");
		}
		else if(day <= 28){
			std::cout << ("Valid Date\n");
		}
		else {
			std::cout << ("Invalid Date\n");
		}
	}
	else if(mn == 2 ){
		if(yr % 4 == 0 && day <= 29){
			std::cout << ("Valid Date\n");
		}
		else if(day <= 28){
			std::cout << ("Valid Date\n");
		}
		else {
			std::cout << ("Invalid Date\n");
		}
	}
	else {
		std::cout << ("Invalid Date\n");
	}

}
