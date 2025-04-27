#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int studentID;

    void setStudentData(string n, int a, int id) {
        setData(n, a);
        studentID = id;
    }

    void displayStudent() {
        display();
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Student s1;
    s1.setStudentData("Ali", 20, 101);
    s1.displayStudent();
    return 0;
}
