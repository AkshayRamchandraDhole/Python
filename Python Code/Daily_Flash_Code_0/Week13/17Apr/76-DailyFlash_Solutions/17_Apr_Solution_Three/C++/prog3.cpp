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

	for(int i = 0; i < 3; i++) {
                arr[i][2] = 2 * arr[i][2] + arr[i][1];
        }
        for(int i = 0; i < 3; i++) {
                arr[i][1] = 3 * arr[i][1] - arr[i][0];
        }
        for(int i = 0; i < 3; i++) {
                arr[i][2] *= 3;
        }

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			std::cout << arr[i][j];
		
		}
		std::cout << "\n";
	}	
	
}
