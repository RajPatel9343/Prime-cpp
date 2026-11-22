#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "enter your number";
    cin >> num;
    if (num > 0)
    {
        cout << "your num is positiv ";
    }

    if(num < 0)
    {
        cout << "your num is nagetiv";
    }
    if(num == 0){
        cout<<"yout num is zero";
    }
    else{
        cout<<"enter valid num";
    }

    return 0;
}