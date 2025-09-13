//Friend Function Program-2
#include <iostream>
using namespace std;
class Distance
{
    private:
    int z;
    public:
    void get_data()
    {
        cout<<"\nEnter Distance";
        cin>>z;
    }
    friend void Calc_Distance(Distance m,Distance n)
    {
        int p;
        p=(m.z+n.z);
        cout<<"Sum of Distance="<<p;
    }
};
int main()
{
    Distance d1,d2;
    d1.get_data();
    d2.get_data();
    Calc_Distance(d1,d2);
    return 0;
}