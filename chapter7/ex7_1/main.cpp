#include <iostream>

struct Sales_data {
  std::string bookNo;
  unsigned int units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, char *argv[]) {
  Sales_data total;
  if (std::cin >> total.bookNo >> total.units_sold >> total.revenue) {
    Sales_data trans;
    while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
      if (total.bookNo == trans.bookNo) {
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
      } else {
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
