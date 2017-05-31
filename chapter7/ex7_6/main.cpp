#include <iostream>
#include <string>
#include "Sales_data.h"

/* Revise the transaction-processing program */

int main(int argc, char *argv[]) {
  Sales_data total;
  if (read(std::cin, total)) {
    Sales_data trans;
    while (read(std::cin, trans)) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(std::cout, total);
        total.bookNo = trans.bookNo;
        total.units_sold = trans.units_sold;
        total.revenue = trans.revenue;
      }
    }
    print(std::cout, total);
    return 0;
  }
  std::cout << "no data" << std::endl;
  return 0;
}