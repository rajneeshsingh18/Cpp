#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> num;

    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << num << " is a prime number";
    else
        cout << num << " is not a prime number";

    return 0;
}
