#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Student marks";
    cin>>marks;
    if(marks>75)
    {
        cout<<"You got Distintion";
    }
    else if(marks>=75)
    {
        cout<<"You Got first class!";
    }
    else if(marks>=65)
    {
        cout<<"You Got Second class!";
    }
        else if (marks>=45)
    {
        cout<<"You Got Third class!";
    }
    else if(marks>=40)
    {
        cout<<"You Are Pass Only";
    }
    else
    {
        cout<<"You are Fail!!";
    }
    return 0;
        
}