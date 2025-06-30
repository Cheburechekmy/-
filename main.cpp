#include "Student.h"
#include <iostream>

int main() {
    try {
        // Создание объектов
        Student student1("Иванов Иван", 20, 8.5);
        Student student2("Петрова Анна", 19, 9.2);

        // Демонстрация работы
        student1.displayInfo();
        student2.displayInfo();

        // Изменение данных
        student1.setAverageGrade(9.0);
        student1.displayInfo();

    } catch (const std::exception& ex) {
        std::cerr << "Ошибка: " << ex.what() << std::endl;
    }

    return 0;
}
