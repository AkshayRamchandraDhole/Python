#include<iostream>

int main() {
	
	int asc = 64;
	char ch;
	do {
		std::cin >> ch;
		asc++;
	} while(asc == ch);
}
