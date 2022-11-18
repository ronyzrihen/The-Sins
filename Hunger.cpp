#include "Hunger.h"
char apple[] = "Apple", banana[] = "Banana", pizza[] = "Pizza", pasta[] = "Pasta", meat[] = "Meat", chicken[] = "Chicken";
Food fridge[MAX_FRIDGE] = { Food(apple) , Food(banana, False, 3), Food(pizza), Food(pasta, True), Food(meat, True,6), Food(chicken, True) };
 
void Hunger::eat() {
	 int choice = 0;
	 cout << "list of foods: \n";
	 for (int i = 0; i < MAX_FRIDGE; i++) {
		 cout << i << ".	" << fridge[i].get_name()<< endl;
	 }
	 cout << "choose food\n";
	 cin >> choice;

	 while (choice > MAX_FRIDGE || choice < 0) {
		 cout << " food dosnt exist\nchoose again:";
		 cin >> choice;
	 }
	
	 if (H_level + fridge[choice].get_worth() > 10) {
		 H_level = 10;
		 return;
	 }
	 H_level += fridge[choice].get_worth();
}

 void Hunger::set_Hunger(int num) {

	 if (H_level + num <= 3) {
		 cout << "I need to eat!\n";
		 cout << "your Hunger is: " << H_level;
	 }
	 if (H_level + num <= 0) {
		 H_level = 0;
		 return;
	 }
	 H_level += num;
 }