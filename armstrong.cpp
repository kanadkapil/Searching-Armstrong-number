#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int number) {
    int num = number;
    int numDigits = 0;
    int armstrongSum = 0;

    while (num != 0) {
        num /= 10;
        ++numDigits;
    }

    num = number;
    while (num != 0) {
        int digit = num % 10;
        armstrongSum += pow(digit, numDigits);
        num /= 10;
    }

    return armstrongSum == number;
}

int main() {
    int num;
    cout << "Enter a number to check if it's an Armstrong number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
