#include <iostream>


bool isPrime(unsigned int n){
    for (int i = 2; i < 9; ++i){
        if (n % i == 0 && i != n){
            return false;
        }
    }
    return true;
}


unsigned int simpleNumber(unsigned int n){
    int number = 2;
    while (n){
        if (isPrime(number)){
            --n;
            if (!n) return number;
        }
        ++number;
    }
    return number;
}



int main(){
    for (int i = 1; i < 7; ++i){
        std::cout<<simpleNumber(i)<<std::endl;
    }
}