#include<iostream>
using namespace std;


main()
{
    int number;
    cout<<"Enter your desired number:";
    cin>>number;

    int number1=number%10;
    // int number2=number1;
    int number3=number/10;
    int number4=number3%10;
    // int number5=number4;
    int number7=number4%10;
    int number8=number7/10;
    

    int total=number1+number4+number7+number8;
    cout<<"Total is "<<total<<endl;
    // cout<<"Total is "<<number1<<endl;
    // cout<<"Total is "<<number2<<endl;
    // cout<<"Total is "<<number3<<endl;
    // cout<<"Total is "<<number4<<endl;


}