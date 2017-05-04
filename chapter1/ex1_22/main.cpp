#include <iostream>
#include "sales_item.h"

/* write a program that reads several transactions and produces thier sum( if they have the same isbn) */

int main( int argc, char* argv[]){
  std::cout << "Enter several transactions, you should see the sum for" << std::endl;
  Sales_item item1, item2;
  std::cin >> item1; 
  while ( std::cin >> item2 ){
    if( item1.isbn() == item2.isbn()){
      item1 += item2; 
    }else{
      return -1;
    }
  }
  std::cout << "total" <<item1 << std::endl;
  return 0;
}



