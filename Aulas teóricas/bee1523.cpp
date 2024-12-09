#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_cars, num_supported_cars, arriving_time, leaving_time;
    cin >> num_cars >> num_supported_cars;

    while(num_cars != 0 && num_supported_cars != 0) {
        stack<int> parking_lot;
        bool valid = true;

        for (int i = 0; i < num_cars; i++) {
            cin >> arriving_time >> leaving_time;

            if (valid == false) {
                continue;
            }

            while(parking_lot.empty() == false && parking_lot.top() <= arriving_time) {
                parking_lot.pop();
            }

            if ((parking_lot.size() < num_supported_cars && !parking_lot.empty() && parking_lot.top() > leaving_time) || (parking_lot.size() < num_supported_cars && parking_lot.empty())) {
                parking_lot.push(leaving_time);
            } else {
                valid = false;
            }
        }

        if (valid == true) {
            cout << "Sim" << endl;
        } else {
            cout << "Nao" << endl;
        }

        cin >> num_cars >> num_supported_cars;
    }

    return 0;
}