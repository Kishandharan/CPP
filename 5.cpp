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
    Dog dog(
        mydog_specs::gender, 
        mydog_specs::name, 
        mydog_specs::age
    );
    dog.bark();
}
