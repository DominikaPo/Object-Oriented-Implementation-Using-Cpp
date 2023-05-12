#include <iostream>
using namespace std;
 
class Examination 
{
 protected:
    int passMark=100;
    public:
        void setPassMark(int pMark)
        {
            passMark=pMark;
        }
        int getPassMark()
        {
            return passMark;
        }
    void displayResult(int gradePoint)
    {
      
        if (gradePoint > passMark) {
            cout<<"Pass"<<endl;
        }
        else
            cout<<"Fail"<<endl;
    }
};
 
class ScienceExam : public Examination
{
  public:

    int  calculateGradePoints(int mark){
   
      return 2*mark;
    }
};

 class MathsExam : public Examination
 {
  public:
    int gradePoint;
    int  calculateGradePoints(int mark){
        //Implement your code 
        return 4*mark;
    }
};


int main()
{  
    int smark,mathmark;
    cout<<"Enter the mark in Science:";
    cin>>smark;
    cout<<"Enter the mark in Maths:";
    cin>>mathmark;

    
    ScienceExam s;
    s.setPassMark(100);

    cout<<"Science: "<<endl;
    cout<<"Result: ";
    s.displayResult(s.calculateGradePoints(smark));
    cout<<"Gradepoints: "<<s.calculateGradePoints(smark)<<endl;
   
    MathsExam m;
    m.setPassMark(100);

    cout<<"Maths:"<<endl;
    cout<<"Result: ";
    m.displayResult(s.calculateGradePoints(mathmark));
    cout<<"Gradepoints: "<<m.calculateGradePoints(mathmark)<<endl;
    return 0;
}
