#include <iostream>
#include <iomanip> // for std::fixed and std::setprecision
using namespace std;

// Function to calculate the electricity bill
double calculateBill(double units) {
    double bill = 0.0;

    // Calculate charges based on slab rates
    if (units <= 50) {
        bill = units * 0.50;
    } 
    else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    } 
    else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } 
    else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Add 20% surcharge
    bill += bill * 0.20;

    return bill;
}

int main() {
    double units;

    cout << "Enter electricity units consumed: ";
    if (!(cin >> units) || units < 0) { // Input validation
        cout << "Invalid input. Please enter a non-negative number.\n";
        return 1;
    }

    double totalBill = calculateBill(units);

    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "Total Electricity Bill: Rs. " << totalBill << endl;

    return 0
}
