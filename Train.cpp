#include <iostream>
using namespace std;

class Train //Add required code
{
    private:
        long passengerPhone;
        string passengerName;
        char gender;
        int age;
        double ticketPrice;
    public:
    //include required getter and setter method
        long getPassengerPhone() {
            return passengerPhone;
        }
        string getPassengerName()  {
            return passengerName;
        }
        char getGender() {
            return gender;
        }
        int getAge() {
            return age;
        }
        double getTicketPrice() {
            return ticketPrice;
        }
        void setPassengerPhone(long pPhone) {
            passengerPhone = pPhone;
        }
        void setPassengerName(string pName) {
            passengerName = pName;
        }
        void setGender(char pGender) {
            gender = pGender;
        }
        void setAge(int pAge) {
            age = pAge;
        }
        void setTicketPrice(double tPrice) {
            ticketPrice = tPrice;
        }
        double calculateAmount() {
            double total;
            
            if (age >= 0 && age < 16) {
               total = ticketPrice - ((ticketPrice * 50) / 100);
            }
            else if (age >= 16 && age < 60) {
                switch(gender) {
                    case 'F':
                        total = ticketPrice - ((ticketPrice * 10) / 100);
                        break;
                    default:
                        total = ticketPrice;
                }
            }
            else if (age >= 60) {
                total = ticketPrice - ((ticketPrice * 25) / 100);
            }
            return total;
        }
};

int main(){   //DO NOT change the 'main' signature
    //Fill code here
    long phone;
    string name;
    char gender;
    int age;
    double ticketPrice;
    cout<<"Enter the Passenger phone no : ";
    cin>>phone;
    cout<<"Enter the Passenger name : ";
    cin>>name;
    cout<<"Enter the Passenger Age : ";
    cin>>age;
    cout<<"Enter the Gender(M/F): ";
    cin>>gender;
    cout<<"Enter the Ticket Price: ";
    cin>>ticketPrice;
    //fill the code here
    Train t1;
    t1.setAge(age);
    t1.setGender(gender);
    t1.setTicketPrice(ticketPrice);
    t1.calculateAmount();
    cout<<"Total Amount(In dollars): "<<t1.calculateAmount()<<endl;
    return 0;
}
