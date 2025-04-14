#include <iostream>
using namespace std;

void add(int* a, int* b, int* res){
    *res = *a + *b;
}

int main(){
    int num1 = 12;
    int num2 = 12;
    int num3;
    add(&num1, &num2, &num3);

    cout << num3;
}

