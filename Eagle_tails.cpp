#include <iostream>

class coin_toss{
public:
    coin_toss() = default;
    void start(){
        if (rand()%2 == 0){
            std::cout<<"Eagle"<<std::endl;
            ++count_eagle;
        }
        else{
            ++count_tails;
            std::cout<<"Tails"<<std::endl;
        }
    }
    void getInfo(){
        std::cout<<"Eagle: "<<count_eagle<<std::endl;
        std::cout<<"Tails: "<<count_tails<<std::endl;
    }
private:
    unsigned int count_eagle = 0;     
    unsigned int count_tails = 0;     
};



int main(){
    srand(time(nullptr));
    coin_toss a;
    a.start();
    a.start();
    a.start();
    a.getInfo();
}