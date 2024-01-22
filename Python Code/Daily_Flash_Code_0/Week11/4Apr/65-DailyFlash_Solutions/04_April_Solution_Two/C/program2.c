
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0, cnt = 0, a, e, i, o, u;
	a = e = i = o = u = 0;
	char ch;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(ch == 'A' || ch == 'a'){
			a++;
		}
		else if(ch == 'E' || ch == 'e'){
			e++;
		}
		else if(ch == 'I' || ch == 'i'){
			i++;	
		}
		else if(ch == 'O' || ch == 'o'){
			o++;	
		}
		else if(ch == 'u' || ch == 'U'){
			u++;	
		}
		if(k == len){
			len = len + 8;
			str = realloc(str, len);
		}

	}
	printf("a : %d\n",a);
	printf("e : %d\n",e);
	printf("i : %d\n",i);
	printf("o : %d\n",o);
	printf("u : %d\n",u);

}
