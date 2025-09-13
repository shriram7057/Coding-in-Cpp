//Find smallest number among given three nos 
#include<iostream> 
using namespace std;
int  main() 
{ 
    int a,b,c; 
    cout<<"Enter three numbers:"; 
    cin>>a>>b>>c; 
    if(a<b) 
    { 
        if(a<c) 
        { 
            cout<<"\nSmallest number="<<a; 
        } 
        else 
        { 
            cout<<"\nSmallest number="<<c; 
        } 
    } 
    else 
    { 
        if(b<c) 
        { 
            cout<<"\nSmallest number="<<b; 
        } 
        else 
        { 
            cout<<"\nSmallest number="<<c; 
        } 
    } 
        return 0;
} 