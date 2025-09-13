#include<iostream> 
//#include<conio.h> 
int main() 
{ 
    float Basic_Salary,TA,DA,HRA,Gross_Salary; 
    cout<<"Enter Basic Salary:"; 
    cin>>Basic_Salary; 
    TA=(Basic_Salary*5)/100; 
    DA=(Basic_Salary*10)/100; 
    HRA=(Basic_Salary*15)/100; 
    Gross_Salary=(Basic_Salary+TA+DA+HRA); 

    cout<<"\n***************************************************"; 
    cout<<"\n***********VJTECH SOFTWARE PVT LTD*****************"; 
    cout<<"\n***************************************************"; 

    cout<<"\nEMPLOYEE NAME: Bjarne Stroustrup"; 
    cout<<"\nEMPLOYEE ID  : 31350"; 
    cout<<"\nBasic Salary : "<<Basic_Salary; 
    cout<<"\nTA           : "<<TA; 
    cout<<"\nDA           : "<<DA; 
    cout<<"\nHRA          : "<<HRA; 

    cout<<"\n======================================="; 
    cout<<"\nGROSS SALARY : "<<Gross_Salary; 
   return 0; 
}