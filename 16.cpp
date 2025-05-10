#include <iostream>
#include <fstream>
#include <deque>
using namespace std;

int main(){
    fstream in("data.txt");
    if(!in){
        cerr << "error";
    }
    deque<string> words;
    string line;
    while(getline(in, line)) {
        words.push_back(line);        
    }
    for(string item : words) {
        cout << item << endl;        
    }
    return 0;
}
