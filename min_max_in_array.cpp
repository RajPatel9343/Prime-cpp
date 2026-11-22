#include <iostream>
using namespace std;
int main()
{

    int size;
    cout << "enter size of Array" << endl;
    cin >> size;
    int arr[size];

    cout << "start entering elements in array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int choice;
    cout << "type the number for what are using" << endl;
    cout << "largest number : 1" << endl;
    cout << "smallest number : 2" << endl;
    cout << "second largest number : 3" << endl;
    cin >> choice;
    
    switch (choice)
    {
    case 1:
    {
        int larg = arr[0];

        for (int i = 1; i < size; i++)
        {
            if (arr[i] >= larg)
            {
                larg = arr[i];
            }
        }
        cout << "largest num is:" << larg << endl;
    }
    break;

    case 2:
    {
        int small = arr[0];

        for (int i = 1; i < size; i++)
        {
            if (arr[i] <= small)
            {
                small = arr[i];
            }
        }
        cout << "smallest num is:" << small << endl;
    }
    break;

    case 3:
    {
        if (size < 2)
        {
            cout << "Need at least 2 elements!" << endl;
            break;
        }
        int larg = arr[0];
        int slarg = larg;

        for (int i = 1; i < size; i++)
        {
            if (arr[i] >= larg)
            {
                slarg = larg;
                larg = arr[i];
            }
        }
        cout << "largest num is:" << larg << endl;
        cout << "second large num is:" << slarg << endl;
    }
    break;

    default:
        cout << "Arror! invalid choice" << endl;
        break;
    }

    return 0;
}
