#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1;
    p1.name = "Ali";
    p1.age = 25;
    p1.display();
    return 0;
}
