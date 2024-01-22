#include <iostream>

int main () {

	int a,  b;
	char op;
	std::cout << ("Enter Numbers : \n");
	std::cin >> a >> b;
	std::cout << ("Enter operation : \n");
	std::cin >> op;
	
	switch(op){
		case '+':
		      	std::cout << ("Addition : ") <<  a + b << std::endl;	
			break;
		case '*':
		      	std::cout << ("Multiplication : ")<<  a * b << std::endl;	
			break;
		case '-':
		      	std::cout << ("Subtraction : ")<<  a - b << std::endl;	
			break;
		case '/':
				if(b == 0)
					exit(0);
		    	std::cout << ("Division : ") << a/b << std::endl;	
			break;
		default:
			std::cout << ("Invalid choice\n");
			break;
	}
	return 0;
}
