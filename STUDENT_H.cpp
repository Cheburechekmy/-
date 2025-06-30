#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;    // Имя студента
    int age;            // Возраст
    double averageGrade; // Средний балл

public:
    // Конструктор
    Student(const std::string& name, int age, double averageGrade);

    // Геттеры
    std::string getName() const;
    int getAge() const;
    double getAverageGrade() const;

    // Сеттеры
    void setName(const std::string& name);
    void setAge(int age);
    void setAverageGrade(double averageGrade);

    // Метод вывода информации
    void displayInfo() const;

    // Метод оценки успеваемости
    std::string getGradeStatus() const;
};

#endif // STUDENT_H
