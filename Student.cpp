#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double averageScore;
    string faculty;
    string course;

public:
    // Конструктор
    Student(string name, int age, double averageScore,
        string faculty, string course)
        : name(name), age(age), averageScore(averageScore),
        faculty(faculty), course(course) {
    }

    // Геттеры
    string get_name() const { return name; }
    int get_age() const { return age; }
    double get_averageScore() const { return averageScore; }
    string get_faculty() const { return faculty; }
    string get_course() const { return course; }

    // Сеттеры
    void set_name(string name) { this->name = name; }
    void set_age(int age) {
        if (age > 0) {
            this->age = age;
        }
        else {
            cout << "Age must be a positive number!" << endl;
        }
    }
    void set_averageScore(double averageScore) {
        if (averageScore >= 0.0 && averageScore <= 10.0) {
            this->averageScore = averageScore;
        }
        else {
            cout << "Average score must be between 0 and 10!" << endl;
        }
    }
    void set_faculty(string faculty) { this->faculty = faculty; }
    void set_course(string course) { this->course = course; }

    // Метод определения оценки по среднему баллу
    string get_grade() const {
        if (averageScore >= 8.0) {
            return "Excellent";
        }
        else if (averageScore >= 6.0) {
            return "Good";
        }
        else if (averageScore >= 4.0) {
            return "Satisfactory";
        }
        else {
            return "Unsatisfactory";
        }
    }

    // Метод вывода информации
    void show_info() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Average Score: " << averageScore << endl;
        cout << "Faculty: " << faculty << endl;
        cout << "Course: " << course << endl;
        cout << "Grade: " << get_grade() << endl;
        cout << "------------------------" << endl;
    }
};
