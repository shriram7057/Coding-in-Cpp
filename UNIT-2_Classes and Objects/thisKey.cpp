//this keyword  
#include<iostream> 
using namespace std;
class Addition 
{ 
    private: 
        int a,b; 
    public: 
        void getdata() 
        { 
            this->a=100; 
            this->b=200; 
        } 
        void display() 
        { 
            int c; 
            c=this->a+this->b; 
            cout<<"\nAddition="<<c; 
        } 
}; 
int main() 
{ 
    Addition a1,a2; 
    a1.getdata(); 
    a1.display(); 
    return 0; 
}