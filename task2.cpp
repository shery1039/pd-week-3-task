#include<iostream>
using namespace std;



main()
{
int minutes;
cout<<"Number of minutes:"<<endl;
cin>>minutes;
int seconds;
cout<<"Frames per second"<<endl;
cin>>seconds;

int total=minutes*seconds*60;
cout<<"Your answer is"<<" "<<total;
}