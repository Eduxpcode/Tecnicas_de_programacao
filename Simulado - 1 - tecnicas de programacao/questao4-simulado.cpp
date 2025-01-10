/*

Você está desenvolvendo um sistema para gerenciar os jogadores de um jogo. Cada jogador possui:

    Nome (string)
    Pontuação (int)

    Crie uma struct Jogador para representar os jogadores.
    Implemente a função encontrarMaiorPontuacao que recebe um ponteiro para um array de structs Jogador e o tamanho do array. 
    A função deve retornar o nome do jogador com a maior pontuação.

    Nome: Eduardo Silva de Araújo | Matrícula: 20241610022

*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

struct Jogador{
    string nome;
    int pontuacao;
};

string encontrarMaiorPontuacao(Jogador* jogador, int tamanho){
    string MaiorPontuador;
    for(int i = 0; i < tamanho; i++){
        if (jogador[i].pontuacao > jogador[i - 1].pontuacao){
          MaiorPontuador = jogador[i].nome;
        }
    }
    return MaiorPontuador;
}

int main() {
    Jogador jogadores[] = {
        {"Joao", 1500},
        {"Maria", 2000},
        {"Pedro", 1800}
    };

    // Teste 1: Verificar jogador com maior pontuação
    assert(encontrarMaiorPontuacao(jogadores, 3) == "Maria");

    cout << "Todos os testes passaram!\n";
    return 0;
}