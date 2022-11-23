#include "Person.hpp"
#include "Social.hpp"
using namespace std;

char Job1[10] = "Policeman", j2[8] = "Fireman", j3[11] = "Footballer",
     j4[6] = "Actor", j5[8] = "Teacher", j6[9] = "Criminal";
Job jobs[] = {Job(Job1), Job(j2), Job(j3), Job(j4), Job(j5), Job(j6)};

void print_house(Person *house);
void create_character(Person *house);
void Delete_character(Person &person);
void Action(Person *house);
int Is_empty(Person *house);

int main() {

  // cout << "here!";

  Person house[10];
  int house_size = 0;
  int choice = 0;

  for (;;) {

    cout << "1 - Create a character\n"
         << "2 - Delete a charecter\n"
         << "3 - Action\n"
         << "4 - print house members\n"
         << "0 - Exit\n\n"
         << "choose: ";
    cin >> choice;
    while (choice < 0 || choice > 4) {
      cout << "Not An Option\n"
	  	   << "Try again: ";
		cin >> choice;
    }

    switch (choice) {
    case 1: {
      create_character(house);
      cout << endl << endl;

      break;
    }
    case 2: {
      int num = 0;

      cout << "Choose ID to delete:\n ";
	  print_house(house);
      if (Is_empty(house) == 0) {
        cout << "House is empty\n\n";

        cout << endl << endl;
        break;
      }
      cin >> num;
      if (member_exist(house, num) != -1) {
        Delete_character(house[num]);

        cout << endl << endl;
        break;
      }
      cout << "\nInvalid number!\n";
      break;
    }
    case 3: {
      Action(house);
      cout << endl << endl;
      break;
    }
    case 4: {
      print_house(house);
      cout << endl << endl;
      break;
    }
    case 0: {
      return 0;
      break;
    }
    }

  } // for

  return 0;
}

void create_character(Person *house) {
  char *first_name = new char;
  char *last_name = new char;
  int choice = -1;
  for (int i = 0; i < 11; i++) {
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
	cout << "####| JOB         | Salary | Work Hours |\n";
    for (int j = 0; j < 6; j++) {

      cout <<"----------------------------------------\n"
	       << j << ".  | " << jobs[j].get_Name() << " | "
           << jobs[j].get_Salary()<< "$ |"
           <<  jobs[j].get_Hours() << " Hours |"
           << endl;
    }
    cout << "Choose Job: ";
    cin >> choice;
    while (choice < 0 || choice > 5) {
      cout << choice << " Is Not An Option\n"
           << "Try again: ";

      cin >> choice;
    }

    house[i].set_Job(jobs[choice]);
    cout << "Character created!\n";
    break;
  }
} // create character

void print_house(Person *house) {
  int flag = 0;
      cout << "ID |"  << "\n";
  for (int i = 0; i < 10; i++) {
    if (house[i].get_ID() != -1) {
	  	   cout<< "---------------------------------\n"
           << house[i].get_ID() << ". |"
		   << "  " << house[i].get_Fname() << " " << house[i].get_Lname()
           << "  || " << house[i].get_job() << endl;
      flag = 1;
    }
  }
  if (flag == 0) {
    cout << "Your house is empty\n\n";
  }

} // print house
int Is_empty(Person *house) {
  int i = 0;
  int sum = 0;
  for (i = 0; i < 10; i++) {
    if (house[i].get_ID() != -1)
      sum++;
  }
  return sum;
}

void Delete_character(Person &person) {

  person.set_ID(-1);
  person.reset_job();
  person.set_needs();

  cout << "The character has been deleted\n ";
}

void Action(Person *house) {
  int num = 0;
  cout << "Choose Caracter ID\n";
  print_house(house);
  if (Is_empty(house) == 0)
    return;

  cin >> num;
  if (member_exist(house, num) == -1){
	  cout << "No such character!\n";
	  return;
  }

    int choice = 0;
  cout << "Choose action\n"
       << "1 - toilet\n"
       << "2 - eat\n"
       << "3 - talk\n"
       << "4 - fun\n"
       << "5 - sleep\n"
       << "6 - shower\n";
  cin >> choice;
  switch (choice) {
  case 1:

    cout << house[num].get_Fname() << " is using the tpilet\n ";
    house[num].set_p_Bladder();
    if (house[num].need_check())
      Delete_character(house[num]);
    break;
  case 2:
  
    house[num].set_P_Hunger();
    if (house[num].need_check())
      Delete_character(house[num]);
    break;
  case 3: {

    int memID;
    int act = 0;

    cout << "choose:\n"
         << "1-talk\n"
         << "2-text\n"
         << "3-phonecall\n";
    cin >> act;
    if (act < 1 || act > 3) {
      cout << act << " Is Not An Option\n";
      break;
    }
    cout << "Choose member ID: \n";
    print_house(house);
    cin >> memID;
    if (member_exist(house, memID) == -1) {
      cout << "ID " << memID << " Dosen't Exist\n";
      break;
    }

    while (member_exist(house, memID) == -1) {
      cout << "Member dosn't exist\n"
           << "Choose again: ";
      cin >> memID;
    }

    house[num].set_P_Social(house[memID], act);
    if (house[num].need_check())
      Delete_character(house[num]);

    break;
  }
  case 4:
    house[num].set_P_Fun();
    if (house[num].need_check())
      Delete_character(house[num]);
    break;
  case 5:
    house[num].set_P_Energy();
    if (house[num].need_check())
      Delete_character(house[num]);
    break;
  case 6:
    house[num].set_p_Hygiene();
    if (house[num].need_check())
      Delete_character(house[num]);
    break;
  default:
    break;
  }

for (int i; i < 10; i++) {

  if (house[i].get_ID() != -1) {
    if (house[i].get_ID() != num) {

      house[i].set_decrese_needs();
      if (house[i].need_check()) {
        Delete_character(house[i]);
      }
    }
    if(house[i].get_ID() != -1) 
		house[i].print_needs();
  }
}
}
