#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Tell me, how many times should I say sorry!? ";
    cin >> num;
    for(int i = 1; i <= num; i++){
	cout << "Sorry\n";
    }
}
