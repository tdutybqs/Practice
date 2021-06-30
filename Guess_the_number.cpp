#include <iostream>


unsigned int getNumber() {
    return rand() % 10;
}

void start(unsigned int* balance) {
    int user_number = 0;
    unsigned int pc_number = getNumber();
    while (*balance >= 100) {
        std::cout << "Enter number: ";
        std::cin >> user_number;
        std::cout << std::endl;
        if (user_number == pc_number) {
            *balance += 100;
            std::cout << "Congratulations! Your balance is " << *balance << std::endl;
        }
        else {
            *balance -= 100;
            std::cout << "Sorry! Your balance is " << *balance << std::endl;
        }
    }
}


// Exit = -1
int main() {
    srand(time(nullptr));
    unsigned int balance = 0;
    std::cout << "Enter balance: ";
    std::cin >> balance;
    start(&balance);
}