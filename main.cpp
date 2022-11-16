#include "Person.h"
using namespace std;
Person* create_character(Person* house, int& size);

int main() {

	Person* house = NULL;
	int house_size = 0;
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

Person* create_character(Person* house, int& size) {
	char* first_name = new char [];
	char* last_name = new char[];
	cout << "Choose Caracter First Name: ";
	cin >> first_name;
	cout << "Choose Character Last Name: ";
	cin >> last_name;

	if (house == NULL) {

		house = new Person[++size];


	}


}