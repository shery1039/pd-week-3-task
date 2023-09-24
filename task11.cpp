#include<iostream>
using namespace std;



main()
{
    int age;
    cout<<"Enter the persons age:";
    cin>>age;
    int times;
    cout<<"Enter times he moved:";
    cin>>times;
    int cal=(age)/(1+times);
    cout<<"Average numbr of years he lived in each house"<<" "<<cal;
}