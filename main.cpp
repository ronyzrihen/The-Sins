#include "Person.hpp"
using namespace std;

char Job1[] = "Policeman", j2[] = "Fireman", j3[] = "Footballer", j4[] = "Actor", j5[] = "Teacher", j6[] = "Criminal";
Job jobs[] = { Job(Job1),Job(j2),Job(j3),Job(j4) ,Job(j5) ,Job(j6) };

void print_house(Person* house);
void create_character(Person* house);
void Delete_character(Person* house);
void Action(Person* house);

int main() {


	//cout << "here!";

	Person house[10];
	int house_size = 0;
	int choice = 0;

	for (;;) {

	cout <<"1 - Create a character\n"
		<< "2 - Delete a charecter\n"
		<< "3 - Action\n"
		<< "4 - print house members\n"
		<< "0 - Exit\n\n"
		<< "choose: ";
	cin >> choice;
	



	switch (choice) {
	case 1: {
		 create_character(house);
		break;
	}
	case 2: {
		Delete_character(house);
		break;
	}
	case 3: {
		Action(house);
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
				cout <<"ID:"<<house[i].get_ID()<<"\n"<< " - " << house[i].get_Fname() << " " << house[i].get_Lname() << endl;
			}
				
		}


	} // print house

	void Delete_character(Person* house)
	{	
		int num=0;
		cout << "Choose ID to delete\n ";
		print_house(house);
		cin>>num;
		// for (int i = 0; i <10; i++)
		// {
		// 	if(house[i].get_ID()==num)
		// 	{
				house[num].set_ID(-1);
				house[num].set_Job(Job());
				 house[num].set_needs(Needs());
				cout << "The character has been deleted\n ";
		// 		break;
		// 	}
		// }
		//cout<<"there is no such ID\n";
	}



	void Action(Person* house)
	{
		int num=0;
		cout << "Choose Caracter ID\n";
		print_house(house);
		cin>>num;
		for (int i = 0; i < 10; i++)
		{
			if (house[i].get_ID()==num)
			{
				int choice = 0;
				cout << "Choose action\n"
					<<"1-toilet\n"
					<<"2-eat\n"
					<<"3-talk\n"
					<<"4-fun\n"
					<<"5-sleep\n"
					<<"6-shower\n";
					cin>>choice;
					switch (choice)
					{
					case 1:
						
						cout << "The character use the toilet\n ";
						house[num].set_p_Bladder();			
						break;
					case 2:
						house[num].set_P_Hunger();
						break;
					case 3:
						house[num].set_P_Social();
						break;
					case 4:
						house[num].set_P_Fun();
						break;
					case 5:
						house[num].set_P_Energy();
						break;
					case 6:
						house[num].set_p_Hygiene();
						break;
					default:
						break;
					}
					
					
					
				
			}
			
			cout<<"not exist\n";
		}
		
	}