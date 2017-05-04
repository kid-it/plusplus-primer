#include <iostream>
#include "sales_item.h"

/* write a program that reads a set of book sales transactions,
    writing each transactions to the std output */

int main( int argc, char* argv[]){
  std::cout << "Enter sales transactions"  << std::endl;
  Sales_item item1;
  while( std::cin >> item1 ){
    std::cout << item1 << std::endl;
  }
}



