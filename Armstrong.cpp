#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the number of digits in a number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return (sum == originalNumber);
}

// Function to print Armstrong numbers within a range
void printArmstrongNumbers(int lower, int upper) {
    cout << "Armstrong numbers between " << lower << " and " << upper << " are: " << endl;
    for (int i = lower; i <= upper; ++i) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int lower, upper;
    cout << "Enter lower and upper limits: ";
    cin >> lower >> upper;

    printArmstrongNumbers(lower, upper);

    return 0;
}
