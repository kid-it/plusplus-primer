#include "Sales_data.h"
#include <iostream>

std::istream &read(std::istream &is, Sales_data &book) {
  double price = 0.0;
  is >> book.bookNo >> book.units_sold >> price;
  book.revenue = price * book.units_sold;
  return is;
}

std::ostream &print(std::ostream &os, const Sales_data &book) {
  os << "isbn: " << book.bookNo << " units sold: " << book.units_sold
     << " revenue: " << book.revenue << "\n";
  return os;
}

Sales_data add(const Sales_data &abook, const Sales_data &bbook) {
  Sales_data tot = abook;
  tot.combine(bbook);
  return tot;
}
