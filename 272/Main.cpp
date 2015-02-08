#include <iostream>

/* LI Chi */

int main()
{	
	char c;
	bool t = true;
	while (std::cin.get(c)) {
		if(c=='"'){
			if (t) {
				std::cout << "``";
				t = false;
			} else {
				std::cout << "''";
				t = true;
			}
		} else {
			putchar(c);
		} 
	} 
	return 0;
}