
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	char *st = (char *)malloc(sizeof(char)*1);
	char ch;
	std::cout << ("Enter Any String : \n");
	int len = 1, cnt = 0;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		st[cnt++] = ch;
		if(cnt == len){
			len += 16;
			st = (char *)realloc(st, len);
		}
	}
	int n;
	n = strlen(st);
	for(int i = 1; i <= n*2 - 1; i++){
		for(int j = n; j >= 1; j--){
			if(i <= n && j <= i){
				std::cout << (st[n-j]) << "\t";
			}
			else if(i > n && j <= n - (i - n)) {
				std::cout << (st[n-j]) << "\t";
			}
			else{
				std::cout << "\t";
			}
		}
		std::cout << ("\n");
	}
}
