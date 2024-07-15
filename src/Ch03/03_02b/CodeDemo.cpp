// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow (std::string i_name, int i_age, cow_purpose i_purpose){
        name = i_name;
        age = i_age;
        purpose = i_purpose;
    }
    std::string get_name () const {
        return name;
    }

    cow_purpose get_purpose () const {
    return purpose;
    }
    
    int get_age() const {
        return age;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("LaVacauh!", 5, cow_purpose::pet);
    //my_cow.get_n = 5;
    //my_cow.name = "Betsy";
    //my_cow.purpose = cow_purpose::dairy;
    //std::cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is "<< my_cow.get_age() << " years old, " << "and it is a type-" << (int) my_cow.get_purpose() <<  std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
