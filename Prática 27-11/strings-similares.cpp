#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_cases;
    cin >> num_cases;

    while (num_cases--) {
        int n;
        cin >> n;

        string binary_string;
        cin >> binary_string;

        int first_character = 0;
        string key_string = binary_string.substr(first_character, n);

        for (int i = first_character; i < n - 1; i++) {
            string current_substring = binary_string.substr(i, n);
            for (int j = 0; j < n; j++) {
                if(current_substring[j] != key_string[j]) {
                    key_string[j] = current_substring[j];
                }
            }
        }

        cout << "key:" << key_string << endl;
    }

    return 0;
}