#include "src/lib/solution.h"
#include <iostream>
#include<vector>

int main() {
  CPPLib s;
  std::string str="AAB";
  std::cout << std::boolalpha;  
  std::cout<<"Return value "<<s.canBePalindrome(str)<<std::endl;


  return 0;
}