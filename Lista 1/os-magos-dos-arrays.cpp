#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_cases;
    cin >> num_cases;

    while(num_cases--) {
        int size_of_arrays, sum_array1 = 0, sum_array2 = 0, num_operations = 0;
        cin >> size_of_arrays;

        vector<int> array1;
        vector<int> array2;
        vector<int> differences(size_of_arrays);

        for(int i = 0; i < size_of_arrays; i++) {
            int aux;
            cin >> aux;
            array1.push_back(aux);
            sum_array1 += aux;
        }

        for(int i = 0; i < size_of_arrays; i++) {
            int aux;
            cin >> aux;
            array2.push_back(aux);
            sum_array2 += aux;

            differences[i] = array1[i] - array2[i];
        }

        if (sum_array1 == sum_array2) {

            for (int i = 0; i < size_of_arrays; i++) {
                if (differences[i] > 0) {
                    num_operations += differences[i];
                }
            }

            cout << num_operations << endl;

            int i = 0;
            int j = size_of_arrays - 1;
            
            while (i < size_of_arrays && j > -1) {
                if (differences[i] > 0 && differences[j] < 0) {
                    differences[i]--;
                    differences[j]++;
                    cout << i + 1 << " " << j + 1 << endl;
                } else if (differences[i] <= 0) {
                    i++;
                } else if (differences[j] >= 0) {
                    j--;
                }
            }
        } else {
            cout << "-1" << endl;
        }
    
    }

    return 0;
}