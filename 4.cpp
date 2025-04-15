#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    srand(time(0));
    string line;
    vector<string> words;
    ifstream dictionary("dictionary.txt");

    if(!dictionary){
        cout << "error";
        return 1;
    }
    while(getline(dictionary, line)){
        words.push_back(line);
    }

    cout << words.at((rand()%10000));

    return 0;
    
}
