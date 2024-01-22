#include<stdio.h>

int main(){

	printf("Enter a String\n");

	char arr[300];
	fgets(arr,sizeof(arr),stdin);

	char str[11] = "AEIOUaeiou";
	int vow[11] = {0};
	for(int i=0; arr[i]!='\0'; i++){

			for(int j=0; str[j]!='\0'; j++){
				if(arr[i] == str[j])
					vow[j]++;
			}
	}

	printf("Count of Vowels is\n");
	for(int lc = 0; lc <= 10; lc++){

		if(vow[lc] != 0){
	
				printf("%c = %d\t",str[lc],vow[lc]);
		}
	}

	printf("\n");
	return 0;
}
