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
    int tabn1;
    int tabn2;
    int tabn3;
    int start;
    int end;
    cout << "Table1: ";
    cin >> tabn1;

    cout << "Table2: ";
    cin >> tabn2;
    
    cout << "Table3: ";
    cin >> tabn3;

    cout << "Start: ";
    cin >> start;

    cout << "End: ";
    cin >> end;

    thread t1(savetable, &table1, tabn1, start, end);
    thread t2(savetable, &table2, tabn2, start, end);
    thread t3(savetable, &table3, tabn3, start, end);
    t1.join();
    t2.join();
    t3.join();
    for(int i = 0; i < table1.size(); i++){
        cout << table1.at(i) << "    " << table2.at(i) << "    " << table3.at(i) << endl;
    }
}
