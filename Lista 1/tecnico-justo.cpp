#include <bits/stdc++.h>
using namespace std;

int strengthDifference(vector<int> athletes, int num_athletes) {
    sort(athletes.begin(), athletes.end());
    vector<int> strenght_difference(num_athletes - 1);
    for (int i = 0; i < num_athletes - 1; i++) {
        strenght_difference[i] = abs(athletes[i + 1] - athletes[i]);
    }
    int min_difference = *min_element(strenght_difference.begin(), strenght_difference.end());
    return min_difference;
}

int main() {
    int num_tests;
    cin >> num_tests;

    while(num_tests--) {
        int num_athletes;
        cin >> num_athletes;
        vector<int> athletes;
        
        for (int i = 0; i < num_athletes; i++) {
            int aux;
            cin >> aux;
            athletes.push_back(aux);
        }

        int difference = strengthDifference(athletes, num_athletes);

        cout << difference << endl;
    }
    return 0;
}