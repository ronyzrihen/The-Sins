#include "Person.hpp"

Person::Person() : P_job(), P_needs() {

  ID = -1;
  P_FirstName = NULL;
  P_LastName = NULL;
  P_money = 20000;
}
Person::Person(char *name, char *lastname, int id, char *job_name)
    : P_job(job_name), ID(id), P_needs(), P_money(20000), P_FirstName(NULL),
      P_LastName(NULL) {
  if (name == NULL || lastname == NULL) {
    cout << "error";
    return;
  }

  P_FirstName = new char[sizeof(strlen(name) + 1)];
  strcpy(P_FirstName, name);
  P_LastName = new char[sizeof(strlen(lastname) + 1)];
  strcpy(P_LastName, lastname);

  P_money = 20000;
}

Person::~Person() {
  delete[] P_FirstName;
  delete[] P_LastName;
}

void Person::set_Job(Job &job) {

  P_job.set_title(job.get_Name());
  P_job.set_salary(job.get_Salary());
  P_job.set_work_hours(job.get_Hours());
}

void Person::set_Fname(char *name) {

  delete[] P_FirstName;
  P_FirstName = new char[sizeof(strlen(name) + 1)];
  strcpy(P_FirstName, name);
}
void Person::set_Lname(char *name) {

  delete[] P_LastName;
  P_LastName = new char[sizeof(strlen(name) + 1)];
  strcpy(P_LastName, name);
}

int Person::need_check() {

  int sum;

  if (P_needs.get_Bladder() == 0)
    sum++;

  if (P_needs.get_Energy() == 0)
    sum++;

  if (P_needs.get_Hunger() == 0)
    sum++;

  if (P_needs.get_Social() == 0)
    sum++;

  if (P_needs.get_Fun() == 0)
    sum++;

  if (P_needs.get_Hygiene() == 0)
    sum++;

  if (sum == 6) {
    cout << P_FirstName << " Has Died!\n\nRIP.\n\n";
    return 1;
  }

  return 0;
}

void Person ::print_needs() {

  cout << endl << P_FirstName << ":\n";
  cout << "Bladder level is: " << P_needs.get_Bladder() << endl;
  if (P_needs.get_Bladder() <= 3)
    cout << " || needs to use the toilet! ||\n"
         << "===================\n";
  ;

  cout << "Energy level is: " << P_needs.get_Energy() << endl;
  if (P_needs.get_Energy() <= 3)
    cout << " || needs to sleep! ||\n"
         << "===================\n";
  ;

  cout << "Hunger level is: " << P_needs.get_Hunger() << endl;
  if (P_needs.get_Hunger() <= 3)
    cout << " || needs to eat! ||\n"
         << "===================\n";
  ;

  cout << "Social level is: " << P_needs.get_Social() << endl;
  if (P_needs.get_Social() <= 3)
    cout << " || needs to socialize! ||\n"
         << "===================\n";
  ;

  cout << "Fun level is: " << P_needs.get_Fun() << endl
       << "===================\n";

  if (P_needs.get_Fun() <= 3)
    cout << " || needs to have fun! ||\n"
         << "===================\n";
  ;

  cout << "Hygiene level is: " << P_needs.get_Hygiene() << endl;
  if (P_needs.get_Hygiene() <= 3)
    cout << " || needs to use the shower! ||\n"
         << "===================\n";
  ;
}

void Print_house(int id, Person *house) {

  for (int i = 0; i < 10; i++) {

    cout << "ID: " << house[i].get_ID() << endl
         << "Name: " << house[i].get_Fname() << " " << house[i].get_Lname()
         << endl;
  }
}

int member_exist(Person *house, int num) {
  int False = -1;
  int True = 1;
  if (house[num].get_ID() == num) {
    return True;
  }
  return False;
}
