#include<bits/stdc++.h>

int main() {
	char arr[10];
	std::cin.getline(arr, sizeof(arr));
	  for(int i = 0; i < strlen(arr) / 2; i++) {
			char temp = arr[strlen(arr) - 1 - i];
			arr[strlen(arr) - 1 - i] = arr[i];
			arr[i] = temp;
		}
	  std::cout << arr;	
}

