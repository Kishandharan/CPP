#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;


int main () {
    string str1 = "word";    
    string str2 = "";
    deque<char> vowels;
    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');

    for(char chr: str1){
        if(find(vowels.begin(), vowels.end(), chr)){
            str2 += char((int(chr)+5));
        }else{
            str2 += char((int(chr)+4));
        }
    }

    cout << str2;
}
