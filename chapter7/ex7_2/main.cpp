#include <iostream>
#include <string>
#include "Sales_data.h"

/* adding members isbn, and combine */

int main(int argc, char *argv[])
{
  Sales_data sd1, sd2;
  sd1.bookNo = "sdf-434-34";
  sd1.revenue = 40;
  sd1.units_sold = 10;

  sd2.bookNo = "sdf-434-34";
  sd2.revenue = 20;
  sd2.units_sold = 20;

  sd1.combine(sd2);
  std::cout << sd1.isbn() <<"  "<<sd1.revenue <<  std::endl;

  sd2.bookNo = "w2334-3";
  sd1.combine(sd2);
  return 0;
}

