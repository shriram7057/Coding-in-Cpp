//To check whether entered alphabet is Vowel or consonant. 
#include<iostream> 
using namespace std;
int  main() 
{ 
    char ch; 
    cout<<"Enter any alphabet:"; 
    cin>>ch; 
    switch(ch) 
    { 
        case 'a':  
        case 'e':  
        case 'i':  
        case 'o':  
        case 'u':  
        case 'A':  
        case 'E':  
        case 'I':  
        case 'O':  
        case 'U': cout<<"\nAlphabet "<<ch<<" is Vowel"; 
                  break; 
        default: cout<<"\nAlphabet "<<ch<<" is consonant"; 
    } 
        return 0;
} 