#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num_tests;
    cin >> num_tests;
 
    while (num_tests--) {
        int string_length, char_points, substring_points;
        string binary_string;
 
        cin >> string_length >> char_points >> substring_points >> binary_string;
 
        int num_substrings = 1;
        for (int i = 1; i < string_length; ++i) {
            if (binary_string[i] != binary_string[i - 1]) {
                ++num_substrings;
            }
        }
 
        if (substring_points >= 0) {
            cout << string_length * char_points + string_length * substring_points << endl;
        } else {
            cout << string_length * char_points + ((num_substrings / 2 + 1) * substring_points) << endl;
        }
    }
 
    return 0;
}