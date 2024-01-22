#include<stdio.h>
#include<math.h>
int main() {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("%f %f", (-b + sqrt(b * b - 4 * a * c)/(2 * a)), (-b - sqrt(b * b - 4 * a * c)/(2 * a)));
}	
