
#include <iostream>
#include <string.h>

int main() {
	char st[20];

	std::cout << ("Enter Any String : ");
	fgets(st, 20, stdin);
	for(int i = 0; i<strlen(st); i++){
		if(st[i]== 'a' || st[i] == 'A' || st[i] == 'E' || st[i] == 'e' || st[i] == 'I' || st[i] == 'i' || st[i] == 'O' || st[i] == 'o' || st[i] == 'u' || st[i] == 'U'){
			std::cout << st[i] << " ";
		}
	}
	std::cout << std::endl;
}
