#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1; // Using long long because factorials get large quickly
    
    cout << "Enter a number: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    cout << "Factorial of " << n << " is: " << factorial << "\n";
    
    return 0;
}