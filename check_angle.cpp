#include <iostream>
using namespace std;

int main()
{
    float angle1,angle2,angle3;
    float c;

    cout << "enter the angles of triangle";
    cin >> angle1;
    cin >> angle2;
    cin >> angle3;

    c=angle1+angle2+angle3;

    if (c==180){
        
        cout<<"your triangle is valid";
    }
    
    else
    {
        cout << "your triangle is not valid";
    }
    return 0;
}