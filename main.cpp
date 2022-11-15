#include "Person.h"
using namespace std;
void create_character(Person& house);


int main() {

	Person* house = new Person[10];
	int choice = 0;

	for (;;) {

	cout <<"1 - Create a character\n"
		<< "2 - Delete a charecter\n"
		<< "3 - Action\n"
		<< "0 - Exit\n\n"
		<< "choose: ";
	cin >> choice;
	



	switch (choice) {
	case 1: {
		
		break;
	}
	case 2: {

		break;
	}
	case 3: {

		break;
	}
	case 0: {

		break;
	}

	}






	} //for 

	return 0;
}

