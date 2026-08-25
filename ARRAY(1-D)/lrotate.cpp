#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void leftRotateByK(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;
    
    k = k % n; // Handle cases where k > n
    
    // Step 1: Reverse the first k elements
    reverse(arr.begin(), arr.begin() + k);
    // Step 2: Reverse the remaining n-k elements
    reverse(arr.begin() + k, arr.end());
    // Step 3: Reverse the entire array
    reverse(arr.begin(), arr.end());
}