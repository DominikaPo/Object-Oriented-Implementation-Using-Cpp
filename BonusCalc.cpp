#include <iostream>
#include <string.h>
using namespace std;
class Company
{
    private:
        static string companyName;
        static string address;
        static long int contactNumber;
    public:
        static void displayCompanyDetails() {
            cout<<"Company Name: "<<companyName<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Contact Number: "<<contactNumber<<endl;
        }
        static string getCompanyName()
        {
            return companyName;
        }
        static string getAddress()
        {
            return address;
        }
        static long int getContactNumber()
        {
            return contactNumber;
        }
        static void setCompanyName(string cname)
        {
            companyName=cname;
        }
        static void setAddress(string add)
        {
            address=add;
        }
        static void setContactNumber(long int cnumber)
        {
            contactNumber=cnumber;
        }
};

string Company::companyName = "TekSoft";
string Company::address = "Los Angeles";
long int Company::contactNumber = 422245673;

class Employee
{
    private:
        string empName;
        int empId;
        double netSalary;
        Company cObj;
    public:
        int bonus;
        void getEmployeeDetails() {
            cout<<"Enter Employee Name:"<<endl;
            cin>>empName;
            cout<<"Enter Employee ID:"<<endl;
            cin>>empId;
            cout<<"Enter Net Salary (In dollars):"<<endl;
            cin>>netSalary;
        }
        int calculateBonusPercentage() {
            int bonus;
            
            if (netSalary > 50000 && netSalary <= 80000) {
                bonus = 5;
            }
            else if (netSalary > 30000 && netSalary <= 50000) {
                bonus = 10;
            }
            else if (netSalary > 10000 && netSalary <= 30000) {
                bonus = 15;
            }
            else {
                bonus = 20;
            }
            return bonus;
        }
        void displayEmployeeDetails() {
            int bonus = calculateBonusPercentage();
            
            cout<<"Employee Name: "<<empName<<endl;
            cout<<"Employee ID: "<<empId<<endl;
            cout<<"Employee Net Salary (In dollars): "<<netSalary<<endl;
            cout<<"Employee Bonus Percentage: "<<bonus<<"%"<<endl;
        }
        void setEmpName(string name)
        {
            this->empName=name;
        }
        void setEmpId(int id)
        {
            this->empId=id;
        }
        void setNetSalary(double net)
        {
            this->netSalary=net;
        }
        void setCobj(Company c)
        {
            this->cObj=c;
        }
        Company getCobj()
        {
            return this->cObj;
        }
        //include required getter methods
};
int main()  //DO NOT change the 'main' signature
{
        //fill the code here
        Company c1;
        Employee e1;
        
        e1.getEmployeeDetails();
        e1.calculateBonusPercentage();
        c1.displayCompanyDetails();
        e1.displayEmployeeDetails();
        
        return 0;
}