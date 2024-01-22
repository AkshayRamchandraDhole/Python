#include<iostream>

int main(){

	for(int olc=0;olc<4;olc++){
		for(int ilc=0;ilc<=olc;ilc++){
			std::cout<<"*"<<"  ";
		}
		std::cout<<"\n";
	}


	return 0;
}
