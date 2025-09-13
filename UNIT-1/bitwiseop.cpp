#include<iostream>
using namespace std;
int main()
{
    int a;
    a=11&13;
    cout<<"\nBitwise AND="<<a;
    a=11|13;
    cout<<"\nBitwise OR="<<a;
    a=11^13;
    cout<<"\nBitwise EXOR="<<a;
    return 0;
}