
#include <iostream>
#include <string.h>

void display(char bin[]){
	int i = strlen(bin);
	while(i>=0){
		std::cout << (bin[i]);
		i--;
	}
	std::cout << ("\n");
	
}
int main () {

	int n,i,cnt = 0, c=0;
	char bin[20] = {'\0'};
	std::cout << ("Enter Octal Number : ");
	std::cin >> n;

	while(n != 0){
		if(n%10 >= 8){
			std::cout << ("Not a octal Number\n");
			exit(0);
		}
		i = n % 10;
		c = 0;
		while(c < 3){
			bin[cnt] = (char)(i%2 + 48);
			i = i / 2;
			cnt++;
			c++;
		}
		n = n / 10;
	}	
	display(bin);
}
