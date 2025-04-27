#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    static int count;

    Person(string n, int a) {
        name = n;
        age = a;
        count++;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int Person::count = 0;

int main() {
    Person p1("Ali", 25);
    Person p2("Sara", 22);

    cout << "Total Persons: " << Person::count << endl;
    return 0;
}
