#include <iostream>
using namespace std;

class Employee {  
    private:
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    public:
                
        int getEmployeeId() {
            return employeeId;
        }
        string getEmployeeName() {
            return employeeName;
        }
        double getSalary() {
            return salary;
        }
        double getNetSalary() {
            return netSalary;
        }
        void setEmployeeId(int id) {
            employeeId = id;
        }
        void setEmployeeName(string name) {
            employeeName = name;
        }
        void setSalary(double sal) {
            salary = sal;
        }
        void setNetSalary(double pf) {
            netSalary = (double)pf;
        }
        int pfpercentage;
        void calculateNetSalary(int pfpercentage) {
            
            netSalary = salary - ( salary * pfpercentage ) / 100;
        }
};


int main(){  

   
    int id;
	string name;
	double sal;
	float pf;
	
	cout<<"Enter Id:"<<endl;
	cin>>id;
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"Enter salary:"<<endl;
	cin>>sal;
	cout<<"Enter PF percentage:"<<endl;
	cin>>pf;
    
  
    Employee e1;
    e1.setEmployeeId(id);
    e1.setEmployeeName(name);
    e1.setSalary(sal);
    e1.setNetSalary(pf);
    e1.calculateNetSalary(pf);
    
    cout<<"Id: "<<e1.getEmployeeId()<<endl;
    cout<<"Name: "<<e1.getEmployeeName()<<endl;
    cout<<"Salary:"<<e1.getSalary()<<endl;
    cout<<"Net Salary: "<<e1.getNetSalary()<<endl;
    return 0;
}

