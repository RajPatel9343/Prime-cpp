#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "enter your weekday number ";
    cin >> day;
    switch (day)
    {

    case 1:
        cout << "monday";
        break;

    case 2:
        cout << "teusday";
        break;

    case 3:
        cout << "wednsday";
        break;

    case 4:
        cout << "trushday";
        break;

    case 5:
        cout << "friday";
        break;

    case 6:
        cout << "setarday";
        break;

    case 7:
        cout << "sunday";
        break;
        
    }
    return 0;
}