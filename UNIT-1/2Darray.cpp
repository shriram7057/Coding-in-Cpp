#include<iostream> 
using namespace std;
int main() 
{    
    int a[3][3],i,j; 
    cout<<"\nEnter 3*3 Matrix Elements:"; 
    for(i=0;i<3;i++) 
    {       
        for(j=0;j<3;j++) 
        {        
            cin>>a[i][j]; 
        }         
    } 
    cout<<"\nYour 3*3 Matrix Elements:"; 
    for(i=0;i<3;i++) 
    {       
        cout<<"\n"; 
        for(j=0;j<3;j++) 
        {       
            cout<<a[i][j]<<"\t"; 
        }         
    } 
    return 0;
}