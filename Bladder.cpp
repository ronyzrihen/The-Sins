#include "Bladder.h"

void Bladder::usetoilet() {
	if (B_level + 5 > MAX) {
		B_level = MAX;
		return;
	}
	B_level += 5;
}


