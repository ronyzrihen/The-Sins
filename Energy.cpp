#include "Energy.h"


using namespace std;

void Energy::sleep()
{
	if (E_level + 5 > 10) {
		E_level = 10;
		cout<<"the energy level is:"<<E_level<<endl;
		return;
	}
	E_level += 5;
	cout<<"the energy level is:"<<E_level<<endl;
}

void Energy::set_Elevel(int num = -1) {

	if (E_level + num <= 3) {
		cout << "I need to sleep!\n";
		cout << "your Energy level is: " << E_level << endl;
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
	cout<<"the energy level is:"<<E_level<<endl;
}
