#include "Fun.h"

/*void Fun::dance() {
	if (F_level + 5 > 10) {
		F_level = 10;
		return;
	}
	F_level += 5;
}*/

void Fun::petanimal(Animal animal) {

	cout << "PET PET PET!\n";

}

 void Fun::set_Fun(int num=-1) {

	 if (F_level + num <= 3) {
		 cout << "I need to fun!\n";
		 cout << "your Fun level is: " << F_level;
	 }
	 if (F_level + num <= 0) {
		 F_level = 0;
		 return;
	 }
	 F_level += num;
	 cout<<"the Fun level is:"<<F_level<<endl;
 }
