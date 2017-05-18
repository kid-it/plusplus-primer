#include <iostream>
#include <string>
#include "person.h"

/* Revise the person program */

int main(int argc, char *argv[])
{
  person tim;
  tim.name = "tim";
  tim.address = "700 Pen avenue";

  std::cout << tim.name << " " << tim.address << std::endl;
  return 0;
}