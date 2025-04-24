#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    long tstart;
    long tend;
    long nstart;
    long nend;
    fstream out("table.txt", ios::out);
    cout << "T-start: ";
    cin >> tstart;
    cout << "T-end: ";
    cin >> tend;
    cout << "N-start: ";
    cin >> nstart;
    cout << "N-end: ";
    cin >> nend;
    cout << "\n";
    for(int i = tstart; i<=tend; i++){             //Table loop
       for(int j = nstart; j<=nend; j++){          //Number loop
           out << to_string(j) << "*" << to_string(i) << "=" << to_string(i*j) << "\n";
       }
       out << "\n";
    }
}
