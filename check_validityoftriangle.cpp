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
        if (side1 == side2 && side2 == side3)
        {
            cout << "triangle is equilateral";
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            cout << "the triangle is isoscales";
        }
        else
        {
            cout << "the triangle is scalen";
        }
    }
    else
    {
        cout << "your triangle is not valid";
    }
    return 0;
}