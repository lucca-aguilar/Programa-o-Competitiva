#include <bits/stdc++.h>
using namespace std;

int countColoration(string word) {
    vector<int> frequencies(26, 0);
    int colored_letters = 0;
    int word_size = word.size();

    for (int i = 0; i < word_size; i++) {
        int index = word[i] - 'a';
        frequencies[index]++;
    }

    int frequencies_size = frequencies.size();

    for (int i = 0; i < frequencies_size; i++) {
        if (frequencies[i] > 0) {
            colored_letters++;
        } 
        
        if (frequencies[i] > 1) {
            colored_letters++;
        }
    }

    int result = floor(colored_letters / 2);
    return result;
}

int main() {
    int num_tests;
    cin >> num_tests;

    while(num_tests--) {
        string word;
        cin >> word;

        int result = countColoration(word);
        cout << result << endl;
    }

    return 0;
}