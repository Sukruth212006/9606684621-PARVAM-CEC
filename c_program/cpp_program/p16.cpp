#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double baseSalary;
public:
    Employee(string n, double s) : name(n), baseSalary(s) {}
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Base Salary: " << baseSalary << endl;
    }
    virtual double computeSalary() = 0;
};

class Manager : public Employee {
    double bonus;
public:
    Manager(string n, double s, double b) : Employee(n, s), bonus(b) {}
    void display() override {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << computeSalary() << endl;
    }
    double computeSalary() override {
        return baseSalary + bonus;
    }
};

class Developer : public Employee {
    double allowance;
public:
    Developer(string n, double s, double a) : Employee(n, s), allowance(a) {}
    void display() override {
        Employee::display();
        cout << "Allowance: " << allowance << endl;
        cout << "Total Salary: " << computeSalary() << endl;
    }
    double computeSalary() override {
        return baseSalary + allowance;
    }
};

int main() {
    Manager mgr("Alice", 50000, 10000);
    Developer dev("Bob", 40000, 5000);

    cout << "Manager Details:" << endl;
    mgr.display();
    cout << endl;

    cout << "Developer Details:" << endl;
    dev.display();

    return 0;
}