//copy constructor
#include<iostream>
using namespace std;
class Code
{
    private:
    int id;
    public:
    Code()
    {
        id=530;
    }
    Code(Code&m)
    {
        id=m.id;
    }
    void display()
    {
        cout<<"\nValue of id="<<id;
    }
};
int main()
{
    Code c1;
    Code c2(c1);
    c1.display();
    c2.display();
    return 0;
}