// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ rocks!";

    std::cout << "type of a: " << typeid(a).name() << std::endl;
    std::cout << "type of b: " << typeid(b).name() << std::endl;
    std::cout << "type of c: " << typeid(c).name() << std::endl;
    std::cout << "type of d: " << typeid(d).name() << std::endl;
    std::cout << "type of e: " << typeid(e).name() << std::endl;
    std::cout << "type of f: " << typeid(f).name() << std::endl;
    std::cout << "type of g: " << typeid(g).name() << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
