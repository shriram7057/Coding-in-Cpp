//Destructor Program-2
#include<iostream>
using namespace std;
class Code
{
      private: 
        int id; 
    public: 
        Code()  //Constructor  
        { 
            cout<<"\nObject created successfully"; 
        } 
        ~Code() //Destructor  
        { 
            cout<<"\nObject destroyed successfully"; 
        } 
};
int main() 
{ 
    clrscr(); 
    Code c1; 
    Code c2; 
    { 
        Code c3; 
    } 
    Code c4; 
    return 0; 
}