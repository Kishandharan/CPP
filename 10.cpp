#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

mutex mtx;

void func(){
    mtx.lock();
    cout << "this is good!";
    cout << "\n";
    mtx.unlock();
}

int main(){
    thread t1(func);    
    thread t2(func);

    t1.join();
    t2.join();
}
