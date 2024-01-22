
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
			if(i==j && arr[i][j] != 1){
				std::cout << ("Not Identity Matrix\n");
				return 0;
			}
			else if(arr[i][j] != 0 && i != j){
				std::cout << ("Not Identity Matrix\n");
				return 0;
			}	
		}
	}

	std::cout << "Identity Matrix" << std::endl;
}
