/*

Você está desenvolvendo um sistema para calcular as médias de alunos. Cada aluno possui:

    Nome (string)
    Notas (array de 3 floats)

    Crie uma struct Aluno para representar os alunos.
    Implemente a função calcularMedia que recebe um ponteiro para um array de structs Aluno, o tamanho do array e o nome de um aluno. 
    
    A função deve calcular e retornar a média do aluno com base nas notas.

Nome: Eduardo Silva de Araújo | Matrícula: 20241610022

*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

struct Aluno{
    string nome;
    float notas[3];
};

float calcularMedia(Aluno* aluno, int tamanho, string nome){
    float soma = 0;
    float quantidadenotas = 3;
    for(int i = 0; i < tamanho; i++){
        if (aluno[i].nome == nome) {
            for(int j = 0; j < quantidadenotas; j++){
                soma += aluno[i].notas[j];
            }
            return soma / 3;
        }
    }
    return -1;
}

int main() {
    Aluno alunos[] = {
        {"Joao", {8.0, 9.0, 7.0}},
        {"Maria", {6.0, 7.5, 8.5}},
        {"Pedro", {5.0, 6.0, 5.5}}
    };

    // Teste 1: Calcular média de aluno existente
    assert(abs(calcularMedia(alunos, 3, "Joao") - 8.0) < 0.0001);

    // Teste 2: Calcular média de outro aluno existente
    assert(abs(calcularMedia(alunos, 3, "Maria") - 7.3333) < 0.0001);

    // Teste 3: Aluno inexistente
    assert(calcularMedia(alunos, 3, "Ana") == -1);

    cout << "Todos os testes passaram!\n";
    return 0;
}