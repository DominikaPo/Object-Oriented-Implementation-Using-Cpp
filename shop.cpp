#include <iostream>
using namespace std;

class Shop {

    private:
        string itemName;
        int itemQuantity;
        double itemPrice;

    public:
         //Getters and setters for above variables.
        string getItemName() {
            return itemName;
        }
        int getItemQuantity() {
            return itemQuantity;
        }
        double getItemPrice() {
            return itemPrice;
        }
        
        void setItemName(string name) {
            itemName = name;
        }
        void setItemQuantity(int quantity) {
            itemQuantity = quantity;
        }
        void setItemPrice(double price) {
            itemPrice = price;
        }
   
};

int main()//DO NOT change the 'main' signature
{
    //Input statements are provided as a part of code skeleton 
    string name;
    int quantity;
    double price;
    cout<<"Enter the item name:"<<endl;
    cin>>name;
    cout<<"Enter the item quantity:"<<endl;
    cin>>quantity;
    cout<<"Enter the item price:"<<endl;
    cin>>price;
    
    //Fill the code here 
    Shop e1;
    e1.setItemName(name);
    e1.setItemQuantity(quantity);
    e1.setItemPrice(price);
    
    cout<<"Item Name: "<<e1.getItemName()<<endl;
    cout<<"Item Quantity: "<<e1.getItemQuantity()<<endl;
    cout<<"Item Price: "<<e1.getItemPrice()<<endl;
    return 0;
}
