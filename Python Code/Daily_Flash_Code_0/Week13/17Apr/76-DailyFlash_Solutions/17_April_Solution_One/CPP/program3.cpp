
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
		matrix[i][2] = 2 * matrix[i][2] + matrix[i][1]; 
		matrix[i][1] = 3 * matrix[i][1] - matrix[i][0]; 
		matrix[i][2] = 3 * matrix[i][2]; 
	}
	std::cout << ("Matrix : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
}

