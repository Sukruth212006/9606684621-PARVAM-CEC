#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double baseSalary;
public:
    Employee(string n, double s) : name(n), baseSalary(s) {}
    virtual void display() = 0;
    virtual ~Employee() {}
};

class Manager : public Employee {
    double bonus;
public:
    Manager(string n, double s, double b) : Employee(n, s), bonus(b) {}
    void display() override {
        double totalSalary = baseSalary + bonus;
        cout << "Manager Name: " << name << endl;
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

class Developer : public Employee {
    double allowance;
public:
    Developer(string n, double s, double a) : Employee(n, s), allowance(a) {}
    void display() override {
        double totalSalary = baseSalary + allowance;
        cout << "Developer Name: " << name << endl;
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Allowance: " << allowance << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main() {
    Manager mgr("Alice", 5000, 1500);
    Developer dev("Bob", 4000, 800);

    mgr.display();
    cout << endl;
    dev.display();

    return 0;
}