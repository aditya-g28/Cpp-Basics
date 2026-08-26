#include<iostream>
using namespace std;

int main(){
    int i, n;
    int target;  // seeting the value we are searching for
    int ans = -1;  // setting the array index as answer/s
                   // -1 as if no element found it will return -1
    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    //inputting target element
    cout << "Enter target: ";
    cin >> target;

    for(i=0;i<n;i++){
        if(target == arr[i]){
            ans = i;
            break;  // !!!imp to exit loop!!!
        }
    }
    // printing answer
    cout << ans << " index" <<  "\n";

    return 0;
}