#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

int main() {
    Person p;
    cout << "Enter name: ";
    getline(cin, p.name);
    cout << "Enter age: ";
    cin >> p.age;

    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;

    return 0;
}