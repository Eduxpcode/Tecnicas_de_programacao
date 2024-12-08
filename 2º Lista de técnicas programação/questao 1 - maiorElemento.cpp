/*

Crie uma função chamada maiorElemento que receba um array de números inteiros e o tamanho do array
como parâmetros e retorne o maior valor presente no array.

nome: Eduardo Silva de Araújo | matrícula: 20241610022
*/

#include <iostream>
#include <cassert>

using namespace std;


int maiorElemento(int array[], int tamanho){
int maior = array[0];
    for (int i = 0; i < tamanho;i++){
        if(array[i] > maior){
            maior = array[i];
        }
    }
return maior;
}

int main() {
    // Arrays para testes
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 5, 8};
    int arr3[] = {-1, -2, -3, -4};
    int arr4[] = {5};

    // Testes unitários
    assert(maiorElemento(arr1, 5) == 5);      // O maior valor é 5
    assert(maiorElemento(arr2, 4) == 20);     // O maior valor é 20
    assert(maiorElemento(arr3, 4) == -1);     // O maior valor é -1
    assert(maiorElemento(arr4, 1) == 5);      // O maior valor é 5 (único elemento)

    cout << "Todos os testes passaram!" << endl;

    return 0;
}