#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ppi;

int main() {
    int num_tests;
    cin >> num_tests;

    while (num_tests--) {
        int num_students, arrival_time, leaving_time;
        cin >> num_students;
        queue<ppi> students_queue;

        for (int i = 0; i < num_students; i++) {
            cin >> arrival_time >> leaving_time;
            students_queue.push({arrival_time, leaving_time});
        }

        int timeline = 0;

        while (!students_queue.empty()) {
            tie(arrival_time, leaving_time) = students_queue.front();
            students_queue.pop();

            if (timeline <= arrival_time) {
                cout << arrival_time << " ";
                timeline = arrival_time + 1;
            } else {
                if (timeline <= leaving_time) {
                    cout << timeline << " ";
                    timeline++;
                } else {
                    cout << "0 ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}