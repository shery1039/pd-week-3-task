#include <iostream>
using namespace std;

main()
{
    string Movie_name;
    cout << "Enter the name of movie:";
    cin >> Movie_name;
    float adult_Price, Child_Price;
    cout << "Enter the adult ticket price:";
    cin >> adult_Price;
    cout << "Enter the child ticket price:";
    cin >> Child_Price;

    float total1, total2;
    cout << "Enter the number of child tickets sold:";
    cin >> total1;
    cout << "Enter the number of adult tickets sold:";
    cin >> total2;

    float percentage;
    cout << "Enter the percentage you want to charity:";
    cin >> percentage;

    float calculation1 = (adult_Price * total2) + (Child_Price * total1);
    cout << "Total amount generated:"
         << " " << calculation1 << endl;
    float calculation2 = (calculation1 * percentage)/100;
    float calculation3 = calculation1 - calculation2;
    cout << "Donation to charity is"
         << " " << calculation2;
    cout << "Your answer is:"
         << " " << calculation3;
}