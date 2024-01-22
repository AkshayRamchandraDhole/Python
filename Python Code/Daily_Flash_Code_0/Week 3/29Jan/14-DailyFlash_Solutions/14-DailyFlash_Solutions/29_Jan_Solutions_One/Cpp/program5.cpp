
#include<iostream>

int main(){
	
	int date;
	int month;
	int year;

	printf("Enter the date \n");
	scanf("%d",&date);
	printf("Enter the month \n");
	scanf("%d",&month);

	printf("Enter the year\n");
	scanf("%d",&year);

	switch(month){
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(date>31)
				printf("Date is invalid");
			else
				printf("Valid");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(date>30)
				printf("Date is invalid");
			else
				printf("Valid");
			break;
		case 2:
			//Here Leap Year condition is not handled try to handle if u can ..... 
			if(date>28)
				printf("Date is invalid");
			else
				printf("Valid");
			break;	
		
	}	
}	
