//************************************************************************
// Name : Talwinder singh saini
// course : CS 155 computer science
// Semester : 1
// Assignment A3
// Date : 8/29/2021
//Description : In that file, write a program that will act like a calculator.
//************************************************************************

#include<iostream>

using namespace std;

int main()
{
    // initialize 7 double varibles
    double a,b,add,sub,pro,div,avg;
    
    // 1 integer variable
    int rem;
    
    cout <<"Enter the value of a and b"<<endl;
    cin >> a >> b;
    
    //addition of a and b
    add = a + b;
    
    //Difference of a and b
    sub = a - b;
    
    //product of a and b
    pro = a * b;
    
    //quotient of a and b
    div = a / b;
    
    //average of a and b
    avg = add / 2;
    
    //To use reminder i redefined a and b varibles as integer variables
    rem = int(a) % int(b);
    
    //Outputs of the oprators
    cout <<"print addition of two values are "<<add<<endl;
    
    cout <<"print difference of two values are "<<sub<<endl;
    
    cout <<"print product of two values are "<<pro<<endl;
    
    cout <<"print quotien of two values are "<<div<<endl;
    
    cout <<"print the value of reminder is "<<rem<<endl;
    
    cout <<"print the average of two values "<<avg<<endl;
    
    
}
