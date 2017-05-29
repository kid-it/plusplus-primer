#include <iostream>
#include <string>

/* Identify and correct the limitation*/

//const is added 
bool is_empty(const std::string& s ) {return s.empty();}

int main(int argc, char *argv[]) {
  const std::string test1 = "test1";
  std::string test2 = "test2";
  bool b; 

  b = is_empty(test1); // would not work prior to change
  b = is_empty("test2"); // would not work prior to change 
  b = is_empty(test2); // would work
}