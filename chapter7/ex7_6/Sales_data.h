#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <cassert>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned int units_sold = 0;
  double revenue = 0.0;

  std::string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &newsd) {
    assert(this->bookNo == newsd.bookNo);
    this->units_sold += newsd.units_sold;
    this->revenue += newsd.revenue;
    return *this;
  }
};

std::istream &read(std::istream &is, Sales_data &book);
std::ostream &print(std::ostream &os, const Sales_data &book);
Sales_data add(const Sales_data &abook, const Sales_data &bbook);

#endif