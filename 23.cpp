#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<string> splits;
    string str1 = "This, is, my, string";
    string temp;
    
    for(char chr : str1) {
        temp += chr;
        cout << temp << endl;
    }
}
