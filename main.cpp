#include "Person.hpp"
using namespace std;

char Job1[] = "Policeman", j2[] = "Fireman", j3[] = "Footballer", j4[] = "Actor", j5[] = "Teacher", j6[] = "Criminal";
Job jobs[] = { Job(Job1),Job(j2),Job(j3),Job(j4) ,Job(j5) ,Job(j6) };

void print_house(Person* house);
void create_character(Person* house);

int main() {


	//cout << "here!";

	Person house[10];
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
		 create_character(house);
		break;
	}
	case 2: {

		break;
	}
	case 3: {

		break;
	}
		case 4: {
			print_house(house);
		break;
	}
	case 0: {

		break;
	}

	}






	} //for 

	return 0;
}

void create_character(Person* house) {
	char* first_name = new char;
	char* last_name = new char;
	int choice = -1;
	for (int i = 0; i < 10; i++) {
		if (house[i].get_ID() != -1) {
			continue;
		}
			house[i].set_ID(i);
			cout << "Choose Caracter First Name: ";
			cin >> first_name;
			house[i].set_Fname(first_name);
		
			cout << "Choose Character Last Name: ";
			cin >> last_name;
			house[i].set_Lname(last_name);

			cout << "Job options:\n";
			for (int j = 0; j < 6; j++) {
				cout << j << " - " << jobs[j].get_Name() << endl
					<< "   Salary - " << jobs[j].get_Salary() << endl
					<< "   Work Hours - " << jobs[j].get_Hours() << endl << endl;
			}
			 cout << "Choose Job: ";
			 cin >> choice;

			 house[i].set_Job(jobs[choice]);
			 cout << "Character created!\n";
			 break;
	}
} // create character

	void print_house(Person* house){

		for (int i =0 ; i < 10 ; i++){
			if(house[i].get_ID() != -1){
				cout << " - " << house[i].get_Fname() << " " << house[i].get_Lname() << endl;
			}
				
		}


	} // print house

