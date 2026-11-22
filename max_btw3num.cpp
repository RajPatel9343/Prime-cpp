#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int num1,num2,num3,tras;

    cout << "enter your num: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    tras=fmax(num1,num2);

    cout<<"the bigger num is:"<< fmax(num3,tras);
    return 0;

}