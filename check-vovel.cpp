#include <iostream>
#include <cctype> // for isalpha() and tolower()
using namespace std;

int main()
{
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << ch << " is a vowel" << endl;
    }
    else
    {
        cout << ch << " is a consonant" << endl;
    }

    return 0;
}
