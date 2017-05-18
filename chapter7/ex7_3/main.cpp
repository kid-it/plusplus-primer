#include <iostream>
#include <string>
#include "Sales_data.h"

/* Revise the transaction-processing program */

int main(int argc, char *argv[])
{
  Sales_data total;
  if (std::cin >> total.bookNo >> total.units_sold >> total.revenue)
  {
    Sales_data trans;
    while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
    {
      if (total.isbn() == trans.isbn())
      {
        total.combine(trans);
      }
      else
      {
        std::cout << total.bookNo << " " << total.units_sold << " "
                  << total.revenue << std::endl;
        total.bookNo = trans.bookNo;
        total.units_sold = trans.units_sold;
        total.revenue = trans.revenue;
      }
    }
    std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue
              << std::endl;
    return 0;
  }
  std::cout << "no data" << std::endl;
  return 0;
}