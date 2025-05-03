#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << to_string(1) << "*" << to_string(1) << "=" << to_string((1*1));
    cout << "          ";
    cout << to_string(2) << "*" << to_string(1) << "=" << to_string((1*2));
    cout << "          ";
    cout << to_string(3) << "*" << to_string(1) << "=" << to_string((1*3));
    cout << "          ";
    return 0;
}
