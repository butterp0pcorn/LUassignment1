// Write a program in C++ to Find Quotient and Remainder
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("CLS");
    int dividend, divisor, quotient, remainder;
    cout<<"Enter the dividend:"<<endl;
    cin>>dividend;
    cout<<"Now enter the divisor:"<<endl;
    cin>>divisor;
    quotient = dividend/divisor;
    remainder = dividend%divisor;
    cout<<"The Quotient for the given problem is = "<<quotient<<endl;
    cout<<"The Remainder for the given problem is = "<<remainder<<endl;
    return 0;
}