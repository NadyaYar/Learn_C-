#include <iostream>
#include <string>
using namespace std;

int main(void) {
    float first, second;
    cout << "Input 1st and 2nd dividers - " << endl;
    cin >> first;
    cin >> second;
    if (1.0 / first == 1.0 / second){
        cout << "Results are equal (by 0.000001 epsilon)";
        }
    else {
        cout << "Results are not equal (by 0.000001 epsilon)"; 
        
    }
    return 0;
}