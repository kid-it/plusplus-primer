#include <iostream>

struct Sales_data {
  std::string bookNo;
  unsigned int units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char *argv[]) {
  struct Sales_data sd;
  std::cout << sd.revenue << sd.bookNo << std::endl;

  return 0;
}