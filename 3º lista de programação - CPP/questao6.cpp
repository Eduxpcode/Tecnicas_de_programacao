/*

Crie uma função chamada removeNegativos que receba um ponteiro para um array de inteiros 
e o tamanho do array. 

A função deve substituir todos os valores negativos no array por zero.

nome: Eduardo Silva de Araújo | Matrícula: 20241610022
*/


#include <iostream>
#include <cassert>

using namespace std;

void removeNegativos(int* escolhearray, int tamanho){
    *escolhearray = escolhearray[0];
    for (int i = 0; i < tamanho; i ++){
        if (escolhearray[i] < 0){
            escolhearray[i] = 0;
        }
        escolhearray[i] = escolhearray[i];
    }
}

int main() {
    int arr1[] = {1, -2, 3, -4, 5};

    removeNegativos(arr1, 5);
    assert(arr1[0] == 1);
    assert(arr1[1] == 0);  // -2 foi substituído por 0
    assert(arr1[2] == 3);
    assert(arr1[3] == 0);  // -4 foi substituído por 0
    assert(arr1[4] == 5);

    int arr2[] = {-1, -2, -3, -4, -5};

    removeNegativos(arr2, 5);
    assert(arr2[0] == 0);  // Todos os elementos foram substituídos por 0
    assert(arr2[1] == 0);
    assert(arr2[2] == 0);
    assert(arr2[3] == 0);
    assert(arr2[4] == 0);

    int arr3[] = {0, 2, 4, 6, 8};

    removeNegativos(arr3, 5);
    assert(arr3[0] == 0);  // Nenhum valor foi alterado, pois não há negativos
    assert(arr3[1] == 2);
    assert(arr3[2] == 4);
    assert(arr3[3] == 6);
    assert(arr3[4] == 8);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}