#include <bits/stdc++.h>
using namespace std;

int main() {
    // declaro a pilha
    stack<int> pilha;

    // operacao de empilhar - tempo O(1)
    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(4);

    // operacao para acessar o elemento do topo - tempo O(1)
    int top_element = pilha.top();
    cout << "Topo: " << top_element << endl;

    // operacao para verificar o tamanho da pilha - tempo O(1)
    int pilha_size = pilha.size();
    cout << "Tamanho: " << pilha_size << endl;

    // operacao de desempilhar - tempo O(1)
    pilha.pop();
    
    // remover todos os elementos 
    while(!pilha.empty()) {
        cout << "Elemento removido: " << pilha.top() << endl;
        pilha.pop();
    }

    return 0;
}