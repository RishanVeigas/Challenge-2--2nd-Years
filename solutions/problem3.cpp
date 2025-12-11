#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    ifstream f("../inputs/states.txt");

    int x;
    int terminalCount = 0;

    while (f >> x) {
        if (isPrime(x)) {
            terminalCount++;
        }
        else if (x % 2 == 0) {
            // even → advances once, not terminal
        }
        else {
            // odd composite → no advancement
        }
    }

    cout << terminalCount << endl;  // Clue 3
}
