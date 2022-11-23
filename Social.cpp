#include "Social.hpp"
#include "Person.hpp"



void Social::talk(Person& person) {
	set_score(S_level);
  
  
  return;
}

void Social::text(Person& person) {
  set_score(S_level);
  
  return;
}

void Social::phonecall(Person& person) {
  set_score(S_level);
  
  return;
}

void Social::set_Slevel(int num = -1) {

  if (S_level + num <= 3) {
    
    
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
  
}
Social::~Social() {}



