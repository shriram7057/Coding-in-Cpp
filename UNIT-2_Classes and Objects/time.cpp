//Function definition on outside the class 
#include<iostream> 
using namespace std;
class Time
{
  private: 
        int hrs,mins,secs; 
    public: 
        void getTime(); 
        void putTime(); 
}; 
void Time::getTime() 
{ 
    cout<<"\nEnter Hours:"; 
    cin>>hrs; 
    cout<<"\nEnter Minutes:"; 
    cin>>mins; 
    cout<<"\nEnter Seconds:"; 
    cin>>secs; 
} 
void Time::putTime() 
{ 
    cout<<"\nCurrent Time:"<<hrs<<":"<<mins<<":"<<secs; 
} 
int main() 
{ 
    Time t1; 
    t1.getTime(); 
    t1.putTime(); 
    return 0;
} 