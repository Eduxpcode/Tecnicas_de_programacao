/*

Crie uma função chamada multiplicaArray que receba um ponteiro para um array de inteiros, 
o tamanho do array, e um valor inteiro multiplicador. 

A função deve multiplicar cada elemento do array pelo valor de multiplicador.

//nome: Eduardo Silva de Araújo | Matrícula: 20241610022

*/

#include <iostream>
#include <cassert>

using namespace std;

void multiplicaArray(int* escolhearray, int tamanho, int multiplicador){
    *escolhearray = escolhearray[0];
    for (int i = 0; i < tamanho; i ++){
        escolhearray[i] = escolhearray[i] * multiplicador;
    }
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};

    multiplicaArray(arr1, 5, 2);
    assert(arr1[0] == 2);  // 1 * 2 = 2
    assert(arr1[1] == 4);  // 2 * 2 = 4
    assert(arr1[2] == 6);  // 3 * 2 = 6
    assert(arr1[3] == 8);  // 4 * 2 = 8
    assert(arr1[4] == 10); // 5 * 2 = 10

    int arr2[] = {-1, 0, 3, -4, 5};

    multiplicaArray(arr2, 5, -1);
    assert(arr2[0] == 1);   // -1 * -1 = 1
    assert(arr2[1] == 0);   // 0 * -1 = 0
    assert(arr2[2] == -3);  // 3 * -1 = -3
    assert(arr2[3] == 4);   // -4 * -1 = 4
    assert(arr2[4] == -5);  // 5 * -1 = -5

    cout << "Todos os testes passaram!" << endl;
    return 0;
}