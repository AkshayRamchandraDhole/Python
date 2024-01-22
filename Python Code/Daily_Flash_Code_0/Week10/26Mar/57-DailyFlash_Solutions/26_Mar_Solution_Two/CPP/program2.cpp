
#include <iostream>
#include <string.h>

int main() {
	char st[100];

	std::cout << ("Enter Any String : ");
	fgets(st, 100, stdin);
	std::cout << (strlen(st)) << "\n";
	st[strlen(st) - 1] = '\0';
	char c;
	int n = strlen(st);
	for(int i = 0; i < n/2; i++){
		c = st[i];
		st[i] = st[n - i - 1];
		st[n - i - 1] = c;
	}
	std::cout << st << std::endl;

	
}
