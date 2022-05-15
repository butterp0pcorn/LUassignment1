// Write a program In C++ to accept temperature in Celsius and convert to Fahrenheit?
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{   
    float temp, farh;
    cout<<"Enter the temperature in degree Celcius to convert into degree Farenheit"<<endl;
    cin>>temp;
    farh = (temp*1.8)+32;
    cout<<"The conversion into farenheit is "<<farh<<endl;
    return 0;
}