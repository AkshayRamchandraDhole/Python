
#include <iostream>
#include <string.h>

int main() {
	char st[100];

	std::cout << ("Enter Any String : ");
	fgets(st, 100, stdin);
	std::cout << (strlen(st)) << "\n";
}
