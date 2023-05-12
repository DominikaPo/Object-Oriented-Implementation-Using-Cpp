/*During a Christmas season Santa made the children happy by squaring gifts that the children gave him and presented those gifts back to the children. The children were very excited with the activity of Santa. Stephy wishes to do the same thing to her friends. Help her by writing a program to perform a square operation.*/


#include <iostream>
using namespace std;

int findSquare(int num){
  
    
    if (num > 0) {
        return num*num;
    }
    else { 
        return -1;
    }
    return 0;
}

int main() 
{
    int number, x;
    
    cin>>number;

    x = findSquare(number);
    cout<<x;
    
    return 0;
}
