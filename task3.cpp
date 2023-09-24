#include<iostream>
using namespace std;


main()
{
    int Intial_velocity;
    int accelration;
    cout<<"Enter the initial velocity:";
    cin>>Intial_velocity;
    cout<<"Enter final velocity:";
    cin>>accelration;
    int time;
    cout<<"Enter time:";
    cin>>time;

    int calculation=(accelration*time)+Intial_velocity;
    cout<<"Your result is:"<<calculation;
}