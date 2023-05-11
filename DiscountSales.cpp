#include <iostream>
using namespace std;
 
class Product
{
  protected:
    int markedPrice=1000;
    int discount=40;
    public:
        void setMarkedPrice(int mPrice)
        {
            markedPrice=mPrice;
        }
        void setDiscount(int dis)
        {
            discount=dis;
        }
        int getMarkedPrice()
        {
            return markedPrice;
        }
        int getDiscount()
        {
            return discount;
        }
};
 
class Dress : public Product
{
  public:
    char findSize(int chestSize){
          //Implement your code
        char size;
        if (chestSize >= 20 && chestSize <=30) {
            size = 'S';
        }
        else if (chestSize >=31 && chestSize <= 40) {
            size = 'M';
        }
        else if (chestSize > 40) {
            size = 'L';
        }
        return size;
    }

};
 class Shirt : public Dress
 {
  public:
     int calculatePrice(char chestSize){
       //Implement your code
       int price = getMarkedPrice() - ((getMarkedPrice() * getDiscount()) / 100);
        if (chestSize == 'M') {
            price += 500;
        }
        else if (chestSize == 'L') {
            price += 1000;
        }
        return price;
     }
};

// main function
int main()
{
    int size;
   cout<<"Enter the chest size : ";
   cin>>size;
   //fill the code here
   Shirt s;
   char a = s.findSize(size);
   int b = s.calculatePrice(a);
   
    cout<<"Dress Size : "<<a<<endl;
    cout<<"Price (in $) : "<<b<<endl;
    return 0;
}