#include <iostream>
using namespace std;

class Mobile{
    
    private:    
        string mobileBrand;
        string mobileModelName;
        double mobilePrice;
        
    public:    
  
        string getMobileBrand() {
            return mobileBrand;
        }
        string getMobileModelName() {
            return mobileModelName;
        }
        double getMobilePrice() {
            return mobilePrice;
        }
        
        void setMobileBrand(string brand) {
            mobileBrand = brand;
        }
        void setMobileModelName(string model) {
            mobileModelName = model;
        }
        void setMobilePrice(double price) {
            mobilePrice = price;
        }
};

int main()
{
        string brand,model;
        double price;
        cout<<"Enter the mobile brand:"<<endl;
        cin>>brand;
        cout<<"Enter the mobile model name:"<<endl;
        cin>>model;
        cout<<"Enter the mobile price:"<<endl;
        cin>>price;
        
  
        Mobile e1;
        e1.setMobileBrand(brand);
        e1.setMobileModelName(model);
        e1.setMobilePrice(price);
        
        cout<<"Mobile Details"<<endl;
        cout<<"Mobile Brand: "<<e1.getMobileBrand()<<endl;
        cout<<"Mobile Model Name: "<<e1.getMobileModelName()<<endl;
        cout<<"Mobile Price: "<<e1.getMobilePrice()<<endl;
        return 0;
}
