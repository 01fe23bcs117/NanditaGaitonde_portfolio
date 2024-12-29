#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Function to preprocess the bad character heuristic
void preprocess_bad_character(const string& pattern, vector<int>& bad_char) {
    int m = pattern.size();
    fill(bad_char.begin(), bad_char.end(), -1);
    for (int i = 0; i < m; i++) {
        bad_char[pattern[i]] = i;
    }
}

// Function to calculate the distance D based on the given formula
int calculate_distance(int t_c, int k) {
    int d1 = max(t_c - k, 1);
    if (k == 0) {
        return d1;
    }
    return max(d1, t_c);
}

// Boyer-Moore algorithm implementation
void boyer_moore_search(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();
    vector<int> bad_char(256, -1); // Supports extended ASCII

    // Preprocess the bad character heuristic
    preprocess_bad_character(pattern, bad_char);

    int shift = 0;
    int matches_found = 0; // To track the number of matches (k)

    while (shift <= (n - m)) {
        int j = m - 1;

        // Find the rightmost mismatch
        while (j >= 0 && pattern[j] == text[shift + j]) {
            j--;
        }

        if (j < 0) {
            matches_found++; // Increment match count
            cout << "Pattern found at index " << shift << endl;

            // Calculate distance using the provided formula
            int t_c = n - (shift + m); // Remaining characters in the text
            int d = calculate_distance(t_c, matches_found);
            cout << "Calculated distance D = " << d << endl;

            // Shift pattern to align the next character in text
            shift += (shift + m < n) ? m - bad_char[text[shift + m]] : 1;
        } else {
            // Shift pattern to align the bad character
            shift += max(1, j - bad_char[text[shift + j]]);
        }
    }

    cout << "Total matches found (k) = " << matches_found << endl;
}

int main() {
    string text, pattern;

    // Input text and pattern from user
    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern: ";
    getline(cin, pattern);

    // Perform Boyer-Moore pattern search
    boyer_moore_search(text, pattern);

    return 0;
}
