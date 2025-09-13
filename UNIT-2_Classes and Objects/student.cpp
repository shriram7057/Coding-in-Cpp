#include <iostream>
using namespace std;
class Student
{
    private :
    int rollno;
    char name[10];
    float marks;
    public:
    void get_data()
    {
        cout<<"\nEnter student rollno";
        cin>>rollno;
        cout<<"\nEnter student Name";
        cin>>name;
        cout<<"\nEnter student marks";
        cin>>marks;
    }
    void disp_data()
    {
        cout<<"***Student Information***";
        cout<<"\nRollNo="<<rollno;
        cout<<"\nname="<<name;
        cout<<"\nmarks="<<marks;

    }
};
int main()
{
    Student s1;
    s1.get_data();
    s1.disp_data();
    return 0;
}