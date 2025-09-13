#include <iostream>
using namespace std;
class Employee
{
    private:
    int id;
    char name[10];
    float salary;
    public:
    void get_Emp_info()
    {
        cout<<"\nEnter Employee id";
        cin>>id;
        cout<<"\nEnter Employee name";
        cin>>name;
        cout<<"\nEnter Employee salary";
        cin>>salary;
    }
    void disp_Emp_info()
{
        cout<<"\n Employee id"<<id;
        cout<<"\n Employee name"<<name;
        cout<<"\n Employee salary"<<salary;  
}
};
int main()
{
    Employee e1;
    e1.get_Emp_info();
    e1.disp_Emp_info();
    return 0;
}