
#include <iostream>

int main () {

	int m = 3, n = 3;
	//std::cout << ("Row and Column : \n");
	//std::cin >> m >> n;
	int matrix[3][3];
	std::cout << ("Enter Matrix 1 : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){		
			std::cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < m; i++){
		matrix[0][i] = 2 * matrix[0][i] + 3 * matrix[1][i];
		matrix[1][i] = 2 * matrix[1][i] - matrix[2][i];
		matrix[2][i] = 4 * matrix[2][i];
	}
	std::cout << ("Matrix : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
}

