#include<iostream>
class IntroOOP{

	public:

	IntroOOP(){
	
		std::cout<<"Constructor"<<std::endl;
	}
	void show(){
	
		std::cout<<"Introduction to OOP"<<std::endl;
	}
};
int main(){

	IntroOOP obj ; 
	obj.show();
	return 0;
}
