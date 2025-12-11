#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main() {
    ifstream f("../inputs/input2.txt");  

    if (!f.is_open()) {
        cout << "Error: input2.txt not found" << endl;
        return 1;
    }

    string s;
    f >> s;

    // Step 1: Reverse
    reverse(s.begin(), s.end());

    // Step 2: Remove every 3rd character
    string removed;
    for (int i = 0; i < s.size(); i++) {
        if ((i + 1) % 3 != 0) {
            removed += s[i];
        }
    }

    // Step 3: Shift ASCII by +2
    for (char &c : removed) {
        c = char(c + 2);
    }

    // Step 4: Count vowels
    int vowelCount = 0;
    for (char c : removed) {
        if (isVowel(c)) {
            vowelCount++;
        }
    }

    cout << vowelCount << endl; // Clue 2
    return 0;
}
