#include<iostream>

int main() {
	int m;
	std::cout << "m: ";
	std::cin >> m;
	int arr[m][m];
	std::cout << "Enter arr: ";
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++) {
			std::cin >> arr[i][j];	
		}

	}	

	std::cout << "\n";

	for(int j = 0; j < 3; j++) {
		arr[0][j] = 2 * arr[0][j] + 3 * arr[1][j];
	}
	for(int j = 0; j < 3; j++) {
		arr[1][j] = 2 * arr[1][j] - arr[2][j];
	}
	for(int j = 0; j < 3; j++) {
		arr[2][j] *= 4;
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			std::cout << arr[i][j];
		
		}
		std::cout << "\n";
	}	
	
}
