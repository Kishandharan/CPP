#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


bool even(int value){
    return (value%2);
}

int main(){
    deque<int> deque1 = {1,212,4,5,32,5,3,2,45,6,3,5,7,84,3,5,7,4,2,5,6,5,3,36,356,7,4,2};
    if(all_of(deque1.begin(), deque1.end(), even)){
        cout << "All the numbers are even!";
    }else{
        cout << "Not all the numbers are even!";
    }

    return 0;
}
