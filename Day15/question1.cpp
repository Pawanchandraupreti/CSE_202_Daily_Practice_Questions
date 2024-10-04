#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string name, int age) : name(name), age(age) {}

    void displayDetails() {
        cout << "Student Name: " << this->name << ", Age: " << this->age << endl;
    }
};

int main() {
    Student student("Alice", 20);
    student.displayDetails();

    return 0;
}
