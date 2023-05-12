#include <iostream>
using namespace std;

class Student {   
    private:
        int studentId;
        string name;
        int departmentId;
        string gender;
        string phoneNumber;
  public:    

    void setStudentId(int id) {
        studentId = id;
    }
    int getStudentId() {
        return studentId;
    }
    void setName(string name) {
        this -> name = name;
    }
    string getName() {
        return name;
    }
    void setDepartmentId(int deptId) {
        departmentId = deptId;
    }
    int getDepartmentId() {
        return departmentId;
    }
    void setGender(string gender) {
        this -> gender = gender;
    }
    string getGender() {
        return gender;
    }
    void setPhoneNumber(string phNo) {
        phoneNumber = phNo;
    }
    string getPhoneNumber() {
        return phoneNumber;
    }

};
int main()
{

    int id,deptId;
    string name,gender,phNo;
    cout<<"Enter the details:"<<endl;
    cout<<"Student Id"<<endl;
    cin>>id;
    cout<<"Student Name"<<endl;
    cin>>name;
    cout<<"Department Id"<<endl;
    cin>>deptId;
    cout<<"Gender"<<endl;
    cin>>gender;
    cout<<"Phone Number"<<endl;
    cin>>phNo;
    

    Student e1;
    e1.setStudentId(id);
    e1.setName(name);
    e1.setDepartmentId(deptId);
    e1.setGender(gender);
    e1.setPhoneNumber(phNo);
    
    cout<<"Student details entered:"<<endl;
    cout<<e1.getStudentId()<<" "<<e1.getName()<<" "<<e1.getDepartmentId()<<" "<<e1.getGender()<<" "<<e1.getPhoneNumber()<<endl;
    
       return 0;
}
