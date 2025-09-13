//paremeterized Constructor
#include<iostream>
using namespace std;
class Addition
{
    private:
    int a,b;
    public :
    Addition(int x,int y)//paremeterized Constructor!!
    {
       a=x;
       b=y;
    }
    void display()
    {
        cout<<"Addition="<<(a+b);
    }
};
int main()
{
    Addition a1(100,300);
    a1.display();
    return 0 ;
}