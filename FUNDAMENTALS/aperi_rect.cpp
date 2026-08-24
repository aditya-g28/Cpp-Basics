#include <iostream>
using namespace std;

int main() {
    double length, breadth;
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    
    double area = length * breadth;
    double perimeter = 2 * (length + breadth);
    
    cout << "The Area of the rectangle is: " << area << "\n";
    cout << "The perimeter of the rectangle is: " << perimeter << "\n";
    
    return 0;
}