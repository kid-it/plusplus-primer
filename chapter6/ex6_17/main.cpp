#include <iostream>
#include <string>

/*Write a function to determine weather a string contains any caplial letters*/
// c - Style
#define C_STYLE (false)

#if C_STYLE
bool contains_upper(const std::string& str) {
  int i;
  for (i = 0; i < str.length(); i++) {
    if (64 < (int)str[i] && 91 > (int)str[i]) {
      return true;
    }
  }
  return false;
}
#else

// c++ - must compile with - std =c++ 11
bool contains_upper(const std::string& str) {
  for (int j : str) {
    if (64 < j && 91 > j) {
      return true;
    }
  }
  return false;
}
#endif

/*Write a function to change a string to all lower case */
void str_to_lower(std::string &str) {
  for (int i = 0; i < str.length(); i++) {
    if (64 < (int)str[i] && 91 > (int)str[i]) {
      str[i] += 32;
    }
  }
}

int main(int argc, char* argv[]) {
  std::string test1 = "Test1";
  std::string test2 = "TEzsTZ%";

  std::cout << contains_upper("testF") << std::endl;
  std::cout << contains_upper("testz") << std::endl;
  
  str_to_lower(test1);
  str_to_lower(test2);
  std::cout << test1 << ' '<< test2 << std::endl;

}