#include <iostream>
#include <vector>
#include <assert.h>


/*
Complete the square sum function so that it squares each number passed into it and then sums the results together.
For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9.
*/


int square_sum(const std::vector<int>& numbers)
{
    int sum = 0;
    for (auto& i: numbers){
        sum += i * i;
    }
    return sum;
}

int main(){
    assert(square_sum({1, 2}) == 5);
    assert(square_sum({0, 3, 4, 5}) == 50);
    std::cout<<"OK"<<std::endl;
}
