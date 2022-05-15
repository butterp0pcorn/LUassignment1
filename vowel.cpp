// Write a Program in C++ to Check Whether a character is Vowel or Consonant.
#include<iostream>
using namespace std;
int main()
{
    char alpha;
    cout<<"Please enter the alphabet to dertermine the if its a vowel or consonent: "<<endl;
    cin>>alpha;
    if (alpha=='a'||alpha =='e'||alpha =='i'|| alpha =='o'||alpha =='u')
        cout<<"It is a vowel."<<endl;
    else if(!isalpha(alpha))
        cout<<"Please enter an alphabet only."<<endl;
    else 
        cout<<"It is a consonant."<<endl;
    return 0;
}