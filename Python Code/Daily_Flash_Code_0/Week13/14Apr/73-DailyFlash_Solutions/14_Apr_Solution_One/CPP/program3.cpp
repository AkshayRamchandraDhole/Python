
#include <iostream>

int main () {

	int m = 3,n = 3, flag = 0;
	std::cout << ("Row and Column : \n");
	std::cin >> m >> n;
	if(m!=n)
		return 0;
	int matrix[m][n];
	int max = 0, sum = 0;
	std::cout << ("Enter Matrix 1 : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cin >> matrix[i][j];
			if(j>i)
				matrix[i][j] = 0;
		}
	}
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cout << (matrix[i][j]) << " ";
		}
		std::cout << ("\n");
	}

}

