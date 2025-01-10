/*

Crie uma função chamada encontraPessoa que receba um vetor de structs Pessoa, seu tamanho, e o nome de uma pessoa. A função deve retornar o índice da pessoa no vetor, ou -1 se a pessoa não for encontrada.

Nome: Eduardo Silva de Araujo | Matrícula: 20241610022
*/

#include <iostream>
#include <cassert>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};
//forma de chamar matriz de struct em função chama o Struct*tipo de variável), nesse caso Pessoa e dps um nome pra acessar a matriz que no caso é pessoas.
int encontraPessoa(Pessoa pessoas[], int tamanho,string nome){
    // tem que passa por todos
    for(int i = 0; i < tamanho; i++){
        //tem que verificar se a string bate com o nome de alguma struct da matriz;
        if(nome == pessoas[i].nome){
            //se o nome bater ele retorna o valor do indice onde bateu;
            return i;
        }
    }
        //se passar por todos e não "bater" retorna o -1.
        return -1;
}

int main() {
    Pessoa pessoas[] = {
        {"Joao", 25, 1.75},
        {"Maria", 30, 1.65},
        {"Pedro", 22, 1.80}
    };

    assert(encontraPessoa(pessoas, 3, "Maria") == 1);
    assert(encontraPessoa(pessoas, 3, "Pedro") == 2);
    assert(encontraPessoa(pessoas, 3, "Ana") == -1);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}