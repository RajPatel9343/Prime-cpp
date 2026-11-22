#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "enter your number";
    cin >> num;
    if (num % 5 == 0 && num % 11 == 0){
        cout << "your num is dividaible by 5 and 11";
    }

    else{
        cout << "your num is ether not divided by 5 or 11";
    }

    return 0;
}