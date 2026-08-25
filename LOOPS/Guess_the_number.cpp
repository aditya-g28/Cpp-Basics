#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0)); 
    
    int hiddenNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Guess the Number Game!\n";
    cout << "I have chosen a number between 1 and 100.\n";
    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
        if (guess > hiddenNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < hiddenNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts!\n";
        }
        
    } while (guess != hiddenNumber);
    
    return 0;
}