#include "Hygiene.h"

void Hygiene::shower() {

  if (H_level + 5 > 10) {
    H_level = 10;
    cout << "The Hygiene is: " << H_level << endl;
    return;
  }
  H_level += 5;
  cout << "The Hygiene is: " << H_level << endl;
}

void Hygiene::set_Hygiene(int num) {

  if (H_level + num <= 3) {
    cout << "I need to sower!\n";
    cout << "The Hygiene is: " << H_level << endl;
  }
  if (H_level + num <= 0) {
    H_level = 0;
    return;
  }
  if (H_level + num >= 10) {
    H_level = 10;
    cout << "The Hygiene is: " << H_level << endl;
    return;
  }
  H_level += num;
  cout << "The Hygiene is: " << H_level << endl;
}
