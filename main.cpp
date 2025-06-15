#include "Student.h"
#include <iostream>

int main() {
    Student student1("Анна Петрова", 20, 8.5);
    Student student2("Иван Иванов", 19, 6.2);
    
    student1.displayInfo();
    std::cout << "Оценка: " << student1.getGradeStatus() << std::endl;
    
    student2.displayInfo();
    std::cout << "Оценка: " << student2.getGradeStatus() << std::endl;
    
    return 0;
}
