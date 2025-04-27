#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    //Default Constructor 
    Person() {
        name = "Unknown";
        age = 0;
    }
    void display() {
        cout<<"NAME:"<<name<<"AGE:"<<age<<endl;
    }
};
int main() {
Person p1;
p1.age;
p1.display();
return 0;
}
