#include <iostream>
#include <cctype> // For isalpha, isdigit
using namespace std;

int main()
{
    char ch;

    cout << "enter any character: ";
    cin >> ch;

    if (isalpha(static_cast<unsigned char>(ch)))
    {
        cout << ch << " is an Alphabet" << endl;
    }

    else if (isdigit(static_cast<unsigned char>(ch)))
    {
        cout << ch << " is a Digit" << endl;
    }

    else
    {
        cout << ch << " is a Special Character" << endl;
    }

    return 0;
}
