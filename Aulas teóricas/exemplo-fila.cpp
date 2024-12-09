#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> fila;

    // operacao de inserir elemento - tempo O(1)
    fila.push(1);
    fila.push(2);
    fila.push(3);
    fila.push(4);

    // operacao de remover elemento da fila - tempo O(1)
    if (!fila.empty()) {
        fila.pop();
    }

    // operacao de acesso ao elemento da frente - tempo O(1)
    if (!fila.empty()) {
        int front_element = fila.front();
    }

    // esvazio toda a fila 
    while (!fila.empty()) {
        int front_element = fila.front();
        cout << "Frente: " << front_element << endl;
        fila.pop();
    }

    return 0;
}