#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1;
    p1.setData("Ali", 25);
    p1.display();
    return 0;
}

