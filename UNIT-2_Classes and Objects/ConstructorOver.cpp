//Constructor Overloading
#include <iostream>
using namespace std;
class Code
{
    private:
    int id;
    public:
    Code()//Default Constructor
    {
        id=20;
    }
    Code(int x)//Parimeterized Constructor
    {
        id=x;
    }
    Code (Code & m)
    {
        id=m.id;
    }
    void display()
    {
        cout<<"Value of id="<<id;
    }
};
int main()
{
    Code c1;
    Code c2(200); 
    Code c3(c2); 
    cout<<"\nObject c1:"; 
    c1.display(); 
    cout<<"\nObject c2="; 
    c2.display(); 
    cout<<"\nObject c3:"; 
    c3.display(); 
    return 0;
}