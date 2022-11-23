
#include "Needs.h"
#include "Animal.h"
#include "Person.hpp"

char dog[] = "Dog", cat[] = "cat", fish[] = "Fish", hamster[] = "Hamster", tiger[] = "Tiger", parrot[] = "Parrot";
char N1[] = "Rex", N2[] = "mitzi", N3[] = "Nemo", N4[] = "Olive", N5[] = "Tiger", N6[] = "Taco";
Animal pets[] = {Animal(N1,dog), Animal(N2,cat), Animal(N3,fish), Animal(N4,hamster), Animal(N5,tiger), Animal(N6,parrot)};
Needs::Needs() : N_bladder(), N_hunger(), N_energy(), N_social() {}

Needs::~Needs() {}




void Needs::select_Bladder() {
  N_bladder.usetoilet();
  N_energy.set_Elevel(-1);
  N_hunger.set_Hunger(-1);
  N_social.set_Slevel(-1);
  N_fun.set_Fun(-1);
  N_hygiene.set_Hygiene(-1);
}

void Needs::select_Hunger() {
  N_hunger.eat();
  N_bladder.set_Blevel(-1);
  N_energy.set_Elevel(-1);
  N_social.set_Slevel(-1);
  N_fun.set_Fun(-1);
  N_hygiene.set_Hygiene(-1);
}

void Needs::select_Social(Person& person,int num) {
     switch (num) {
    case 1: {
		N_social.talk(person);
      break;
    }

    case 2: {
		N_social.text(person);
      break;
    }

    case 3: {
		N_social.phonecall(person);
      break;
    }
    default: {
      cout << num << " - Is not an option\n";
      return;

	}
}
  N_fun.set_Fun(-1);
  N_hygiene.set_Hygiene(-1);
  N_bladder.set_Blevel(-1);
  N_energy.set_Elevel(-1);
  N_hunger.set_Hunger(-1);

}
void Needs::select_fun() {
  int num = 0;
  cout << "choose:\n"
       << "1 - Dance\n"
       << "2 - Play computer\n"
       << "3 - Play guitar\n"
       << "4 - Pet animal\n";
  cin >> num;
  switch (num){
	  case 1:{
		  N_fun.dance();
		  break;
	  }
  	  case 2:{
		N_fun.playcomputer();
		  break;
	  }
	  case 3:{
	N_fun.playguitar();
		  break;
	  }	  
 	  case 4:{
		   int choice = 0;
		   cout << "Choose Animal: \n";
		   for (int i = 0; i < 6 ; i++){
			   cout << i+1 << ") "<< pets[i].get_name() << " - "  << pets[i].get_kind() << endl;
		   }
		   cin >> choice;

		N_fun.petanimal(pets[choice-1]);
		  break;
	  } 
	  default:{
      cout << num <<" Is not an option"; 
      return;
		
	  }
  }
 
  N_bladder.set_Blevel(-1);
  N_energy.set_Elevel(-1);
  N_hunger.set_Hunger(-1);
  N_social.set_Slevel(-1);
  N_hygiene.set_Hygiene(-1);
}
void Needs::select_Energy() {
  N_energy.sleep();
  N_bladder.set_Blevel(-1);
  N_hunger.set_Hunger(-1);
  N_social.set_Slevel(-1);
  N_fun.set_Fun(-1);
  N_hygiene.set_Hygiene(-1);
}

void Needs::select_Hygiene() {
  N_bladder.set_Blevel(-1);
  N_energy.set_Elevel(-1);
  N_hunger.set_Hunger(-1);
  N_social.set_Slevel(-1);
  N_fun.set_Fun(-1);
  N_hygiene.shower();
}

void Needs::reset_needs() {
  N_bladder.set_Blevel(10);
  N_energy.set_Elevel(10);
  N_hunger.set_Hunger(10);
  N_social.set_Slevel(10);
  N_fun.set_Fun(10);
  N_hygiene.set_Hygiene(10);
}

void Needs::decrese_needs(){

  N_bladder.set_Blevel(-1);
  N_energy.set_Elevel(-1);
  N_hunger.set_Hunger(-1);
  N_social.set_Slevel(-1);
  N_fun.set_Fun(-1);
  N_hygiene.set_Hygiene(-1);
  
}
