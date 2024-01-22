int printf(const  char*,...); 

int main(){

	for(int olc=0;olc<4;olc++){
		for(int ilc=0;ilc<=olc;ilc++){
			printf("*  ");
		}
		printf("\n");
	}


	return 0;
}
