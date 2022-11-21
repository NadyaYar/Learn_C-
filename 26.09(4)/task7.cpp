#include <iostream> 
using namespace std; 
int main(void){ 
    float a1= 2.3; 
    float a2= 2.3; 
    float a3= 2.123456; 
    float a4= 2.123456; 
    float a5= 2.123456; 
    cout << a1 <<'\n'; 
    cout << a2 <<"0"<<'\n'; 
    cout << a3 <<'\n'; 
    cout << round (a4 * 100)/100 <<'\n'; 
    cout << int (a5) <<'\n'; 
}
