/*

Crie uma função chamada carregarTexto que receba um nome de arquivo (string) e retorne o conteúdo do arquivo como uma única string. Caso o arquivo não possa ser aberto, a função deve retornar uma string vazia.

Nome: Eduardo Silva de Araújo | Matrícula: 20241610022
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

string carregarTexto(string nomearquivo){
    string vazia = "";
    ifstream arquivo(nomearquivo);
    if(arquivo.is_open()){
        string conteudo,linha; // craição de strings que recebem o conteúdo por linha
        while(getline(arquivo,linha)){
            conteudo += linha + "\n";
        }
        arquivo.close();
        return conteudo;
    }
    else{
        return vazia;
    }

}
int main() {
    const string nomeArquivo = "teste_carregar.txt";

    // Pré-criar o arquivo
    ofstream arquivo(nomeArquivo);
    arquivo << "Primeira linha\nSegunda linha\n";
    arquivo.close();

    // Teste de carregamento
    string conteudo = carregarTexto(nomeArquivo);
    assert(conteudo == "Primeira linha\nSegunda linha\n"); // Verifica o conteúdo

    // Teste de falha
    conteudo = carregarTexto("/caminho/invalido/teste.txt");
    assert(conteudo == ""); // Verifica se retorna vazio em caso de falha

    cout << "Teste de carregar texto passou!" << endl;
    return 0;
}
