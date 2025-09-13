#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"\nEnter Your Five Array Elements";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Arry Elements";
    for(i=0;i<5;i++)
    {
        cout<<"\t"<<a[i];
    }
    return 0;
}