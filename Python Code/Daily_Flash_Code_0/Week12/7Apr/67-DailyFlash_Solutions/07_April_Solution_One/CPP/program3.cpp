
#include <iostream>

int main () {

	int m,n;
	std::cout << ("Row and Column : ");
	std::cin >> m >> n;
	int arr[m][n];
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cin >> arr[i][j];
		}
	}

	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			if(i==j)
				std::cout << arr[i][j] << " ";
		}
	}
	std::cout << ("\n");
}
