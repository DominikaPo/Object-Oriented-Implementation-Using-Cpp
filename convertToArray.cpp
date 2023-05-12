/*Write a C++ program to find the character for a given index position in the string.*/

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{

    
    string name = "";
    int index;
    int len;
    
    cout<<"Enter the name: ";
    cin>>name;
    
    cout<<"Enter the index: ";
    cin>>index;
    
    char arr[name.length() + 1];
    
    strcpy(arr, name.c_str());
    
    len = name.length();
    
    if (index < len) {
       cout<<"The character is "<<arr[index];  
    }
    else {
        cout<<"error";
    }
    
    return 0;
}
