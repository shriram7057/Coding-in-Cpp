//To check whether entered alphabet is Vowel or consonant. 
#include<iostream>
using namespace std;
int main()
{
    char ch;
  cout<<"Enter any alphabet:";     
  cin>>ch;
    switch (ch)
    {
        case 'a': cout<<"\nAlphabet a is Vowel"; 
                  break; 
        case 'e': cout<<"\nAlphabet e is Vowel"; 
                  break; 
        case 'i': cout<<"\nAlphabet i is Vowel"; 
                  break; 
        case 'o': cout<<"\nAlphabet o is Vowel"; 
                  break; 
        case 'u': cout<<"\nAlphabet u is Vowel"; 
                  break; 
        case 'A': cout<<"\nAlphabet A is Vowel"; 
                  break; 
        case 'E': cout<<"\nAlphabet E is Vowel"; 
                  break; 
        case 'I': cout<<"\nAlphabet I is Vowel"; 
                  break; 
        case 'O': cout<<"\nAlphabet O is Vowel"; 
                  break; 
        case 'U': cout<<"\nAlphabet U is Vowel"; 
                  break; 
        default: cout<<"\nAlphabet "<<ch<<" is consonant";
    }
    return 0;
}