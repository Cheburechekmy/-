// Student.cpp - реализация класса Student

#include "Student.h" // Подключение заголовочного файла

// Реализация конструктора
Student::Student(const std::string& name, int age, double averageGrade)
    : name(name), age(age), averageGrade(averageGrade), scholarship(false) {}

// Реализация методов
std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

double Student::getAverageGrade() const {
    return averageGrade;
}

bool Student::getScholarship() const {
    return scholarship;
}

const std::vector<std::string>& Student::getCourses() const {
    return courses;
}

void Student::setName(const std::string& name) {
    this->name = name;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setAverageGrade(double averageGrade) {
    this->averageGrade = averageGrade;
}

void Student::setScholarship(bool scholarship) {
    this->scholarship = scholarship;
}

void Student::addCourse(const std::string& course) {
    courses.push_back(course);
}

void Student::removeCourse(const std::string& course) {
    courses.erase(std::remove(courses.begin(), courses.end(), course), courses.end());
}

void Student::displayInfo() const {
    std::cout << "Студент: " << name << std::endl;
    std::cout << "Возраст: " << age << std::endl;
    std::cout << "Средний балл: " << averageGrade << std::endl;
    std::cout << "Курсы: ";
    for (const auto& course : courses) {
        std::cout << course << " ";
    }
    std::cout << std::endl;
    std::cout << "Стипендия: " << (scholarship ? "Да" : "Нет") << std::endl;
    std::cout << "----------------------------------" << std::endl;
}

std::string Student::getGradeStatus() const {
    if (averageGrade >= 9.0) {
        return "Отличник";
    } else if (averageGrade >= 8.0) {
        return "Отлично";
    } else if (averageGrade >= 7.0) {
        return "Хорошо";
    } else if (averageGrade >= 6.0) {
        return "Удовлетворительно";
    } else {
        return "Неудовлетворительно";
    }
}
