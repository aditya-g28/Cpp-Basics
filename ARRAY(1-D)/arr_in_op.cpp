#include<iostream>
using namespace std;

int main(){
    int i, n;

    cout << "Enter n: ";
    cin >> n;
    //array dec
    int arr[n];
    // array input
    cout << "Enter " << n << " elements of an array" << "\n";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    //array out
    cout << "An array of " << n << " elements is: " << "\n";
    for(i=0;i<n;i++){
        cout << arr[i];
    }
    return 0;
}