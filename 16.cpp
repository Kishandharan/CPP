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
    for(int i = 0; i < 21; i++) {
        cout << words.at(i) << endl;        
    }
    for(int i = 1; i < 10; i++) {
       cout << "twenty " << words.at(i) << endl;        
    }
    return 0;
}

