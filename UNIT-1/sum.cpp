#include<iostream>
using namespace std;
int main()
{
    int N,i,sum=0;
    cout<<"\nEnter Any Number";
    cin>>N;
    for(i=1;i<N;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of Numbers="<<sum;
    return 0;
}