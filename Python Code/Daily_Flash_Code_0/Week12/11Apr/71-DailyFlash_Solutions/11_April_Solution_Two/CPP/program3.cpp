
#include <iostream>

int main () {

	int m,n;
	std::cout << ("Row and Column : ");
	std::cin >> m >> n;
	if(m!=n)
		return 0;
	int arr[m][n];
	int sum = 0, max = 0;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cin >> arr[i][j];
		}
	}
	for(int i = 0 ; i < m ; i++){
		for(int j = i ; j < n ; j++){
			arr[i][j] = arr[i][j] + arr[j][i] - (arr[j][i] = arr[i][j]);
		}
	}
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cout <<  arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
