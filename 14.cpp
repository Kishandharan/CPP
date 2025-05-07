#include <iostream>
#include <thread>
#include <deque>
#include <string>
using namespace std;

deque<string> table1;
deque<string> table2;
deque<string> table3;

void savetable(deque<string>* pDest, int tabn, int start, int end){
    string line;
    for (int i = start; i <= end; i++) {
        line = to_string(i) + "*" + to_string(tabn) + "=" + to_string((i*tabn));
        pDest -> push_back(line);
    }
}

int main(){
    thread t1(savetable, &table1, 1, 1, 10);
    thread t2(savetable, &table2, 2, 1, 10);
    thread t3(savetable, &table3, 3, 1, 10);
    t1.join();
    t2.join();
    t3.join();
    for(int i = 0; i < table1.size(); i++){
        cout << table1.at(i) << "    " << table2.at(i) << "    " << table3.at(i) << endl;
    }
}
