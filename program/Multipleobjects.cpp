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

int main() {
    Person p1, p2;
    p1.setData("Ali", 25);
    p2.setData("Sara", 22);

    p1.display();
    p2.display();
    return 0;
}
