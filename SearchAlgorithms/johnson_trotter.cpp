#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Utility function to print the permutation
void printPermutation(const vector<int>& perm) {
    for (int i : perm)
        cout << i << " ";
    cout << endl;
}

// Function to generate the next permutation using Johnson-Trotter algorithm
void johnsonTrotter(int n) {
    vector<int> perm(n);
    vector<int> dir(n, 0); // 0 represents left, 1 represents right

    for (int i = 0; i < n; ++i) {
        perm[i] = i + 1;
    }

    while (true) {
        printPermutation(perm);

        int mobile = -1;
        int mobileIndex = -1;
        for (int i = 0; i < n; ++i) {
            if (dir[i] == 0 && i != 0 && perm[i] > perm[i - 1]) {
                if (perm[i] > mobile) {
                    mobile = perm[i];
                    mobileIndex = i;
                }
            } else if (dir[i] == 1 && i != n - 1 && perm[i] > perm[i + 1]) {
                if (perm[i] > mobile) {
                    mobile = perm[i];
                    mobileIndex = i;
                }
            }
        }

        if (mobile == -1)
            break;

        if (dir[mobileIndex] == 0)
            swap(perm[mobileIndex], perm[mobileIndex - 1]);
        else
            swap(perm[mobileIndex], perm[mobileIndex + 1]);

        swap(dir[mobileIndex], dir[mobileIndex - (dir[mobileIndex] == 0 ? 1 : -1)]);

        for (int i = 0; i < n; ++i) {
            if (perm[i] > mobile)
                dir[i] ^= 1;
        }
    }
}

int main() {
    int n = 4; // Change this value to generate permutations of different sizes
    johnsonTrotter(n);
    return 0;
}

