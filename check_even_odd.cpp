#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "enter your number";
    cin >> num;
    if (num%2==0)
    {
        cout << "your num is even ";
    }

    else
    {
        cout << "your num is odd";
    }

    return 0;
}