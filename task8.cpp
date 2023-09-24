#include<iostream>
using namespace std;


main()
{
    float vegetable,fruit,vegetable_Kg,fruit_Kg;
    cout<<"Enter vegetable price per kilogram:";
    cin>>vegetable;
    cout<<"Enter fruit price per kilogram:";
    cin>>fruit;
    cout<<"Enter total kilograms of vegetable:";
    cin>>vegetable_Kg;
    cout<<"Enter total kilograms of fruit:";
    cin>>fruit_Kg;

    float calculation=(vegetable*vegetable_Kg)+(fruit*fruit_Kg);
    float cal2=calculation/1.94;
    cout<<"Total earning in rupees:"<<" "<<cal2;
}