#include <bits/stdc++.h>
using namespace std;

int main() {
    double old_num_products, old_price, new_num_products, new_price;
    cin >> old_num_products >> old_price >> new_num_products >> new_price;

    if ((old_price/old_num_products) > (new_price/new_num_products)) {
        cout << "Promocao" << endl;
    } else {
        cout << "Enganacao" << endl;
    }

    return 0;
}