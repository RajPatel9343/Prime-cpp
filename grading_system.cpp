#include <iostream>
using namespace std;

int main() {
    
    float physics, chemistry, biology, mathematics, computer;

    cout << "Enter marks for Physics: ";
    cin>>physics;

    cout << "Enter marks for Chemistry: ";
    cin>>chemistry;

    cout << "Enter marks for Biology: ";
     cin>>biology;

    cout << "Enter marks for Mathematics: ";
     cin>>mathematics;
    

    cout << "Enter marks for Computer: ";
     cin>>computer;

    float total = physics + chemistry + biology + mathematics + computer;
    float percentage = (total / 500.0f) * 100;

    char grade;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    cout << "\nTotal Marks: " << total << "/500";
    cout << "\nPercentage: " << percentage << "%";
    cout << "\nGrade: " << grade << "\n";

    return 0;
}
