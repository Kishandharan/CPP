#include <iostream>
using namespace std;

namespace mydog_specs{
    string gender = "Female";
    string name = "Elani";
    int age = 5;
}

class Dog{
    public:
        string gender;
        string name;
        int age;

        Dog(string gender, string name, int age){
            this->gender = gender;
            this->name = name;
            this->age = age;
        }

        void bark(){
            cout << "BOW, BOW, BOW!!";
        }
};

int main(){
    mydog_specs::gender = "Male";
    mydog_specs::name = "Mark";
    mydog_specs::age = 10;

    Dog dog(
        mydog_specs::gender, 
        mydog_specs::name, 
        mydog_specs::age
    );

    cout << mydog_specs::gender << endl;
    cout << mydog_specs::name << endl;
    cout << mydog_specs::age << endl;
    
    dog.bark();
}
