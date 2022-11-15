#include "Bladder.h"

void Bladder::usetoilet() {
	if (B_level + 5 > MAX) {
		B_level = MAX;
		return;
	}
	B_level += 5;
}

void Bladder::set_Blevel(int num = -1) {

	if (B_level + num <= 3) {
		cout << "I need to use the toilet!\n";
		cout << "your Bladder level is: " << H_level;
	}
	if (B_level + num <= 0) {
		B_level = 0;
		return;
	}
	B_level += Numasdfsdf
}

