/*
Create a function that checks if a number n is divisible by two numbers x AND y.
All inputs are positive, non-zero digits.
*/
bool isDivisible(int n, int x, int y) {
  return (n % x == 0 && n % y == 0);
}