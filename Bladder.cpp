#include "Bladder.h"

void Bladder::usetoilet() {
	if (B_level + 5 > MAX) {
		B_level = MAX;
		cout<<"the bladder level is:"<<B_level<<endl;
		return;
	}
	B_level += 5;
	cout<<"the bladder level is:"<<B_level<<endl;
}

void Bladder::set_Blevel(int num = -1) {

	if (B_level + num <= 3) {
		cout << "I need to use the toilet!\n";
		cout << "your Bladder level is: " << B_level << endl;
	}
	if (B_level + num <= 0) {
		B_level = 0;
		return;
	}
	if( B_level + num >= 10 ){
		B_level = 10;
		return;
	}
	B_level += num;
	cout<<"the bladder level is:"<<B_level<<endl;
}

