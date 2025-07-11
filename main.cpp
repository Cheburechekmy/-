int main() {
    // Создание нескольких объектов Student
    Student student1("Ivan Petrov", 20, 8.5, "Computer Science", "3rd year");
    Student student2("Anna Sidorova", 19, 7.2, "Economics", "2nd year");
    Student student3("Petr Ivanov", 21, 5.4, "Mathematics", "4th year");

    // Демонстрация использования объектов
    cout << "Student information:" << endl;
    student1.show_info();
    student2.show_info();
    student3.show_info();

    // Изменение данных через сеттеры
    student1.set_averageScore(9.0);
    student2.set_age(20);
    student3.set_faculty("Applied Mathematics");

    cout << "\nInformation after changes:" << endl;
    student1.show_info();
    student2.show_info();
    student3.show_info();

    return 0;
}
