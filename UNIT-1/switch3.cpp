//switch case 
#include<iostream> 
using namespace std;
int main() 
{ 
    int m; 
    cout<<"Enter number:"; 
    cin>>m; 
    switch(m) 
    { 
    case 1: cout<<"\nYou have entered ONE"; 
    break; 
    case 2: cout<<"\nYou have entered TWO"; 
    break; 
    case 3: cout<<"\nYou have entered THREE"; 
    break; 
    default: cout<<"Please enter value between 1 to 3"; 
    } 
    return 0;
} 