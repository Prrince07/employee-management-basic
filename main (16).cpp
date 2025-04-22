#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double salary;

    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.getDetails();
    emp.displayDetails();

    return 0;
}
