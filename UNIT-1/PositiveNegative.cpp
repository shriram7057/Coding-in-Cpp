#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"\nEnter Number";
    cin>>no;
    if(no!=0)
    {
        if(no>0)
        {
            cout<<"Number is positive";
        }
        else
        {
            cout<<"Number is Negative";
        }
    }
    else
    {
        cout<<"Zero is either positive nor negative!!!";
    }
    return 0;
}