#include <iostream>
using namespace std;

int main() {
    int i, n;
    int target;
    int ans = -1; // FIXED: Changed string to integer

    cout << "Enter n: ";
    cin >> n;

    int arr[n]; 
    int s = 0, e = n - 1; // FIXED: Moved after 'n' is initialized

    // array input
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // setting target
    cout << "target: ";
    cin >> target;

    // assessing the output
    while (s <= e) {
        int mid = s + (e - s) / 2; // FIXED: Prevents integer overflow

        if (arr[mid] == target) {
            ans = mid;
            break; 
        } 
        // ASSUMPTION: Array is sorted in ascending order
        else if (arr[mid] > target) { 
            e = mid - 1; // FIXED: Target is smaller, look left
        } 
        else {
            s = mid + 1; // FIXED: Target is larger, look right
        }
    }

    cout << "Index: " << ans << "\n";
    return 0;
}
