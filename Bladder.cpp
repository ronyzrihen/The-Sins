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
	
}

