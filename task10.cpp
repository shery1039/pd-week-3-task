#include<iostream>
using namespace std;


main()
{
    float num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15;
    cout<<"Enter number 1:";
    cin>>num1;
    cout<<"Enter number 2:";
    cin>>num2;
    cout<<"Enter number 3:";
    cin>>num3;
    cout<<"Enter number 4:";
    cin>>num4;
    cout<<"Enter number 5:";
    cin>>num5;
    cout<<"Enter number 6:";
    cin>>num6;
    cout<<"Enter number 7:";
    cin>>num7;
    cout<<"Enter number 8:";
    cin>>num8;
    cout<<"Enter number 9:";
    cin>>num9;
    cout<<"Enter number 10:";
    cin>>num10;
    cout<<"Enter number 11:";
    cin>>num11;
    cout<<"Enter number 12:";
    cin>>num12;
    cout<<"Enter number 13:";
    cin>>num13;
    cout<<"Enter number 14:";
    cin>>num14;
    cout<<"Enter number 15:";
    cin>>num15;
    
    float calculate=num1+num2+num3+num4+num5;
    float calculate1=num6*num7*num8*num9*num10;
    float calculate2=num11-num12-num13-num14-num15;

    float result1=calculate+calculate1;
    float result2=result1-calculate2;
    cout<<"Your answer is :"<<result2;
}