
#include "Needs.h"

Needs::Needs() :
	N_bladder(),
	N_hunger(),
	N_energy(),
	N_social()
{
	
}

Needs::~Needs() {



}

int Needs::get_Bladder() {
	return N_bladder.get_Blevel();
}

int Needs::get_Hunger() {

	return N_hunger.get_Hlevel();
}

int Needs::get_Energy() {

	return N_energy.get_Elevel();
}

int Needs::get_Social() {

	return N_social.get_social();
}

void Needs::set_Bladder()
{
	N_bladder.usetoilet();
	N_energy.set_Elevel(-1);
	N_hunger.set_Hunger(-1);
	N_social.set_Slevel(-1);
	N_fun.set_Fun(-1);
	N_hygiene.set_Hygiene(-1);

}

void Needs::set_Hunger()
{
	N_bladder.set_Blevel(-1);
	N_energy.set_Elevel(-1);
	N_hunger.eat();
	N_social.set_Slevel(-1);
	N_fun.set_Fun(-1);
	N_hygiene.set_Hygiene(-1);
}

// void Needs::set_Social()
// {
// 	int num=0;
// 	cout<<"choose:\n"
// 		<<"1-talk\n"
// 		<<"2-text\n"
// 		<<"3-phonecall\n";
// 	cin>>num;
// 	if (num==1){N_social.talk()};
// 	if(num==2){N_social.text()};
	
// 	N_bladder.set_Blevel(-1);
// 	N_energy.set_Elevel(-1);
// 	N_hunger.set_Hunger(-1);
	
// }

void Needs::set_fun()
{
		int num=0;
	cout<<"choose:\n"
		<<"1-dance\n"
		<<"2-play computer\n"
		<<"3-play guitar\n"
		<<"4-pet anima\n";
	cin>>num;
	if (num==1){N_fun.dance();};
	if(num==2){N_fun.playcomputer();};
	if(num==3){N_fun.playguitar();};
	//if(num==4){N_fun.petanimal();};///צריך להוסיף בחירת חיה
	N_bladder.set_Blevel(-1);
	N_energy.set_Elevel(-1);
	N_hunger.set_Hunger(-1);
	N_social.set_Slevel(-1);
	N_hygiene.set_Hygiene(-1);
}
void Needs::set_Energy()
{
	N_bladder.set_Blevel(-1);
	N_energy.sleep();
	N_hunger.set_Hunger(-1);
	N_social.set_Slevel(-1);
	N_fun.set_Fun(-1);
	N_hygiene.set_Hygiene(-1);
}

void Needs::set_Hygiene()
{
	N_bladder.set_Blevel(-1);
	N_energy.set_Elevel(-1);
	N_hunger.set_Hunger(-1);
	N_social.set_Slevel(-1);
	N_fun.set_Fun(-1);
	N_hygiene.shower();
	
}