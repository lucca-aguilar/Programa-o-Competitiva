#include <bits/stdc++.h>
using namespace std;

bool checkString(string word) {
    int word_size = word.size();
    int i = word_size;

    while(i--) {
        if (*(word.begin() + i) == 'a' + i) {
            word.erase(word.begin() + i);

        } else if (*word.begin() == 'a' + i) {
            word.erase(word.begin());
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    int num_tests;
    cin >> num_tests;

    while (num_tests--) {
        string word;
        cin >> word;

        bool result = checkString(word);
        if (result == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}