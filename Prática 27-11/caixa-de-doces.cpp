#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_tests;
    cin >> num_tests;

    while(num_tests--) {
        int num_boxes;
        cin >> num_boxes;

        vector<int> candies_in_boxes;
        int aux;

        for (int i = 0; i < num_boxes; i++) {
            cin >> aux;
            candies_in_boxes.push_back(aux);
        }

        auto min_candies_pointer = min_element(candies_in_boxes.begin(), candies_in_boxes.end());
        int min_candies = *min_candies_pointer;

        int removed_candies = 0;

        for (int i = 0; i < candies_in_boxes.size(); i++) {
            removed_candies += (candies_in_boxes[i] - min_candies);
        }

        cout << removed_candies << endl;
    }

    return 0;
}