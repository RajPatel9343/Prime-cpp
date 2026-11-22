#include <iostream>
using namespace std;

int main() {
    double basicSalary, hra, da, grossSalary;

    cout << "Enter the basic salary of the employee: ";
    cin>>basicSalary;

    if (basicSalary <= 10000) {
        hra = 0.20 * basicSalary;
        da  = 0.80 * basicSalary; 
    }
    else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary; 
        da  = 0.90 * basicSalary; 
    }
    else {
        hra = 0.30 * basicSalary; 
        da  = 0.95 * basicSalary; 
    }

    grossSalary = basicSalary + hra + da;                   

    cout << "\nBasic Salary : " << basicSalary;
    cout << "\nHRA          : " << hra;
    cout << "\nDA           : " << da;
    cout << "\nGross Salary : " << grossSalary << "\n";

    return 0;
}
