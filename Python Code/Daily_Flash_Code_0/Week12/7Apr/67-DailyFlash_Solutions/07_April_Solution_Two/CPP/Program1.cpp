#include<stdio.h>

int main(){

	printf("Enter a String\n");

	char arr[300];
	fgets(arr,sizeof(arr),stdin);
	char vow[11] = "AEIOUaeiou";

	printf("Consecutive Vowels are \n");	
	for(int i=0; arr[i]!='\0'; i++){
	
		for(int j = 0; vow[j] != '\0'; j++)
			if((arr[i] == vow[j]) && (arr[i+1] == vow[j+1]))
				printf("%c%c\t",arr[i],arr[i+1]);
	}

	printf("\n");
	
	return 0;
}
