/*

Crie uma função chamada somaDiagonalPrincipal que receba uma matriz quadrada de inteiros e sua 
dimensão como parâmetros e retorne a soma dos elementos da diagonal principal. 
A diagonal principal de uma matriz quadrada é composta pelos elementos onde o índice da linha é igual ao índice da coluna.

nome: Eduardo Silva de Araújo | Matrícula: 20241610022
*/

#include <iostream>
#include <cassert>

using namespace std;

const int TAMANHO = 3;

int somaDiagonalPrincipal(int matriz[][TAMANHO], int dimensao) { // Não altere a assinatura da função
   int diagonal = 0;
   for (int i = 0; i < dimensao; i++){
       diagonal += matriz[i][i];
   }
   return diagonal;
   
}

int main() {
    // Matrizes para testes
    int matriz1[TAMANHO][TAMANHO] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[TAMANHO][TAMANHO] = {{10, 0, 0}, {0, 20, 0}, {0, 0, 30}};
    int matriz3[TAMANHO][TAMANHO] = {{-1, -2, -3}, {-4, -5, -6}, {-7, -8, -9}};
    
    // Testes unitários
    assert(somaDiagonalPrincipal(matriz1, TAMANHO) == 15);  // 1 + 5 + 9 = 15
    assert(somaDiagonalPrincipal(matriz2, TAMANHO) == 60);  // 10 + 20 + 30 = 60
    assert(somaDiagonalPrincipal(matriz3, TAMANHO) == -15); // -1 + -5 + -9 = -15

    cout << "Todos os testes passaram!" << endl;

    return 0;
}