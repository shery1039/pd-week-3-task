#include<iostream>
using namespace std;


main()
{
    string name;
    cout<<"Enter the name of Person:";
    cin>>name;

    float weight;
    cout<<"Enter the target weight loss in kilograms:";
    cin>>weight;
    float calculation=weight*15;
    cout<<"NO of days need to lose weight will be:"<<" "<<calculation;
}