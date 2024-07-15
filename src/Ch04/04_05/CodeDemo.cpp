// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    if((id == 0) || (id ==1)){
        std::cout << "número válido" << std::endl;
        float points = 0.0f, credits = 0.0f;
        for (auto x : grades){
            float num_grade = 0.00f;
            if (x.get_student_id() == id){
                switch (x.get_grade()){
                    case 'A': num_grade = 4.0f;
                        break;
                    case 'B': num_grade = 3.0f;
                        break;
                    case 'C': num_grade = 2.0f;
                        break;
                    case 'D': num_grade = 1.0f;
                        break;
                    default: num_grade = 0.00f;
                        break;
                }
            }

            
        }

    }
    else {
        std::cout << "dame un número válido HDP" << std::endl;
    }




    std::string student_str;
    student_str = students[id].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
