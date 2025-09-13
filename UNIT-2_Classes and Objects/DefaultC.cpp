//Default Constructor
#include <iostream>
using namespace std;
class DefaultConstructor
{
    private:
    int a,b;
    public:
    DefaultConstructor()
    {
        a=10;
        b=20;
    }
    void display()
    {
        int c;
        c=a+b;
        cout<<"Addition="<<c;
    }
};
int main()
{
    DefaultConstructor d1;
    d1.display();
    return 0;
}