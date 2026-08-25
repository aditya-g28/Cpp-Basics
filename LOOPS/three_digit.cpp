#include <iostream>
using namespace std;

int main() {
    int n, originalNumber, remainder, result = 0;
    cout << "Enter a 3-digit number: ";
    cin >> n;
    
    originalNumber = n;
    
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder; // Cube the digit
        originalNumber /= 10;
    }
    
    if (result == n) {
        cout << n << " is an Armstrong number.\n";
    } else {
        cout << n << " is NOT an Armstrong number.\n";
    }
    
    return 0;
}