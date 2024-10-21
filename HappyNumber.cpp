#include <iostream>
#include <unordered_set>
using namespace std;

// Function to calculate the sum of the squares of the digits of a number
int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;  // Get the last digit
        sum += digit * digit; // Square it and add to sum
        n /= 10; // Remove the last digit
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    unordered_set<int> seenNumbers; // To keep track of encountered numbers

    // Loop until we either reach 1 (happy) or find a repeated number (unhappy)
    while (n != 1 && seenNumbers.find(n) == seenNumbers.end()) {
        seenNumbers.insert(n); // Add current number to the set
        n = sumOfSquares(n); // Calculate sum of squares of digits
    }

    // If n equals 1, it is a happy number; otherwise, it's unhappy
    if (n == 1) {
        cout << "Happy" << endl;
    } else {
        cout << "Unhappy" << endl;
    }

    return 0;
}
