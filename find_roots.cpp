#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Coefficient 'a' cannot be zero." << endl;
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) { 
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots: " << x1 << " and " << x2 << endl;
    }
    else if (discriminant == 0) { 
        x1 = -b / (2 * a);
        cout << "Root: " << x1 << endl;
    }
    else { // Complex
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots: " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}