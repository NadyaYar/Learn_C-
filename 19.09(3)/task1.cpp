#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()  {
    int x, y, z, i = 0;
    int n;
    std::cout << "Enter your number from 100 to 999";
    std::cin >> n;
    if (100 < n && n < 999) {
        x = n / 100;
        y = n / 10 % 10;
        z = n % 100 % 10;
        if (x % 2 != 0) {
            i++;
        }
        if (y % 2 != 0) {
            i++;
        }
        if (z % 2 != 0) {
            i++;
        }
    }
        std::cout << "Answer : " << i;
    }