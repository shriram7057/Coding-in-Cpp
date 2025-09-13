/*Write c++ program to define class fruit having data memebers fruit name ,  
fruit type and fruit price*/ 
#include<iostream> 
using namespace std;
class Fruit 
{ 
    private: 
        char fruit_name[10]; 
        char fruit_type[10]; 
        float fruit_price; 
    public: 
        void get_fruit_details(); 
        void disp_fruit_details(); 
}; 
void Fruit::get_fruit_details() 
{ 
    cout<<"\nEnter Fruit Name:"; 
    cin>>fruit_name; 
    cout<<"\nEnter Fruit Type:"; 
    cin>>fruit_type; 
    cout<<"\nEnter Fruit Price:"; 
    cin>>fruit_price; 
} 
void Fruit::disp_fruit_details() 
{ 
    cout<<"\nFruit Name:"<<fruit_name; 
    cout<<"\nFruit Type:"<<fruit_type; 
    cout<<"\nFruit Price:"<<fruit_price; 
} 
int main() 
{ 
    Fruit f1; 
    f1.get_fruit_details(); 
    f1.disp_fruit_details(); 
    return 0;
} 