#include<iostream>
using namespace std;

int main(){
    int i, n;

    cout << "Enter n: ";
    cin >> n;

    //array dec
    int arr[n];
    //array in

    cout << "Enter an array of " << n << " elements" << "\n";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    // array out
    for(i=0;i<n;i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    cout << "The largest element is: " << largest << "\n";
    
    return 0;
}