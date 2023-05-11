#include <iostream>
using namespace std;
 
class RuralManagement {
  protected:
  int acceptedSchemes;
  
  public:
    int getAcceptedSchemes(){
        return acceptedSchemes;
    }
    void setAcceptedSchemes(int noOfSchemes){
        this->acceptedSchemes=noOfSchemes;
    }
    void calcNoOfSchemes(int noOfSchemes,int noOfSchemesRejected){
      //Implement your code here
      acceptedSchemes = noOfSchemes - noOfSchemesRejected; 

   }
    
};
 
class RevenueManagement : public RuralManagement
{
  protected:
    double totalRevenue;
  public:
    double getTotalRevenue(){
        return totalRevenue;
    }
    void setTotalRevenue(double revenue){
        this->totalRevenue=revenue;
    }
    void calcTotalRevenue(int noOfTerritoriess,double revenue){
       //Implement your code here
       totalRevenue = noOfTerritoriess*revenue;
   }
};
class SchemeManagement : public RevenueManagement
{
  public:
   double allotMoneyPerScheme(){
      //Implement your code here
      return totalRevenue/acceptedSchemes;
   }
};

// main function
int main()
{ 
    int rejected,schemes,territories;
   double revenue;
   cout<<"Enter number of territories :"<<endl;
   cin>>territories;
   cout<<"Enter revenue :"<<endl;
   cin>>revenue;
   cout<<"Enter total number of schemes :"<<endl;
   cin>>schemes;
   cout<<"Enter number of schemes rejected :"<<endl;
   cin>>rejected;
  //Implement your code here
  
  SchemeManagement s;
  s.setAcceptedSchemes(schemes);
  s.setTotalRevenue(revenue);
  s.calcNoOfSchemes(schemes, rejected);
  s.calcTotalRevenue(territories, revenue);
  int r = s.allotMoneyPerScheme();
  
  cout<<"Money allotted per scheme: "<<r<<endl;
  return 0;
}