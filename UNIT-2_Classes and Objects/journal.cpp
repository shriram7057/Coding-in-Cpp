//Array of Objects
#include<iostream>
using namespace std;
class journal
{
    private:
    char journal_name[10];
    int pages_no;
    public:
    void get_journal_info()
    {
        cout<<"\nEnter journal name";
        cin>>journal_name;
        cout<<"\nEnter journal pages no";
        cin>>pages_no;
    }
    void disp_journal_info()
    {
        cout<<"\nEnter journal name"<<journal_name;
        cout<<"\nEnter journal pages No"<<pages_no;
    }
};
int main()
{
    journal j[3];
    int i;
    for(i=1;i<=3;i++)
    {
        j[i].get_journal_info();
    }
    for(i=1;i<=3;i++)
    {
        j[i].disp_journal_info();
    }
    return 0;
}