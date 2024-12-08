/*

Crie uma função chamada somaArrays que receba dois arrays de inteiros de mesmo tamanho,
um terceiro array de inteiros que armazenará os resultados, e o tamanho desses arrays como parâmetros.
A função deve calcular a soma dos elementos correspondentes dos dois primeiros arrays e
armazenar cada soma no terceiro array (array de resultados).

nome: Eduardo Silva de Araújo | matrícula: 20241610022
*/

#include <iostream>
#include <cassert>

using namespace std;

int somaArrays(int array1[], int array2[], int resul[], int tamanho){ 
for (int i = 0; i < tamanho; i ++){
        resul[i] = array1[i] + array2[i];

    }
        return resul[tamanho];
}
int main() {
    // Arrays para testes
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int resultado[5];

    // Chama a função para calcular a soma
    somaArrays(arr1, arr2, resultado, 5);

    // Testes unitários
    assert(resultado[0] == 6);  // 1 + 5
    assert(resultado[1] == 6);  // 2 + 4
    assert(resultado[2] == 6);  // 3 + 3
    assert(resultado[3] == 6);  // 4 + 2
    assert(resultado[4] == 6);  // 5 + 1

    // Outro teste
    int arr3[] = {10, 20, 30};
    int arr4[] = {1, 2, 3};
    int resultado2[3];

    somaArrays(arr3, arr4, resultado2, 3);

    assert(resultado2[0] == 11);  // 10 + 1
    assert(resultado2[1] == 22);  // 20 + 2
    assert(resultado2[2] == 33);  // 30 + 3

    cout << "Todos os testes passaram!" << endl;

    return 0;
}