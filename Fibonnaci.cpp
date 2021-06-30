#include <iostream>
#include <assert.h>


unsigned int Fib(unsigned int n){
    if (n == 0) return 0;
    else if (n == 1) return 1;
    int result = Fib(n-1) + Fib(n-2);
    return result;
}


int main(){
    assert(Fib(0) == 0);
    assert(Fib(1) == 1);
    assert(Fib(2) == 1);
    assert(Fib(3) == 2);
    assert(Fib(4) == 3);
    assert(Fib(5) == 5);
    assert(Fib(6) == 8);
    assert(Fib(7) == 13);
    assert(Fib(8) == 21);
    assert(Fib(9) == 34);
    assert(Fib(10) == 55);
}