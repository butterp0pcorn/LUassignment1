// Write a program in C++ to Find Largest Number Among Three Numbers.
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"Enter the third number: "<<endl;
    cin>>c;
    if(a>b && a>c)
        cout<<endl<<"----- "<<a<<" is the largest value. Which was the first number you had entered -----"<<endl<<endl;
    else if(b>a && b>c)
        cout<<endl<<"----- "<<b<<" is the largest value. Which was the second number you had entered -----"<<endl<<endl;
    else
        cout<<endl<<"----- "<<c<<" is the largest value. Which was the third number you had entered -----"<<endl<<endl; 
    return 0;
}