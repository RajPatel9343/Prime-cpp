#include <iostream>
using namespace std;

int main()
{
    float side1, side2, side3;

    cout << "enter the sides of triangle";
    cin >> side1;
    cin >> side2;
    cin >> side3;

    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2))
    {
        cout<<"your triangle is valid";
    }

    else
    {
        cout << "your triangle is not valid";
    }
    return 0;
}