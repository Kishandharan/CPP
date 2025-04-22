#include <iostream>
#include <thread>
using namespace std;

void func1(){
    cout << (1233*99983);
    cout << "\n";
}

void func2(){
    cout << (1238*91239);
    cout << "\n";
}

int main(){
    thread t1(func1);
    thread t2(func2);
    t1.join();
    t2.join();

    cout << "completed";
}
