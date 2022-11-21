
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    int n;
    std::string name;
    float mark = 0;
    std::cout << "\n Enter your number:\n";
    std::cin >> n;
    switch (n) {
        case 1:
            name = "Oleh ";
            mark = 4.5;
            break;
        case 2:
            name = "Ann";
            mark = 3.5;
            break;
        case 3:
            name = "Varva";
            mark = 5;
            break;
        case 4:
            name = "Kate";
            mark = 4.6;
            break;
        case 5:
            name = "Olga";
            mark = 3.5;
            break;
        case 6:
            name = "Ahmed";
            mark = 3.5;
            break;
        case 7:
            name = "Artem";
            mark = 3.5;
            break;
        default: {
            std::cout << "Please, enter number from 1 - 7";
        }
    }
    std::cout << name;
    std::cout << mark;
}