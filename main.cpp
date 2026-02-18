#include <iostream>

int main() {
    std::cout << "Hola Mundo!" << std::endl;
    switch (getchar()) {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            std::cout<< "has pulsado un numero";
            break;
        default:
            std::cout<< "has pulsado una letra";
    }
    return 0;
}
