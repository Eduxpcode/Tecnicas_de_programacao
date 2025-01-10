/*

Crie uma função chamada adicionarLinhaCSV que receba um nome de arquivo (string) e um array de strings representando uma linha de dados.
A função deve adicionar a linha ao final de um arquivo .csv existente.

Nome: Eduardo Silva de Araújo | Matrícula: 20241610022
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

void adicionarLinhaCSV(string nomearquivo, string array[], int linha){
    ofstream arquivo(nomearquivo, ios::app); // modo append para editar o arquivo
    if (!arquivo.is_open()){
        cout << "O arquivo não existe ou não pode ser aberto" << endl;
        return; //sai da função
    }
    for(int i = 0; i < linha; i++){
        arquivo << array[i]; //ele vai adicionando todos os elementos da array
        if(i < linha - 1){ // ele adiciona virgula em todos menos o último
            arquivo << ",";
        }
    }
    arquivo << "\n"; // ele quebra a linha após adicionar a linha(com todos os elementos)!
    arquivo.close();
}

int main() {
    const string nomeArquivo = "dados_append.csv";

    // Pré-criar o arquivo com cabeçalhos
    ofstream arquivo(nomeArquivo);
    arquivo << "Nome,Idade,Cidade\n";
    arquivo.close();

    // Adicionar linha ao CSV
    string linha1[3] = {"Ana", "28", "Fortaleza"};
    string linha2[3] = {"Carlos", "35", "Curitiba"};
    adicionarLinhaCSV(nomeArquivo, linha1, 3);
    adicionarLinhaCSV(nomeArquivo, linha2, 3);

    // Verificar o conteúdo do arquivo
    ifstream arquivoVerificacao(nomeArquivo);
    assert(arquivoVerificacao.is_open());

    string linha;

    // Verificar cabeçalhos
    getline(arquivoVerificacao, linha);
    assert(linha == "Nome,Idade,Cidade");
        // Verificar linha adicionada
    getline(arquivoVerificacao, linha);
    assert(linha == "Ana,28,Fortaleza");

    getline(arquivoVerificacao, linha);
    assert(linha == "Carlos,35,Curitiba");

    arquivoVerificacao.close();

    cout << "Teste de adicionar linha ao CSV passou!" << endl;
    return 0;
}

