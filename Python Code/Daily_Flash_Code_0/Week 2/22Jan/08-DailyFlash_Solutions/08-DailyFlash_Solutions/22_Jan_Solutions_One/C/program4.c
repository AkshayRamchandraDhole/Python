#include <stdio.h>

void main () {

	int a,  b;
	char op;
	printf("Enter Numbers : \n");
	scanf("%d%d", &a, &b);
	printf("Enter operation : \n");
	scanf("%c", &op);
	
	switch(op){
		case '+':
		      	printf("Addition : %d\n", a + b);	
			break;
		case '*':
		      	printf("Multiplication : %d\n", a * b);	
			break;
		case '-':
		      	printf("Subtraction : %d\n", a - b);	
			break;
		case '/':
			b != 0 ? : exit(0);
		      	printf("Division : %d\n", a/b);	
			break;

		default:
			printf("Invalid choice\n");
			break;
	}
}
