//static member function
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
        void disp_no() 
        { 
            cout<<"\nValue of no="<<no; 
        } 
        static void disp_count() 
        { 
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
    x1.disp_no(); 
    Item::disp_count(); //calling static function 
    x2.disp_no(); 
    Item::disp_count(); //calling static function 
    x3.disp_no(); 
    Item::disp_count(); //calling static function 
    return 0; 
} 