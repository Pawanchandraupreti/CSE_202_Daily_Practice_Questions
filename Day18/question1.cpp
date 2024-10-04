#include <iostream>
#include <tuple>
#include <string>

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    int age;

public:
    Person(const string& firstName, const string& lastName, int age)
        : firstName(firstName), lastName(lastName), age(age) {}

    string getFullName() const {
        return firstName + " " + lastName;
    }

    tuple<string, string, int> getDetails() const {
        return make_tuple(firstName, lastName, age);
    }
};

int main() {
    Person person("John", "Doe", 30);

    cout << "Full Name: " << person.getFullName() << endl;

    auto [fName, lName, age] = person.getDetails();
    cout << "First Name: " << fName << "\nLast Name: " << lName << "\nAge: " << age << endl;

    return 0;
}
