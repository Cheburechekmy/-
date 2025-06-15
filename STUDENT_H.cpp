STUDENT_H
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <iostream>

class Student {
private:
    std::string name;
    int age;
    double averageGrade;
    std::vector<std::string> courses;
    bool hasScholarship;

public:
    // Конструктор
    Student(const std::string& name, int age, double averageGrade);

    // Геттеры
    std::string getName() const;
    int getAge() const;
    double getAverageGrade() const;
    const std::vector<std::string>& getCourses() const;
    bool getHasScholarship() const;

    // Сеттеры
    void setName(const std::string& name);
    void setAge(int age);
    void setAverageGrade(double averageGrade);
    void setHasScholarship(bool scholarship);

    // Дополнительные методы
    void addCourse(const std::string& course);
    void displayInfo() const;
    std::string getGradeStatus() const;
    void updateScholarshipStatus();
};

#endif // STUDENT_H
