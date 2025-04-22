#include <iostream>
#include <thread>
using namespace std;

unsigned long thread1_sum;
unsigned long thread2_sum;
unsigned long thread3_sum;
unsigned long thread4_sum;
unsigned long total;

void th_func1(){
    int i;
    for(i=1; i<=250; i++){
        cout << i;
        cout << endl;
    }
    thread1_sum = i;
}


void th_func2(){
    int i;
    for(i=1; i<=250; i++){
        cout << i;
        cout << endl;
    }
    thread2_sum = i;
}


void th_func3(){
    int i;
    for(i=1; i<=250; i++){
        cout << i;
        cout << endl;
    }
    thread3_sum = i;
}


void th_func4(){
    int i;
    for(i=1; i<=250; i++){
        cout << i;
        cout << endl;
    }
    thread4_sum = i;
}

int main(){
    thread t1(th_func1);
    thread t2(th_func2);
    thread t3(th_func3);
    thread t4(th_func4);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    total = thread1_sum + thread2_sum + thread3_sum + thread4_sum;
    cout << "Total: ";
    cout << total;
}
