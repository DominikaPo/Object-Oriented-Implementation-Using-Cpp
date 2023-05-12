/*Calculate the 'N'th power of the given number.*/


#include <iostream>
using namespace std;


int main() 
{
    
    int number;
    int powerValue;
    int result, i;
    
    cout<<"Enter number: "<<endl;
    cin>>number;
    
    cout<<"Enter power Value: "<<endl;
    cin>>powerValue;
    
    if (powerValue == 0) {
        cout<<"1"<<endl;
    }
    else {
        result = 1;
        for(i=1; i<=powerValue; i++) {
            result = result * number;
        }
        cout<<result<<endl;
    }
    
    return 0;
}
