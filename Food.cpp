
#include "Food.h"

Food::Food(char* name, cooked tocook = False, int worth = 5) {

	F_name = new char[sizeof(strlen(name) + 1)];
	if (F_name == NULL) {
		cout << "ERROR!\n";
	}
	strcpy(F_name, name);
	
	F_worth = worth;
	F_cooked = tocook;
}


