
#include <iostream>
#include <string.h>

int main() {
	char st[20];

	std::cout << ("Enter Any String : ");
	fgets(st, 20, stdin);
	for(int i = 0; i<strlen(st); i++){
		if(st[i]!= '\n')
			std::cout << st[i] << " ";
	}
	std::cout << std::endl;
}
