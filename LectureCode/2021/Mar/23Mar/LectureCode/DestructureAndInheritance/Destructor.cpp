#include<iostream>
class CppClass{

	public :

		CppClass(){
		
			std::cout<<"Constrcutor"<<std::endl;
		}
		~CppClass(){
		
			std::cout<<"Destructor"<<std::endl;
		}

};
int main(){

	CppClass obj;
	CppClass obj1;
	//CppClass *obj = new CppClass();
	//delete obj;

}
