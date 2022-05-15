//Perform simple calculations.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n1, n2, add, sub, mul, div;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<endl;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<endl;
    add=n1+n2;
    sub=n1-n2;
    div=n1/n2;
    mul=n1*n2;
    cout<<endl<<"Number 1 plus Number 2 = "<<add;
    cout<<endl<<"Number 1 minus Number 2 = "<<sub;
    cout<<endl<<"Number 1 divided by Number 2 = "<<div;
    cout<<endl<<"Number 1 multiplied by Number 2 = "<<mul;
    return 0;
}
