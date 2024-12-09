#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_tests;
    cin >> num_tests;

    while (num_tests--) {
        string str_number;
        cin >> str_number;

        int first_part = stoi(str_number.substr(0, 1)) + stoi(str_number.substr(1, 1)) + stoi(str_number.substr(2, 1));
        int second_part = stoi(str_number.substr(3, 1)) + stoi(str_number.substr(4, 1)) + stoi(str_number.substr(5, 1));

        if (first_part == second_part) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}