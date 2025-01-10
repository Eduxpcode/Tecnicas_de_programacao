/*

Crie uma função chamada somaAlturas que receba um vetor de structs Pessoa e seu tamanho. A função deve retornar a soma das alturas de todas as pessoas no vetor.

Nome: Eduardo Silva de Araújo | Matrícula: 20241610022
*/

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

float somaAlturas(Pessoa pessoas[], int tamanho){
    float soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += pessoas[i].altura; // += pq ele tem que começa o acumulador e vai somando com cada altura dos structs de acordo com a passagem nos índices.
    }
    return soma;
}

int main() {
    Pessoa pessoas[] = {
        {"Joao", 25, 1.75},
        {"Maria", 30, 1.65},
        {"Pedro", 22, 1.80}
    };

    assert(abs(somaAlturas(pessoas, 3) - 5.20) < 0.0001);  // 1.75 + 1.65 + 1.80 = 5.20

    Pessoa pessoas2[] = {
        {"Ana", 20, 1.50},
        {"Carlos", 40, 1.90}
    };

    assert(abs(somaAlturas(pessoas2, 2) - 3.40) < 0.0001);  // 1.50 + 1.90 = 3.40

    cout << "Todos os testes passaram!" << endl;
    return 0;
}