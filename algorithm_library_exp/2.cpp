#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


bool ltt(int value){
    return ( value > 10 );
}

int main(){
    deque<int> deque1 = {1,212,4,5,32,5,3,2,45,6,3,5,7,84,3,5,7,4,2,5,6,5,3,36,356,7,4,2};
    if(any_of(deque1.begin(), deque1.end(), ltt)){
        cout << "There are numbers greater than 10 present in the sequence!";
    }else{
        cout << "No numbers are greater than 10!";
    }

    return 0;
}
