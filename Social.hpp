#pragma once
#include <iostream>

inline void set_score(int level) {
		if (level + 5 > 10) { 
		level = 10;
		return;
	}
	level += 5;
}

class Person;
class Social {
public:
  Social() { S_level = 10; };
  ~Social();
  void talk(Person& person);
  void text(Person& person);
  void phonecall(Person& person);
  int get_social() { return S_level; };
  void set_Slevel(int num);

private:
  int S_level;
};
void Print_house(Person *house);
int member_exist(Person *house, int num);

