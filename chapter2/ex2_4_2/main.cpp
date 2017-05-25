#include <iostream>

int main(void) {
  int i2 = 3;
  int ii = 4;
  // int i =-1, &r = 0; //error only const reference can have literal
  // initialization
  int *const p2 = &i2;
  const int i = -1, &r = 0;
  const int *const p3 = &i2;
  const int *p1 = &i2;
  // const int &const r2;
  const int i4 = ii, &rr = ii;
}