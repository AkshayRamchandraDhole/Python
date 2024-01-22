#include<iostream>
#include<string.h>
#include<ctype.h>
int main() {
	char arr[20], max = 100;
	fgets(arr, sizeof(arr), stdin);
	if(arr[strlen(arr) - 1] == '\n')
		arr[strlen(arr) - 1] =  '\0';
	int a = 0, e = 0, i1 = 0, o = 0, u = 0;
        for(int i = 0; i < strlen(arr); i++) {
                if(arr[i] == 'a')
                        a++;
                if(arr[i] == 'e')
                        e++;
                if(arr[i] == 'i')
                        i1++;
                if(arr[i] == 'o')
                        o++;
                if(arr[i] == 'u')
                        u++;
        }
	std::cout <<"a : "<< a <<" e: "<< e << " i: "<< i1 << " o : "<< o <<" u: "<< u;
}

