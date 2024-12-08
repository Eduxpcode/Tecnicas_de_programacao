/*

Crie uma função chamada trocaValores que receba dois ponteiros para variáveis inteiras 
e troque os valores entre elas.

//nome: Eduardo Silva de Araújo | Matrícula: 20241610022;

*/

#include <iostream>
#include <cassert>

using namespace std;

void trocaValores(int* val1, int* val2){
    int valorinicial = *val1;
    *val1 = *val2;
    *val2 = valorinicial;
    
}

int main() {
    int x = 5;
    int y = 10;

    trocaValores(&x, &y);
    assert(x == 10 && y == 5);  // Valores trocados

    int a = -3;
    int b = 3;

    trocaValores(&a, &b);
    assert(a == 3 && b == -3);  // Valores trocados

    cout << "Todos os testes passaram!" << endl;
    return 0;
}