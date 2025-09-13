#include<iostream> 
using namespace std;
int  main() 
{ 
    int a,b,c; 
    cout<<"Enter three numbers:"; 
    cin>>a>>b>>c; 
    if(a>b) 
    { 
        if(a>c) 
        { 
            cout<<"\nGreatest number="<<a; 
        } 
        else 
        { 
            cout<<"\nGreatest number="<<c; 
        } 
    } 
    else 
    { 
        if(b>c) 
        { 
            cout<<"\nGreatest number="<<b; 
        } 
        else 
        { 
            cout<<"\nGreatest number="<<c; 
        } 
    } 
    return 0;
}