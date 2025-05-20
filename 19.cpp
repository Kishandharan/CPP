#include <iostream>
using namespace std;

template <typename T1>
T1 func(T1 v1, T1 v2){
    return v1+v2;
}

int main(){
    cout << func<int>(10, 10) << endl;
    cout << func<float>(10.5, 10.5) << endl;
}
