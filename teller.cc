#include <iostream>
#include <string>

int tell(std::string line, std::string argument){
    int tell=0;
    for(int length=0;length<line.length();length++){
        if (line[length]==argument[0]){
            tell++;

        }
    }
    return tell;
}


int main(int argc, char *argv[]){
    std::string line,letter;

    while(true) {
        std::cout<<"welke woord wil je gebruiken?"<<std::endl;
        std::getline(std::cin, line);
        std::cout<<"welke letter wil je tellen?"<<std::endl;
        std::getline(std::cin, letter);
        std::cout << tell(line, letter) << std::endl;
    }

    return 0;
}


