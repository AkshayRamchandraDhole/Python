#include<stdio.h>
#include<math.h>
int main(void) {
	float x1, x2, y1, y2, x3, y3, s, a, b, c, p;
	printf("(A)Enter x1 : ");
	scanf("%f", &x1);
	printf("(A)Enter y1 : ");
	scanf("%f", &y1);
	printf("(B)Enter x2 : ");
	scanf("%f", &x2);
	printf("(B)Enter y2 : ");
	scanf("%f", &y2);
	printf("(C)Enter x3 : ");
	scanf("%f", &x3);
	printf("(C)Enter y3 : ");
	scanf("%f", &y3);
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	p = a + b + c;
	s = p / 2;
	int ch; 
	float area = sqrt(s * (s - a) * (s - b) * (s - c));
	while(1) {
		printf("1.Dist\n2.Perimeter\n3.Area\n4.rad\n5.centre\nEnter ch : ");
		scanf("%d", &ch);
		switch(ch) {
			case 1:
				printf("%f %f %f", a, b, c);
				break;
			case 2:
				printf("%f", p);
				break;
			case 3:
				printf("%f", sqrt(s * (s - a) * (s - b) * (s - c)));
				break;
			case 4 :
				printf("%f", area / p);
				break;
			case 5:	
				printf("X = %f, Y = %f",(a * x1 + b * x2 + c * x3) / p, (a * y1 + b * y2 + c * y3) / p);
				break;
			default:
				printf("Invalid.");
		}
	}
}
