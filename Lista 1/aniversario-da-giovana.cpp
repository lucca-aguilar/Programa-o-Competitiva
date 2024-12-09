#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num_spheres;
    cin >> num_spheres;
 
    vector<int> spheres_prices(num_spheres);
    vector<int> perfect_arrangement(num_spheres);
 
    for (int i = 0; i < num_spheres; i++) {
        cin >> spheres_prices[i];
    }
 
    sort(spheres_prices.begin(), spheres_prices.end());
 
    int index = 0;
    for (int i = 1; i < num_spheres; i += 2) {
        perfect_arrangement[i] = spheres_prices[index++];
    }
    for (int i = 0; i < num_spheres; i += 2) {
        perfect_arrangement[i] = spheres_prices[index++];
    }
 
    int max_spheres = 0;
    for (int i = 1; i < num_spheres - 1; i++) {
        if (perfect_arrangement[i] < perfect_arrangement[i - 1] &&
            perfect_arrangement[i] < perfect_arrangement[i + 1]) {
            max_spheres++;
        }
    }
 
    cout << max_spheres << endl;
    for (int i = 0; i < num_spheres; i++) {
        cout << perfect_arrangement[i] << " ";
    }
    cout << endl;
 
    return 0;
}