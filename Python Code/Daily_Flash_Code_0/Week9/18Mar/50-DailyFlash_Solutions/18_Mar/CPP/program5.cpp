
#include <iostream>
#include <math.h>

int  main() {

	int choice;
	char ch;
	float x1,y1, x2, y2, x3, y3, x, y, peri, p, area;
	std::cout << ("1st point(A)  : \n");
	std::cin >> x1 >> y1;
	std::cout << ("2nd point(B)  : \n");
	std::cin >> x2 >> y2;
	std::cout << ("3rd point(C)  : \n");
	std::cin >> x3 >> y3;
	float ab = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
	float bc = sqrt(pow(x2-x3, 2) + pow(y2-y3,2));
	float ac = sqrt(pow(x3-x1, 2) + pow(y3-y1,2));
	std::cout << ("1: Distances of Each side of Triangle\n");
	std::cout << ("2: Perimeter of Triangle\n");
	std::cout << ("3: Area of Triangle\n");
	std::cout << ("4: Radius of In-Circle\n");
	std::cout << ("5: Centre of In-Circle\n");
	do {
		std::cin >> choice;
		switch(choice) {
			case 1:
				std::cout << ("Distance of line AB : ") << (ab) << std::endl;
				std::cout << ("Distance of line BC : ") << (bc) << std::endl;
				std::cout << ("Distance of line AC : ") << (ac) << std::endl;
				break;
			case 2:
				std::cout << ("Perimeter of Triangle :") << (ab + bc + ac) << "\n";
				break;
			case 3:
				area = sqrt(p*(p-ab)*(p-bc)*(p-ac));
				std::cout << ("Area of Triangle :") << (area) << "\n";
				break;
			case 4:
				p = (ab + bc + ac)/2;
				area = sqrt(p*(p-ab)*(p-bc)*(p-ac));
				std::cout << "Radius of In-Circle : " << ((area / p)) << "\n";
				break;
			case 5:
				peri = ab + bc + ac;
				x = ((bc * x1) + (ac * x2) + (ab * x3))/peri;
				y = ((bc * y1) + (ac * y2) + (ab * y3))/peri;
				std::cout << "Centre of In-Circle : (" << x << "," << y << ")\n";
				break;
			Default:
				std::cout << ("Enter Correct Choice\n");
				break;
		}
		std::cout << ("Do you want to continue ? ");
		std::cin >> ch;
	}while(ch == 'y' || ch == '\n');
}
