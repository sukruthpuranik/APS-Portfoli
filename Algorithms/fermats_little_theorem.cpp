#include <iostream>
using namespace std;

// Function to perform modular exponentiation
// It returns (x^y) % p
int power(int x, unsigned int y, int p) {
    int res = 1;  // Initialize result
    x = x % p;  // Update x if it is more than or equal to p

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1;  // y = y/2
        x = (x * x) % p;  // Change x to x^2
    }
    return res;
}

// Function to find the modular inverse of a under modulo p
int modInverse(int a, int p) {
    return power(a, p - 2, p);
}

int main() {
    int a = 3, p = 7;
    cout << "Modular inverse of " << a << " under modulo " << p << " is " << modInverse(a, p) << endl;
    return 0;
}
