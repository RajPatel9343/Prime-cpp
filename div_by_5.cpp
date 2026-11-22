#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "enter your number";
    cin >> num;
    if (num >= 0)
    {
        cout << "your num is positiv ";
    }

    if(num % 5 == 0)
    {
        cout << "your num is dividaible by 5";
    }

    else{
        cout<<"your num is ether negitive or not divided by 5";
    }

    return 0;
}