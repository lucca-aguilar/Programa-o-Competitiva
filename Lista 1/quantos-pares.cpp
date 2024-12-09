#include <bits/stdc++.h>
using namespace std;

int main() {
    long long num_tests;
    cin >> num_tests;

    while (num_tests--) {
        long long size_of_array, lower_limit, upper_limit, num_pairs = 0;
        cin >> size_of_array >> lower_limit >> upper_limit;
        vector<int> numbers_array(size_of_array);

        for (long long i = 0; i < size_of_array; i++) {
            cin >> numbers_array[i];
        }
        sort(numbers_array.begin(), numbers_array.end());

        for (long long i = 0; i < size_of_array; i++) {
            long long lower_bound_index = lower_bound(numbers_array.begin() + i + 1, numbers_array.end(), lower_limit - numbers_array[i]) - numbers_array.begin();
            long long upper_bound_index = upper_bound(numbers_array.begin() + i + 1, numbers_array.end(), upper_limit - numbers_array[i]) - numbers_array.begin();

            num_pairs += (upper_bound_index - lower_bound_index);
        }

        cout << num_pairs << endl;
    }

    return 0;
}
