
#include <stdio.h>
void exit(int);

void main() {

	int n;
	_Bool k = 1;
	while(k){
		scanf("%d", &n);
		if(n < 0)
			exit(0);
		printf("%d\n", n);
	}
}
