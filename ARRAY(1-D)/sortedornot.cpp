#include<iostream>
using namespace std;

int main() {
    int i, n;
    bool isSorted = 1; // 0 for false and 1 for true

    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    for(i=0;i<(n-1);i++){  // upto n-1 so last value is need not to be checkked as itll obtain wrong answer
        if(arr[i+1] < arr[i]){  // sorting in ascending order
            isSorted = 0;
            break;    // imp!!! or else answer will be noit sorted default bool!!!
        }
    }
    if(isSorted == 1){
        cout << "Array is sorted" << "\n";
    } else {
        cout << "Array is not sorted" << "\n";
    }
    return 0;
}