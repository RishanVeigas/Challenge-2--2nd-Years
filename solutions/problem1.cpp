#include <bits/stdc++.h>
using namespace std;

string rotateLeft(const string &s) {
    return s.substr(1) + s[0];
}

string rotateRight(const string &s) {
    return s.back() + s.substr(0, s.size() - 1);
}

int main() {
    ifstream gridFile("../inputs/grid.txt");
    ifstream dirFile("../inputs/directions.txt");

    vector<string> grid;
    string row, dirs;

    while (gridFile >> row)
        grid.push_back(row);

    string d;
    while (dirFile >> d)
        dirs += d;   // Example: RLRLR

    int n = grid.size();
    int mid = n / 2;

    string current = grid[mid];

    for (char c : dirs) {
        if (c == 'L') current = rotateLeft(current);
        else current = rotateRight(current);
    }

    int sum = 0;
    for (char c : current)
        sum += (int)c;

    cout << sum << endl;   // Clue 1
}
