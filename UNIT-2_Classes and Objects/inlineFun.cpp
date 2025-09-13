/*- If we make a func on as inline, then the compiler replaces the calling func on loca on with the 
defini on of the inline func on at compile me.

 - Any changes made to an inline func on will require the inline func on to be recompiled again. - Because the compiler would need to replace all the code with a new code, otherwise, it will execute 
the old code. 

- The main use of the inline func on in C++ is to save memory space.  - When we call the func on then it takes some me to jump over func on defin on and also It 
consume some memory for func on call. But it will save me and memory due to inline func on. 

Syntax: ------- 
inline return_type func on_name(parameters)   
{ 
     func on code?    
}    */

#include<iostream>
using namespace std;
class Division
{
    private:
    int a,b;
    public :
    inline void get_data()
    {
        a=10;
        b=5;
    }
    inline void disp_data()
    {
        int c;
        c=a/b;
        cout<<"\nDivision="<<c;
    }
};
int main()
{
    Division d1;
    d1.get_data();
    d1.disp_data();
    return 0;
}