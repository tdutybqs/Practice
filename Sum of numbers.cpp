/*
Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. If the two numbers are equal return a or b.

Note: a and b are not ordered!
*/

int get_sum(int a, int b)
{
  int max = a > b ? a : b;
  int sum = 0;
  for (int i = a < b ? a : b; i <= max; ++i){
    sum += i;
  }
  return sum;
}