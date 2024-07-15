// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){

    std::vector<int> primes;
    primes.push_back(1);
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(4);

    std::cout << "the vector has " << primes.size()<< std::endl;

    std::cout << "element 2: "<< primes[2] << std::endl; 

    std::cout << std::endl << std::endl;
    return (0);
}
