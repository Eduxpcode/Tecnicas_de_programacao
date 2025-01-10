/*

Você está desenvolvendo um sistema para gerenciar o estoque de produtos de uma loja.
Cada produto possui os seguintes atributos:
    Código (string)
    Nome (string)
    Quantidade (int)
    Preço (float)
Crie uma struct Produto para representar os produtos.
Implemente a função atualizarEstoque que recebe um ponteiro para um array de structs Produto,
o tamanho do array, o código do produto e a quantidade vendida.

A função deve diminuir a quantidade em estoque e exibir uma mensagem de erro caso o produto não exista
ou a quantidade em estoque seja insuficiente.

Nome: Eduardo Silva de Araújo | Matrícula: 20241610022
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;


struct Produto {
    string codigo;
    string nome;
    int quantidade;
    float preco;
};

void atualizarEstoque(Produto* produtos, int tamanho, string codigo, int quantidadeVendida) {
    for (int i = 0; i < tamanho; ++i) {
        if (produtos[i].codigo == codigo) {
            if (produtos[i].quantidade >= quantidadeVendida) {
                produtos[i].quantidade = produtos[i].quantidade - quantidadeVendida;
                cout << "Estoque atualizado! " << endl;
            } else {
                cout << "Estoque insuficiente para o produto!" << endl;
            }
            return;
        }
    }
    cout << "Produto com este codigo não foi encontrado" << endl;
}

int main() {
    Produto produtos[] = {
        {"P001", "Produto A", 10, 5.0},
        {"P002", "Produto B", 20, 10.0},
        {"P003", "Produto C", 5, 15.0}
    };

    // Teste 1: Produto existente e quantidade suficiente
    atualizarEstoque(produtos, 3, "P001", 5);
    assert(produtos[0].quantidade == 5);

    // Teste 2: Produto inexistente
    atualizarEstoque(produtos, 3, "P004", 5);
    assert(produtos[2].quantidade == 5); // Nenhuma alteração nos outros produtos

    // Teste 3: Estoque insuficiente
    atualizarEstoque(produtos, 3, "P003", 10);
    assert(produtos[2].quantidade == 5); // Estoque permanece o mesmo

    cout << "Todos os testes passaram!\n";
    return 0;
}
