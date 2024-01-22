#include<iostream>
class India{

	public :
		India(std::string name,std::string statename){
		
			std::cout<<name<<":"<<statename<<std::endl;
		}
};
int main(){

	India obj1("Statue of Unity","Gujrat");
	return 0;
}
