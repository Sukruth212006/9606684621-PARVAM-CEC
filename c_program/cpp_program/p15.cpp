#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    int id;
    float baseSalary;
public:
    Employee(string n, int i, float b) : name(n), id(i), baseSalary(b) {}
    virtual float calculateSalary() {
        return baseSalary;
    }
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << calculateSalary() << endl;
    }
    virtual ~Employee() {}
};

// Derived class
class Developer : public Employee {
private:
    float overtimePay;
public:
    Developer(string n, int i, float b, float o)
        : Employee(n, i, b), overtimePay(o) {}

    float calculateSalary() override {
        return baseSalary + overtimePay;
    }

    void display() override {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Developer dev("Alice", 101, 50000, 5000);
    dev.display();
    return 0;
}