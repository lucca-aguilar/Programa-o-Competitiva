#include <bits/stdc++.h>
using namespace std;

bool checkArray(vector<int> numbers, int array_size) {
    sort(numbers.begin(), numbers.end());

    int min_value = *min_element(numbers.begin(), numbers.end());
    int max_value = *max_element(numbers.begin(), numbers.end());

    for (int i = min_value; i < max_value; i++) {
        bool in_array = binary_search(numbers.begin(), numbers.end(), i); 
        if (in_array == false) {
            return false;
        }
    }
    return true;
}

int main() {
    int num_tests;
    cin >> num_tests;

    while(num_tests--) {
        int array_size;
        cin >> array_size;
        vector<int> numbers;

        for (int i = 0; i < array_size; i++) {
            int aux;
            cin >> aux;
            numbers.push_back(aux);
        }

        bool result = checkArray(numbers, array_size);

        if (result == true) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }
    return 0;
}