#include<iostream>
using namespace std;


main()
{
    int size,cost,area;
    cout<<"Enter the size of fertilizer bag in pounds:";
    cin>>size;
    cout<<"Enter the cost of bag:";
    cin>>cost;
    cout<<"Enter the area in square foot that can be covered by the bag:";
    cin>>area;
    
    int cal1=cost/size;
    cout<<"Cost of fertilizer per pound is:"<<" "<<cal1<<endl;

    int cal2=cost/area;
    cout<<"Cost of fertilizer per square foot is:"<<" "<<cal2<<endl;


    

}