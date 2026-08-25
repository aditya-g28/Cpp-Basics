#include<iostream>
using namespace std;

int main(){
    int n, i;
    int even_count = 0;
    int odd_count = 0;

    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    for(i=0;i<n;i++){
        if(i % 2 == 0){
            even_count++;
        } else odd_count++;
    }
    cout << "Even elements are: " << even_count << " and ODD elements are: " << odd_count << "\n"; 

}