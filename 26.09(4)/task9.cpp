#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
        if (arr[i] < 1 || arr[i] > 255) { return -1; }
    }
    cout << arr[0] << "." << arr[1] << "." << arr[2] << "." << arr[3];
    return 0;
}