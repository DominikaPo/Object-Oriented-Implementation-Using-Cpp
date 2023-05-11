#include <iostream>
#include <string.h>

using namespace std;

class Employee {
private:
    static int count;
    int employeeId;
    string employeeName;
    double salary;
    double netSalary;

public:
    int pfpercentage;
    
    void setEmployeeId(int id) {
        employeeId = id;
    }

    int getEmployeeId() {
        return employeeId;
    }

    void setEmployeeName(string name) {
        employeeName = name;
    }

    string getEmployeeName() {
        return employeeName;
    }

    void setSalary(double sal) {
        salary = sal;
    }

    double getSalary() {
        return salary;
    }

    void setNetSalary(double netSal) {
        netSalary = netSal;
    }

    double getNetSalary() {
        return netSalary;
    }

    void calculateNetSalary(int pfpercentage) {
        netSalary = salary - ((salary * pfpercentage) / 100);
    }

    void display() {
        cout << "Id: " << employeeId << endl;
        cout << "Name: " << employeeName << endl;
        cout << "Net Salary (In dollars): " << netSalary << endl;
    }

    void getEmployeeDetails() {
        cout << "Enter Name:" << endl;
        cin >> employeeName;
        cout << "Enter salary (In dollars):" << endl;
        cin >> salary;
    }

    static int generateEmployeeId() {
        return ++count;
    }
};

int Employee::count = 99;

int main() {
  int pfpercentage;
  
    
    for (int i = 0; i < 2; i++) {
        Employee emp;
        emp.getEmployeeDetails();
        emp.setEmployeeId(Employee::generateEmployeeId());
        cout << "Enter PF percentage:" << endl;
        cin >> pfpercentage;
        emp.calculateNetSalary(pfpercentage);
        emp.display();
    }


    return 0;
}