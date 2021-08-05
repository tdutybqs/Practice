/*
Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'. Return the resulting string.
*/
#include <string>

std::string fakeBin(std::string str){ 
  for (int i = 0; i < str.length(); ++i){
    str[i] = (str[i] - '0') >= 5 ? '1' : '0';
  }
  return str;
}