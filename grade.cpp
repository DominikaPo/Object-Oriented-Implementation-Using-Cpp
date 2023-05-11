#include <iostream>
using namespace std;
class College
{
    private:
        string principal_name;  // principal_name is common for all the students
    public:
        static void setPrincipalName(string name)
        {
            principal_name=name;
        }
       static string getPrincipalName()
        {
            return principal_name;
        }
};
class Student
{
    private:
        int id;
        string name;
        float marks[5];
        float average;
        char grade;
        College cObj;
    public:
        void getStudentDetails();
        void calculateAverage();
        void findGrade();
        void displayStudentDetails();
        void setId(int id)
        {
            this->id=id;
        }
        int getId()
        {
            return id;
        }
        void setAverage(float average)
        {
            this->average=average;
        }
        int getAverage()
        {
            return average;
        }
        void setName(string n)
        {
            this->name=n;
        }
        string getName()
        {
            return name;
        }
        void setMarks(float m[])
        {
            for(int i=0; i<5;i++)
                this->marks[i]=m[i];
        }
        float* getMarks()
        {
            return marks;
        }
        void setGrade(char g)
        {
            grade=g;
        }
        char getGrade()
        {
            return grade;
        }
        College getCollegeObject()
        {
            return cObj;
        }
};
int main()  //DO NOT change the 'main' signature
{
    //Fill code here
    return 0;
}