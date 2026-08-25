#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num > 0) {
        cout << "The number is Positive.\n";
    } else if (num < 0) {
        cout << "The number is Negative.\n";
    } else {
        cout << "The number is Zero.\n";
    }
    
    return 0;
}