#include <iostream>
#include <windows.h>
#include <thread>
using namespace std;

void timer(long millis, string name){
    Sleep(millis);
    cout << "Timer " << name << " is complete!" << endl;
}

int main(){
    long dur1;
    long dur2;
    long dur3;
    cout << "How many minutes(Timer1)? ";
    cin << dur1;
    cout << endl;

    cout << "How many minutes(Timer2)? ";
    cin << dur2;
    cout << endl;

    cout << "How many minutes(Timer3)? ";
    cin << dur3;
    cout << endl;


    thread t1(timer, dur1*60000, "tim1");
    thread t2(timer, dur2*60000, "tim2");
    thread t3(timer, dur3*60000, "tim3");
    t1.join();
    t2.join();
    t3.join();
    
}
