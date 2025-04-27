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
    Person people[2];

    people[0].setData("Ali", 25);
    people[1].setData("Sara", 22);

    for (int i = 0; i < 2; i++) {
        people[i].display();
    }
    return 0;
}
