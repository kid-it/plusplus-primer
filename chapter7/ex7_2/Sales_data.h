#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <cassert>

struct Sales_data
{
    std::string bookNo;
    unsigned int units_sold = 0;
    double revenue = 0.0;

    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &newsd)
    {
        assert(this->bookNo == newsd.bookNo);
        this->units_sold += newsd.units_sold;
        this->revenue += newsd.revenue;
        return *this;
    }
};

#endif