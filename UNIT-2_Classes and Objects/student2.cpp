//static data member 
#include<iostream> 
using namespace std;
class Student 
{ 
    private: 
        int rollno; 
        char name[10]; 
        float marks; 
        static int college_code; 
    public: 
        void get_stud_info() 
        { 
            cout<<"\nEnter RollNo:"; 
            cin>>rollno; 
            cout<<"\nEnter Name:"; 
            cin>>name; 
            cout<<"\nEnter Marks:"; 
            cin>>marks; 
        } 
        void disp_stud_info() 
        { 
            cout<<"\nStudent Roll NO:"<<rollno; 
            cout<<"\nStudent Name:"<<name; 
            cout<<"\nStudent Marks:"<<marks; 
            cout<<"\nCollege Code:"<<college_code; 
        } 
}; 
int Student::college_code=5959; 
int main() 
{ 
    Student s1,s2,s3; 
    s1.get_stud_info(); 
    s2.get_stud_info(); 
    s3.get_stud_info(); 
 
    s1.disp_stud_info(); 
    s2.disp_stud_info(); 
    s3.disp_stud_info(); 
 
return 0;
} 