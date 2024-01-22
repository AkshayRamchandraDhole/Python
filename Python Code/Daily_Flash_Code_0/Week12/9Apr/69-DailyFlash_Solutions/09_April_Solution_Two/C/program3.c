
#include <stdio.h>

void main () {

	int m,n;
	printf("Row and Column : ");
	scanf("%d%d", &m,&n);
	if(m!=n)
		return;
	int arr[m][n];
	int max = 0, sum = 0;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", (*(arr+i)+j));
			if(i==j && arr[i][j] != 1){
				printf("Not Identity Matrix\n");
				return;
			}
			else if(arr[i][j] != 0 && i != j){
				printf("Not Identity Matrix\n");
				return;
			}	
		}
	}
	printf("Identity Matrix\n");
}
