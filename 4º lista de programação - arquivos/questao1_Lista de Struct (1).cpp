/*

Crie uma função chamada inicializaPessoa que receba um ponteiro para uma struct Pessoa e inicialize seus campos (nome, idade, altura) com os valores fornecidos.

Definição da struct:

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

Nome: Eduardo Silva de Araújo | Matrícula: 20241610022

*/


#include <iostream>
#include <cassert>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

void inicializaPessoa(Pessoa *pessoa, string nome, int idade, float altura){
    pessoa->nome = nome;
    pessoa->idade = idade;
    pessoa ->altura = altura;
}

int main() {
    Pessoa p1;
    inicializaPessoa(&p1, "Joao", 25, 1.75);

    assert(p1.nome == "Joao");
    assert(p1.idade == 25);
    assert(abs(p1.altura - 1.75) < 0.0001);  // Comparação de floats

    Pessoa p2;
    inicializaPessoa(&p2, "Maria", 30, 1.65);

    assert(p2.nome == "Maria");
    assert(p2.idade == 30);
    assert(abs(p2.altura - 1.65) < 0.0001);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}