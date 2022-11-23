#include "Fun.h"
#include "Animal.h"
#include <cstdio>



void Fun::petanimal(Animal& animal) {
int choice  = 0;
	action(F_level);
	cout << "PET PET PET!\n";

	cout << "Feed "  << animal.get_name() << "?\n"
		 << "1 - Yes               2 - NO" << endl;
	cin >> choice;
	if( choice == 1)
		animal.eat();

	

}

 void Fun::set_Fun(int num) {

	 if (F_level + num <= 3) {
	 }
	 if (F_level + num <= 0) {
		 F_level = 0;
		 return;
	 }
	 if(F_level + num >= 10 ){
		F_level = 10;
		return;
	 }
	 	
	 F_level += num;
	 
 }
