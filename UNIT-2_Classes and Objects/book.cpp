#include <iostream>
using namespace std;
class Book
{
    private :
    int book_id;
    char book_name[10];
    float prise;
    public:
    void get_data()
    {
        cout<<"\nEnter book_id";
        cin>>book_id;
        cout<<"\nEnter book Name";
        cin>>book_name;
        cout<<"\nEnter book prise ";
        cin>>prise;
    }
    void disp_data()
    {
        cout<<"***Book Information***";
        cout<<"\book_id="<<book_id;
        cout<<"\nname="<<book_name;
        cout<<"\nprise="<<prise;

    }
};
int main()
{
    Book b1;
    b1.get_data();
    b1.disp_data();
    return 0;
}