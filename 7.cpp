#include <iostream>
using namespace std;

struct Student{
    string college;
    string name;
    int age;
    bool gender;
};


int main(){
    Student student = {"SMVITM", "Kishan", 19, true};
    cout << student.college;
    cout << student.name;
    cout << student.age;
    cout << student.gender;
}

