#include <iostream>

namespace ns1{
    int x = 0;

    void zipper(){
        std::cout << "hello";
    }
}

int main(){
    std::cout << ns1::x;
    ns1::zipper();
}
