/*
Complete the solution so that it reverses the string passed into it.

'world'  =>  'dlrow'
*/

#include <string>
using namespace std ; 

string reverseString (string str )
{
  string result = "";
  for (int i = str.length() - 1; i >= 0; --i){
    result += str[i];
  }
  return result;
}