//Destructor Program
#include<iostream>
using namespace std;
class Code
{
    private:
    int id;
    Code()//constructor
    {
        cout<<"Object Created SUccessfully!!";
    } 
    ~Code()//Destructor
    {
        cout<<"Object Destroid Successfully!!";
    }
};
int main()
{
    Code c1;
    //c.Code();
    return 0;
}