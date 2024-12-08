/*

Crie uma função chamada maiorElementoMatriz que receba uma matriz de inteiros e suas dimensões 
(número de linhas e colunas) como parâmetros e retorne o maior valor presente na matriz.

nome: Eduardo SIlva de Araújo | Matrícula: 20241610022  
*/

#include <iostream>
#include <cassert>

using namespace std;

const int COLUNAS = 3;

int maiorElementoMatriz(int matriz[][COLUNAS], int linhas, int colunas) { // Não altere a assinatura da função
   int maior = matriz[0][0];
   for(int i = 0; i < linhas; i++){
       for (int j = 0; j < colunas; j++){
           if (matriz[i][j] > maior){
               maior = matriz[i][j];
           }
       }
   }
   return maior;
}

int main() {
    // Matrizes para testes
    int matriz1[2][COLUNAS] = {{1, 2, 3}, {4, 5, 6}};
    int matriz2[3][COLUNAS] = {{-1, -2, -3}, {-4, -5, -6}, {-7, -8, -9}};
    int matriz3[2][COLUNAS] = {{0, 0, 0}, {0, 0, 1}};
    
    // Testes unitários
    assert(maiorElementoMatriz(matriz1, 2, 3) == 6);  // Maior elemento é 6
    assert(maiorElementoMatriz(matriz2, 3, 3) == -1); // Maior elemento é -1
    assert(maiorElementoMatriz(matriz3, 2, 3) == 1);  // Maior elemento é 1

    cout << "Todos os testes passaram!" << endl;

    return 0;
}