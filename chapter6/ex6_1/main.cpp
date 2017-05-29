#include <iostream>

/* unsing pointers, write a function to swap to ints*/
void i_swapper(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(int argc, char *argv[]) {
  int a = 99, b = 44;
  std::cout << a << ' ' << b << std::endl;
  i_swapper(&a, &b);

  std::cout << a << ' ' << b << std::endl;
}