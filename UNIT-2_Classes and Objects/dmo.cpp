//How to access data members outside the class
#include<iostream>
using namespace std;
class Addition
{
    public:
    int a;
    int b;
    void disp_data()
    {
        int c;
        c=a+b;
        cout<<"\nAddition="<<c;
    }
};
int main()
{
    Addition a1;
    a1.a=100;
    a1.b=200;
    a1.disp_data();
    return 0;
}