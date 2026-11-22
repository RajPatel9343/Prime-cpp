#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double costPrice, sellingPrice;

    cout << "Enter Cost Price (CP): ";
    cin>> costPrice;
    
    cout << "Enter Selling Price (SP): ";
    cin>>sellingPrice;
   
    
    
    if (sellingPrice > costPrice) {
        double profit = sellingPrice - costPrice;
        double profitPercent = (profit / costPrice) * 100;
        cout << fixed << setprecision(2);
        cout << "Profit: " << profit << "\n";
        cout << "Profit Percentage: " << profitPercent << "%\n";
    }
    else if (costPrice > sellingPrice) {
        double loss = costPrice - sellingPrice;
        double lossPercent = (loss / costPrice) * 100;
        cout << fixed << setprecision(2);
        cout << "Loss: " << loss << "\n";
        cout << "Loss Percentage: " << lossPercent << "%\n";
    }
    else {
        cout << "No Profit, No Loss.\n";
    }

    return 0;
}
