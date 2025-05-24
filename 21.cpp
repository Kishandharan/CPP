#include <iostream>
#include <windows.h>
#include <thread>
using namespace std;

void timer(long millis, string name){
    Sleep(millis);
    cout << "Timer " << name << " is complete!" << endl;
}

int main(){
    thread t1(timer, 1000, "tim1");
    thread t2(timer, 2000, "tim2");
    thread t3(timer, 3000, "tim3");
    t1.join();
    t2.join();
    t3.join();
    
}
