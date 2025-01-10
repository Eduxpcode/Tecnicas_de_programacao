/*

Crie uma função chamada alteraIdade que receba um ponteiro para uma struct Pessoa e uma nova idade. A função deve alterar o campo idade da pessoa.

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

void alteraIdade (Pessoa *pessoa, int novaIdade){
    pessoa->idade = novaIdade; 
}
int main() {
    Pessoa p = {"Joao", 25, 1.75};

    alteraIdade(&p, 30);
    assert(p.idade == 30);

    alteraIdade(&p, 18);
    assert(p.idade == 18);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}