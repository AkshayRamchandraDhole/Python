
#include <stdio.h>
#include <stdlib.h>

void main (void){

	int day,mn, yr;
	printf("Enter date dd mm yyyy : ");
	scanf("%d %d %d", &day, &mn, &yr);

	printf("%d/%d/%d\n", day, mn,yr);
	if(day <= 0 || mn <= 0 || yr <= 0 || day > 31 || mn > 12 ){
		printf("Invalid date\n");
		exit(0);
	}
	else if((mn <= 7 && day <= 31 && mn % 2 != 0) || (mn >= 8 && day <= 31 && mn % 2 == 0)){
		printf("Valid Date\n");
	}
	else if((mn != 2 && mn <= 7 && day <= 30 && mn % 2 == 0) || (mn >= 8 && day <= 30 && mn % 2 != 0)){
		printf("Valid Date \n");
	}

	else if(mn == 2 && yr % 100 == 0){
		if(yr % 400 == 0 && day <= 29){
			printf("Valid Date\n");
		}
		else if(day <= 28){
			printf("Valid Date\n");
		}
		else {
			printf("Invalid Date\n");
		}
	}
	else if(mn == 2 ){
		if(yr % 4 == 0 && day <= 29){
			printf("Valid Date\n");
		}
		else if(day <= 28){
			printf("Valid Date\n");
		}
		else {
			printf("Invalid Date\n");
		}
	}
	else {
		printf("Invalid Date\n");
	}

}
