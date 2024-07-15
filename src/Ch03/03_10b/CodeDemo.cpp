// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){

    std::vector<cow> my_cattle_vector;
    my_cattle_vector.push_back(cow("primera",1,cow_purpose::meat));

    my_cattle_vector.push_back(cow("segunda",2,cow_purpose::dairy));
    
    std::cout <<"la vaca 1 se llama: "<< 

    std::cout << std::endl << std::endl;
    return (0);
}
