#include "Energy.h"


using namespace std;

void Energy::sleep()
{
	if (E_level + 5 > 10) {
		E_level = 10;
	
		return;
	}
	E_level += 5;
	
}

void Energy::set_Elevel(int num = -1) {

	if (E_level + num <= 3) {
		
		
	}
	if (E_level + num <= 0) {
		E_level = 0;
		return;
	}
	if(E_level + num >= 10){
		E_level = 10;
		return;
	}

	E_level += num;
	
}
