/*

Crie uma função chamada multiplicaLinha que receba uma matriz de inteiros, 
suas dimensões (número de linhas e colunas), e um valor inteiro multiplicador. 

A função deve multiplicar todos os elementos de uma linha específica pelo valor do multiplicador.

nome: Eduardo Silva de Araújo | matrícula: 20241610022;
*/

#include <iostream>
#include <cassert>

using namespace std;

const int COLUNAS = 3;

int multiplicaLinha(int matriz[][COLUNAS],int linhas, int colunas, int linhaescolhida,int multiplicador){
    int resultado = 0;
    for(int i = 0; i < COLUNAS; i++){
         resultado = (matriz[linhaescolhida][i] *= multiplicador); 
    }
    return resultado;
}

int main() {
    // Matriz para testes
    int matriz1[2][COLUNAS] = {{1, 2, 3}, {4, 5, 6}};
    
    // Teste 1: Multiplicando a primeira linha por 2
    multiplicaLinha(matriz1, 2, 3, 0, 2);
    assert(matriz1[0][0] == 2);  // 1 * 2 = 2
    assert(matriz1[0][1] == 4);  // 2 * 2 = 4
    assert(matriz1[0][2] == 6);  // 3 * 2 = 6
    assert(matriz1[1][0] == 4);  // Linha não alterada
    assert(matriz1[1][1] == 5);
    assert(matriz1[1][2] == 6);

    // Teste 2: Multiplicando a segunda linha por -1
    multiplicaLinha(matriz1, 2, 3, 1, -1);
    assert(matriz1[1][0] == -4); // 4 * -1 = -4
    assert(matriz1[1][1] == -5); // 5 * -1 = -5
    assert(matriz1[1][2] == -6); // 6 * -1 = -6

    cout << "Todos os testes passaram!" << endl;

    return 0;
}