/*
Task
Given three integers a ,b ,c, return the largest number obtained after inserting the following operators and brackets: +, *, ()
In other words , try every combination of a,b,c with [*+()] , and return the Maximum Obtained
Consider an Example :
With the numbers are 1, 2 and 3 , here are some ways of placing signs and brackets:

1 * (2 + 3) = 5
1 * 2 * 3 = 6
1 + 2 * 3 = 7
(1 + 2) * 3 = 9
So the maximum value that you can obtain is 9.
*/

unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
  unsigned short int res_1 = a + b * c;
  unsigned short int res_2 = (a + b) * c;
  unsigned short int res_3 = a * b * c;
  
  unsigned short int res_4 = a * b + c;
  unsigned short int res_5 = a * (b + c);
  
  unsigned short int res_6 = a + b + c;
  return std::max({res_1, res_2, res_3, res_4, res_5, res_6});
}