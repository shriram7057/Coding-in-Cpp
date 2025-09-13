//How to access private member function 
#include<iostream>
using namespace std;
class Addition
{
    private:
    int a,b;
    void get_data()
    {
        a=100;
        b=200;
    }
    public:
    void disp_data()
    {
        get_data();
        int c;
        c=a+b;
        cout<<"Addition="<<c;
    }
};
int main()
{
    Addition a1;
    a1.disp_data();
    return 0;
}