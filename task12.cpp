#include<iostream>
using namespace std;



main()
{
    int paint;
    cout<<"Enter number of square meters you want to paint:";
    cin>>paint;
    int width;
    cout<<"Enter the width of wall:";
    cin>>width;
    int heights;
    cout<<"Enter the height of wall:";
    cin>>heights;

    int calculation=width*heights;
    int cal=paint/calculation;

    cout<<"Number of wlls you can paint:"<<" "<<cal;
}