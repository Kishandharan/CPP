#include <iostream>
#include <deque>
using namespace std;


deque<string> split(string str, string delim){
    deque<string> splits;
    string temp;
    for(string chr: str){
        if(chr != delim){
            temp += chr;
        }else{
            splits.push_back(temp);
            temp = "";
        }
    }
    return splits;
}

int main(){
    string str = "H,E,L,L,O";
    cout << split(str, ",").at(0);
}
