#include "Hygiene.h"

void Hygiene::shower() {

  if (H_level + 5 > 10) {
    H_level = 10;
    
    return;
  }
  H_level += 5;
  
}

void Hygiene::set_Hygiene(int num) {

  if (H_level + num <= 3) {
    
  }
  if (H_level + num <= 0) {
    H_level = 0;
    return;
  }
  if (H_level + num >= 10) {
    H_level = 10;
    
    return;
  }
  H_level += num;
  
}
