//Constructor With Default Arguments
#include<iostream>
using namespace std;
class Addition
{
    private:
    int a,b;
    public:
    Addition(int x,int y=0)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"\nAddition="<<(a+b);
    }
};
int main()
{
    Addition a1(20);
    a1.display();
    return 0;
}