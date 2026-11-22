#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;

    cout << "enter your alphabet "<< endl;
    cin >> ch;
    if (isupper(ch))
    {
        cout << ch << "-is a upper case alphabet";
    }

    if(islower(ch))
    {
        cout << ch << "-is not an lower case apphabet";
    }

    return 0;
}