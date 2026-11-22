#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

// Function to count notes for a given amount
void countNotes(int amount) {
    // Common Indian currency denominations
    vector<int> denominations = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    vector<int> noteCount(denominations.size(), 0);

    int remaining = amount;

    for (size_t i = 0; i < denominations.size(); i++) {
        if (remaining >= denominations[i]) {
            noteCount[i] = remaining / denominations[i];
            remaining %= denominations[i];
        }
    }

    // Display result
    cout << "\nCurrency Note Breakdown:\n";
    int totalNotes = 0;
    for (size_t i = 0; i < denominations.size(); i++) {
        if (noteCount[i] > 0) {
            cout << denominations[i] << " : " << noteCount[i] << " notes\n";
            totalNotes += noteCount[i];
        }
    }
    cout << "Total number of notes: " << totalNotes << endl;
}

int main() {
    int amount;

    cout << "Enter the amount: ";
    if (!(cin >> amount) || amount < 0) {
        cerr << "Invalid input. Please enter a non-negative integer amount.\n";
        return 1;
    }

    if (amount == 0) {
        cout << "No notes required for amount 0.\n";
        return 0;
    }

    countNotes(amount);
    return 0;
}
