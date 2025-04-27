#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("Ali", 25);
    p1.display();
    return 0;
}
