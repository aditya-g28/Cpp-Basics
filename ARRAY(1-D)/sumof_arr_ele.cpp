#include<iostream>
using namespace std;

int main(){
    int i, n, sum = 0;

    cout << "Enter n: ";
    cin >> n;

    //array dec
    int arr[n];
    //array in
    cout << "Enter an array of " << n << " elements" << "\n";

    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    //array out
    for(i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout << "The sum of elements in the array is: " << sum << "\n";
    return 0;
}