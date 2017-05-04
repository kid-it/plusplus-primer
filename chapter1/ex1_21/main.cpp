#include <iostream>
#include "sales_item.h"

/* write a program that reads two sales_items objects and produces thier sum( if they have the same isbn) */

int main( int argc, char* argv[]){
  std::cout << "Enter sales transactions, you should see the sum for "\
    "two consecutive isbns"  << std::endl;
  Sales_item old, nnew ;
  std::cin >> old;
  while( std::cin >> nnew ){
    if( nnew.isbn() == old.isbn() ){
      std::cout << nnew + old << std::endl;
    }else{
      old = nnew;
    }
  }
  return 0;
}



