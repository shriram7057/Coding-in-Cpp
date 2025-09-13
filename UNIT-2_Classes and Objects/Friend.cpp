//Friend Function Program-1
#include<iostream> 
using namespace std;
class  Sample 
{ 
    private: 
        int a,b; 
    public: 
        void getdata() 
        { 
            a=100; 
            b=200; 
        } 
        friend void mean(Sample m); 
}; 
     void mean(Sample m) 
{ 
    cout<<"\nMean Value="<<(m.a+m.b)/2; 
} 
int main() 
{ 
    Sample s1; 
    s1.getdata(); 
    mean(s1); 
    return 0;
}