/*

Crie uma função chamada salvarTexto que receba um nome de arquivo (string) e uma mensagem (string). A função deve salvar a mensagem no arquivo especificado e retornar true se a operação for bem-sucedida ou false caso contrário.

*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

bool salvarTexto(string nomearquivo, string mensagem){
    ofstream arquivo;
    arquivo.open(nomearquivo);
    arquivo.is_open();
    if(arquivo << mensagem){
            return true;
        }
        else{
            return false;
        }

}


int main() {
    const string nomeArquivo = "teste.txt";

    // Teste 1: Salvar com sucesso
    bool sucesso = salvarTexto(nomeArquivo, "Ola, mundo!");
    assert(sucesso == true); // Verifica se a operação foi bem-sucedida

    // Verifica o conteúdo do arquivo
    ifstream arquivo(nomeArquivo);
    assert(arquivo.is_open());
    string conteudo;
    getline(arquivo, conteudo);
    assert(conteudo == "Ola, mundo!"); // Verifica o conteúdo do arquivo
    arquivo.close();

    // Teste 2: Simular falha (arquivo em diretório inválido)
    sucesso = salvarTexto("/caminho/invalido/teste.txt", "Teste de falha");
    assert(sucesso == false); // Deve retornar false

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
