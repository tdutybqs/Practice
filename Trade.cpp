#include <iostream>


//coin denomination: 1, 2, 5, 10
void trade(unsigned int cost, unsigned int money){
    unsigned int balance = money - cost;
    unsigned int coin_ten = balance / 10;
    unsigned int coin_five = (balance - coin_ten * 10) / 5;
    unsigned int coin_two = (balance - coin_ten * 10 - coin_five * 5 ) / 2;
    unsigned int coin_one = (balance - coin_ten * 10 - coin_five * 5 - coin_two *2)  / 1;
    std::cout<<"Balance = "<<balance<<std::endl;
    std::cout<<"Сoin denomination 10 - "<<coin_ten<<std::endl;
    std::cout<<"Сoin denomination 5 - "<<coin_five<<std::endl;
    std::cout<<"Сoin denomination 2 - "<<coin_two<<std::endl;
    std::cout<<"Сoin denomination 1 - "<<coin_one<<std::endl;
}



int main(){
    unsigned int cost = 100;
    unsigned int money = 548;
    trade(cost, money);
}