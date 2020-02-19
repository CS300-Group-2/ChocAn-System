#include <iostream>
#include "interfaces/util.c"

int main() {
    char* response = 0;
    std::cout << "Welcome to the ChocAn MVP simulator! Which terminal would you like to load?" << std::endl;
    std::cout << "(a) The provider terminal" << std::endl;
    std::cout << "(b) The manager terminal" << std::endl;
    std::cout << "(c) The scenario simulator terminal" << std::endl;
    getOption("abc", response);
    switch(*response) {
        case 'a':
        providerTerm();
        break;
        case 'b':
        managerTerm();
        break;
        case 'c':
        simulatorTerm();
        break;
    }
}
