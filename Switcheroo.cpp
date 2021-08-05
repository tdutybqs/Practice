/*
Given a string made up of letters a, b, and/or c, switch the position of letters a and b (change a to b and vice versa). Leave any incidence of c untouched.

Example:

'acb' --> 'bca'
'aabacbaa' --> 'bbabcabb'
*/
#include <string>

std::string switcheroo(const std::string &s) {
  std::string result = s;
  std::replace(result.begin(), result.end(), 'a', ' ');
  std::replace(result.begin(), result.end(), 'b', 'a');
  std::replace(result.begin(), result.end(), ' ', 'b');
  return result;
}