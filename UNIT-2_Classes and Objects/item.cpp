//static data memeber program-1
#include<iostream> 
using namespace std;
class Item  
{ 
    private: 
        int no; 
        static int count; 
    public: 
        void getdata(int x) 
        { 
            no=x; 
            count++; 
        } 
 
 
        void putdata() 
        { 
            cout<<"\nValue of no="<<no; 
            cout<<"\nValue of count="<<count; 
        } 
}; 
int Item::count; 
int main() 
{ 
    Item x1,x2,x3; 
    x1.getdata(100); 
    x2.getdata(200); 
    x3.getdata(300); 
    x1.putdata(); 
    x2.putdata(); 
    x3.putdata(); 
return 0;
}