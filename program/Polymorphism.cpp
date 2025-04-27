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

    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    string company;

    void setEmployeeData(string n, int a, string c) {
        setData(n, a);
        company = c;
    }

    void display() override {
        cout << "Name: " << name << ", Age: " << age << ", Company: " << company << endl;
    }
};

int main() {
    Employee e1;
    e1.setEmployeeData("Ali", 30, "Tech Corp");
    e1.display();
    return 0;
}