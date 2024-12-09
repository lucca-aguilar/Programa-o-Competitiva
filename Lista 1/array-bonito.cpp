#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--) {
        int sum;
        cin >> sum;

        map<int, int> tabela;
        tabela[0] = 0;

        int i = 1;
        while (tabela[i-1] + (2*(i-1) + 1) < sum) {
            tabela[i] = tabela[i-1] + 2*(i-1) + 1;
            i++;
        }

        cout << i << endl;
    }
    return 0;
}