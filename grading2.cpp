#include <iostream>
using namespace std;

int main()
{

    float marks,percentage;
    char grade;

    cout << "Enter your marks : ";
    cin >> marks;

    percentage = (marks / 500.0f) * 100;

    if (percentage >= 90)
    
        grade = 'A';
    
    else if (percentage >= 75)
    
        grade = 'B';
    
    else
        grade = 'F';
    cout<<"your grade is: "<<grade;    

    return 0;
}
