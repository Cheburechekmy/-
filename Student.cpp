#include "Student.h"
#include <iostream>
#include <stdexcept>

// Реализация конструктора
Student::Student(const std::string& name, int age, double averageGrade)
    : name(name), age(age), averageGrade(averageGrade) {
    // Проверка валидности входных данных
    if (age <= 0) {
        throw std::invalid_argument("Возраст должен быть положительным");
    }
    if (averageGrade < 0 || averageGrade > 10) {
        throw std::invalid_argument("Средний балл должен быть от 0 до 10");
    }
}

// Геттеры
std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

double Student::getAverageGrade() const {
    return averageGrade;
}

// Сеттеры с валидацией
void Student::setName(const std::string& name) {
    if (!name.empty()) {
        this->name = name;
    } else {
        throw std::invalid_argument("Имя не может быть пустым");
    }
}

void Student::setAge(int age) {
    if (age > 0) {
        this->age = age;
    } else {
        throw std::invalid_argument("Возраст должен быть положительным");
    }
}

void Student::setAverageGrade(double averageGrade) {
    if (averageGrade >= 0 && averageGrade <= 10) {
        this->averageGrade = averageGrade;
    } else {
        throw std::invalid_argument("Средний балл должен быть от 0 до 10");
    }
}

// Вывод информации о студенте
void Student::displayInfo() const {
    std::cout << "Информация о студенте:" << std::endl;
    std::cout << "Имя: " << name << std::endl;
    std::cout << "Возраст: " << age << " лет" << std::endl;
    std::cout << "Средний балл: " << averageGrade << std::endl;
    std::cout << "Успеваемость: " << getGradeStatus() << std::endl;
}

// Определение статуса успеваемости
std::string Student::getGradeStatus() const {
    if (averageGrade >= 9.0) {
        return "Отличник";
    } else if (averageGrade >= 7.0) {
        return "Хорошо";
    } else if (averageGrade >= 5.0) {
        return "Удовлетворительно";
    } else {
        return "Неудовлетворительно";
    }
}
