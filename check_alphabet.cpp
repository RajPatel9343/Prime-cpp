#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;

    cout << "enter your number "<< endl;
    cin >> ch;
    if (isalpha(ch))
    {
        cout << ch << "-is an alphabet";
    }

    else
    {
        cout << ch << "-is not an apphabet";
    }

    return 0;
}