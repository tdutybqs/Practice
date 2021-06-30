#include <iostream>

unsigned int calculateWords(std::string line){
    int count = 0;
    int start = 0;
    while (line.find(" ", start) != std::string::npos){
        start = line.find(" ", start) + 1;
        count++;
    }
    return count + 1;
}


int main(){
    std::cout<<"Words in \"Hello, world!\" = "<<calculateWords("Hello, world")<<std::endl;
}