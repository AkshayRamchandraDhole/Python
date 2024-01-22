#include<stdio.h>
#include<math.h>



int main() {
	float T, l;
	printf("T L: ");
	scanf("%f %f", &T, &l);
	printf("a = %f", (l * T) / (4 * pow(3.14, 4)));
}
