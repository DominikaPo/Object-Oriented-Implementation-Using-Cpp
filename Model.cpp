#include <iostream>
using namespace std;
 
class Heroine 
{
   protected:
        double earningsPerDay;
  public:
    void setEarningsPerDay(double earnings)
    {
        earningsPerDay=earnings;
    }
    double getEarningsPerDay()
    {
        return earningsPerDay;
    }
};
 
class MovieHeroine : public Heroine
{
  private:
    int daysRun;
  public:
    int totalEarnings;
    int noOfDays;
    
    void setDaysRun(int noOfDays) {
        daysRun = noOfDays;
    }
    int getDaysRun() {
        return daysRun;
    }
    
   long calcEarnings(int noOfDays){
       //Implement your code
       
        long totalEarnings = earningsPerDay * noOfDays;

        if (daysRun > 100) {
            totalEarnings += totalEarnings * 0.1;
        } else if (daysRun > 50 && daysRun <= 100) {
            totalEarnings += totalEarnings * 0.05;
        }

        return totalEarnings;
    
   }
};

class AdvertisementModel : public Heroine
{
  private:
    int rating;
  public:
    int totalEarnings, rat;
    
    void setRating(int rat) {
        rating = rat;
    }
    int getRating() {
        return rating;
    }
    
   long calcEarnings(int noOfDays){
      //Implement your code
      if (rating > 5) {
        int extraAmount = 10000;
        totalEarnings=(earningsPerDay * noOfDays)+extraAmount; 
      }
      else if (rating > 2 && rating < 5) {
        int extraAmount = 5000;
        totalEarnings=(earningsPerDay * noOfDays)+extraAmount; 
      }
      else if (rating < 2) {
        totalEarnings =  earningsPerDay * noOfDays;
      }
        return totalEarnings;
   }
};
// main function
int main()
{  
    int movie,ad,rating,daysRun;
    double earningsPerDay;
   
    
   
    cout<<"Enter the earnings per day :"<<endl;
    cin>>earningsPerDay;
   
    cout<<"Enter the number of days for movie :"<<endl;
    cin>>movie;
    cout<<"Enter the number of days movie run:"<<endl;
    cin>>daysRun;
   //Implement your code
  
    cout<<"Enter the number of days for advertisement  :"<<endl;
    cin>>ad;
    
    cout<<"Enter the Advertisement rating: "<<endl;
    cin>>rating;
    
    MovieHeroine m;
    AdvertisementModel a;
    
    m.setEarningsPerDay(earningsPerDay);
    m.setDaysRun(daysRun);
    long mear = m.calcEarnings(movie);
    
    a.setEarningsPerDay(earningsPerDay);
    a.setRating(rating);
    long aear = a.calcEarnings(ad);
    
    cout<<"Earnings for Movie: "<<mear<<endl;
    cout<<"Earnings for Advertisement: "<<aear<<endl;

   return 0;
}

