/*

Crie uma função chamada duplicaValor que receba um ponteiro para um número inteiro. 
A função deve duplicar o valor do número apontado pelo ponteiro.
// nome: Eduardo Silva de Araújo ; matrícula: 20241610022.

*/

#include <iostream>
#include <cassert>

using namespace std;

int duplicaValor(int* valor){
    *valor = *valor*2;
    return *valor;
    
}

int main() {
    int valor1 = 5;
    int valor2 = -3;
    int valor3 = 0;

    duplicaValor(&valor1);
    assert(valor1 == 10);  // 5 * 2 = 10

    duplicaValor(&valor2);
    assert(valor2 == -6);  // -3 * 2 = -6

    duplicaValor(&valor3);
    assert(valor3 == 0);   // 0 * 2 = 0

    cout << "Todos os testes passaram!" << endl;
    return 0;
}