#include <iostream>
using namespace std;
 
class Election 
{
  protected:
   long int totalPeople;
   long int noOfWomen;
   long int noOfMen;
  public:
  
   void setTotalPeople(long int totPeople)
   {
       this->totalPeople=totPeople;
   }
    void setNoOfWomen(long int womenCount)
   {
       this->noOfWomen=womenCount;
   }
    void setNoOfMen(long int menCount)
   {
       this->noOfMen=menCount;
   }
   long int getTotalPeople()
   {
       return this->totalPeople;
   }
long int getNoOfWomen()
   {
       return this->noOfWomen;
   }
    long int getNoOfMen()
   {
       return this->noOfMen;
   }
    
};
 
class GeneralElection : public Election
{
  public:
  double votePer, womenVotePer, menVotePer;
   double calcVotePercentage(int partyA , int partyB){
       //Implement your code
        votePer = ( (partyA+partyB) *100 )/totalPeople;
       return votePer;
   }
   double calcWomenVotePercentage(int womenVotes){
        //Implement your code
        womenVotePer = (womenVotes*100)/noOfWomen;
        return womenVotePer;
   }
    double calcMenVotePercentage(int menVotes){
        //Implement your code
        menVotePer = (menVotes*100)/noOfMen;
        return menVotePer;
   }
};


// main function
int main()
{  
    //Implement your code
    long int totalPeople,noOfWomen,noOfMen;
    int partyA,partyB,womenVotes,menVotes;
    double votePer,womenVotePer,menVotePer;
   cout<<"Enter the number of People:";
   cin>>totalPeople;
   cout<<"Enter the number of women:";
   cin>>noOfWomen;
   cout<<"Enter the number of men:";
   cin>>noOfMen;
   cout<<"Enter the total votes by Party A:";
   cin>>partyA;
   cout<<"Enter the total votes by Party B:";
   cin>>partyB;
   cout<<"Enter the number of women votes:";
   cin>>womenVotes;
   cout<<"Enter the number of men votes:";
   cin>>menVotes;
   //fill the code here
   GeneralElection g;
    g.setTotalPeople(totalPeople);
    g.setNoOfWomen(noOfWomen);
    g.setNoOfMen(noOfMen);
    
   cout<<"Vote Percentage: "<<g.calcVotePercentage(partyA, partyB)<<endl;
   cout<<"Women Vote Percentage: "<<g.calcWomenVotePercentage(womenVotes)<<endl;
   cout<<"Men Vote Percentage: "<<g.calcMenVotePercentage(menVotes)<<endl;
   return 0;
}