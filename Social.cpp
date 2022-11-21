#include "Social.hpp"
#include "Person.hpp"



void Social::talk(Person& person) {
	set_score(S_level);
  
  cout << "the social level is:" << S_level << endl;
  return;
}

void Social::text(Person& person) {
  set_score(S_level);
  cout << "the social level is:" << S_level << endl;
  return;
}

void Social::phonecall(Person& person) {
  set_score(S_level);
  cout << "the social level is:" << S_level << endl;
  return;
}

void Social::set_Slevel(int num = -1) {

  if (S_level + num <= 3) {
    cout << "I need to Talk!\n";
    cout << "your social level is: " << S_level << endl;
  }
  if (S_level + num <= 0) {
    S_level = 0;
    return;
  }
  if (S_level + num >= 10) {
    S_level = 10;
    return;
  }
  S_level += num;
  cout << "the social level is:" << S_level << endl;
}
Social::~Social() {}

void Print_house(int id, Person *house) {

  for (int i = 0; i < 10; i++) {

    cout << "ID: " << house[i].get_ID() << endl
         << "Name: " << house[i].get_Fname() << " " << house[i].get_Lname()
         << endl;
  }
}

int member_exist(Person *house, int num){
int False = -1;
for(int i = 0 ; i < 10; i++){
if(house[i].get_ID() == num){
	return i;
}

}
return False;
}

