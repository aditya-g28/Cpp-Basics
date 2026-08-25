#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    if (a > b) {
        cout << a << " is the larger number.\n";
    } else if (b > a) {
        cout << b << " is the larger number.\n";
    } else {
        cout << "Both numbers are equal.\n";
    }
    
    return 0;
}