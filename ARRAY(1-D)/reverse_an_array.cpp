#include<iostream>
using namespace std;

int main(){
    int i,n;

    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    for(i=n-1;i>=0;i--){    // imp!!!! n-1 as we dont want to include \0 null char !!!!
        cout << arr[i] << "\n";
    }
    return 0;
}