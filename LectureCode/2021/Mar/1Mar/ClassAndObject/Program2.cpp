#include<iostream>
class CoronaStat{

	public :

		CoronaStat(){
		
			std::cout<<"Not Paramerterized Constructor"<<std::endl;
		}
		CoronaStat(std::string name,int coronaCases){
		
			std::cout<<name<<":"<<coronaCases<<std::endl;
		}
};
int main(){

	CoronaStat obj1;
	CoronaStat obj2("Pune",1200);
	CoronaStat obj3("Mumbai",1800);
	return 0;

}
