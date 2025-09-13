#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<"\n"<<i;
        if(i==5)
        {
            continue;
        }
    }
    return 0;
}