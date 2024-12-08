/*

Crie uma função chamada somaArray que receba um array de inteiros e o tamanho do array como parâmetros,
e retorne a soma de todos os elementos do array. A função deve utilizar um laço for para somar os elementos.

    Nome: Eduardo Silva de Araújo - 20241610022
*/


#include <iostream>
#include <cassert>

using namespace std;

int somaArray(int *array, int tamanhoarray){
    int somanumeros = 0;
    for(int elemento = 0; elemento < tamanhoarray; elemento++){
        somanumeros += *(array+elemento);
    }
    return somanumeros;
    }

int main() {
    // Arrays para testes
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};
    int arr3[] = {-1, -2, -3, -4, -5};
    int arr4[] = {0, 0, 0, 0, 0};

    // Testes unitários
    assert(somaArray(arr1, 5) == 15);    // 1 + 2 + 3 + 4 + 5 = 15
    assert(somaArray(arr2, 3) == 60);    // 10 + 20 + 30 = 60
    assert(somaArray(arr3, 5) == -15);   // -1 + -2 + -3 + -4 + -5 = -15
    assert(somaArray(arr4, 5) == 0);     // 0 + 0 + 0 + 0 + 0 = 0
    assert(somaArray(arr1, 0) == 0);     // Caso com array de tamanho 0

    cout << "Todos os testes passaram!" << endl;

    return 0;
}