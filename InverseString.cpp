#include <iostream>

void printInverseString(std::string line){
    std::string outputString;
    for (int i = line.size(); i >= 0; --i){
        outputString += line[i];
    }
    std::cout<<outputString<<std::endl;
}



int main(){
    printInverseString("Hello, world");
}