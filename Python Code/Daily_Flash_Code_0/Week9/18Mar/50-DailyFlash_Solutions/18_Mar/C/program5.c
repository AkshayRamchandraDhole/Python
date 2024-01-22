
#include <stdio.h>
#include <math.h>

void  main() {

	int choice;
	char ch;
	float x1,y1, x2, y2, x3, y3,peri, x, y, area, p;
	printf("1st point(A)  : \n");
	scanf("%f%f", &x1, &y1);
	printf("2nd point(B)  : \n");
	scanf("%f%f", &x2, &y2);
	printf("3rd point(C)  : \n");
	scanf("%f%f", &x3, &y3);
	float ab = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
	float bc = sqrt(pow(x2-x3, 2) + pow(y2-y3,2));
	float ac = sqrt(pow(x3-x1, 2) + pow(y3-y1,2));
	printf("1: Distances of Each side of Triangle\n");
	printf("2: Perimeter of Triangle\n");
	printf("3: Area of Triangle\n");
	printf("4: Radius of In-Circle\n");
	printf("5: Centre of In-Circle\n");
	do {
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				printf("Distance of line AB : %5.2f\n", ab);
				printf("Distance of line BC : %5.2f\n", bc);
				printf("Distance of line AC : %5.2f\n", ac);
				break;
			case 2:
				printf("Perimeter of Triangle : %5.2f\n", ab + bc + ac);
				break;
			case 3:
				area = sqrt(p*(p-ab)*(p-bc)*(p-ac));
				printf("Area of Triangle : %5.2f\n", area);
				break;
			case 4:
				p = (ab + bc + ac)/2;
				area = sqrt(p*(p-ab)*(p-bc)*(p-ac));
				printf("Radius of In-Circle : %5.2f\n", (area / p));
				break;
			case 5:
				peri = ab + bc + ac;
				x = ((bc * x1) + (ac * x2) + (ab * x3))/peri;
				y = ((bc * y1) + (ac * y2) + (ab * y3))/peri;
				printf("Centre of In-Circle : (%5.2f, %5.2f)\n", x,y);
				break;
			Default:
				printf("Enter Correct Choice\n");
				break;
		}
		printf("Do you want to continue ? ");
		scanf(" %c", &ch);
	}while(ch == 'y' || ch == '\n');
}
