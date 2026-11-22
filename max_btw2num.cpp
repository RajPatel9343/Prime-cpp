#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int num1, num2;

    cout << "enter your num: ";
    cin >> num1;
    cin >> num2;

    cout<<"the bigger num is:" <<fmax(num1,num2);
    return 0;
}