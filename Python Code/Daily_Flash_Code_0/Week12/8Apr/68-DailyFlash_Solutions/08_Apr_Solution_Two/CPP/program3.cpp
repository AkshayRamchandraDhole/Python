
#include <iostream>

int main () {

	int m,n;
	std::cout << ("Row and Column : ");
	std::cin >> m >> n;
	int arr[m][n];
	int sum = 0, max = 0;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cin >> arr[i][j];
			if(arr[i][j] % 2 == 1 && max < arr[i][j]){
				max = arr[i][j];
			}
			else if(arr[i][j] % 2 == 0){
				sum += arr[i][j];
			}
		}
	}

	std::cout << "Output : " << sum*max<<("\n");
}
