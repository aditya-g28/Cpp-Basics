#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0.0;
    
    cout << "Enter units consumed: ";
    cin >> units;
    
    // Assumption: 1-100 units = 5/unit, 101-200 units = 7/unit, above 200 units = 10/unit
    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        bill = (100 * 5.0) + ((units - 100) * 7.0);
    } else {
        bill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    }
    
    cout << "Total Electricity Bill: " << bill << "\n";
    
    return 0;
}