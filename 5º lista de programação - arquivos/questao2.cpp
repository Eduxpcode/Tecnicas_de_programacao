/*

Crie uma função chamada salvarCSV que receba um nome de arquivo (string), um array de strings representando os cabeçalhos e um array bidimensional de strings representando os dados. A função deve salvar os dados no formato .csv, onde os valores são separados por vírgulas.

Nome: Eduardo Silva de Araújo | Matrícula: 20241610022
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

const int TAM = 3;

void salvarCSV (string nomearquivo, string arraycabecalhos[], int numerocabecalhos, string dados[][TAM], int linhas){
    ofstream arquivo(nomearquivo); // usado pra abrir arquivo
    if(arquivo.is_open()){
        for (int i = 0; i < numerocabecalhos; i++){ // para percorrer cada cabecalho
            arquivo << arraycabecalhos[i]; //recebendo cada informação do array de cabecalho
            if(i < numerocabecalhos - 1){ // numerocabecalhos - 1 pq o ultimo elemento não pode ter virgula.
                arquivo << ","; //metendo a virgula em cada elemento do cabecalho menos o ultimo
            }
        }
    arquivo << "\n"; // para quebrar a linha após inserir os dados
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < TAM; j++){
            arquivo << dados [i][j]; // passando por todas as colunas em cada linha
                if(j < (TAM - 1)){ // TAM - 1, pq o útlimo não pode ter vírgula
                    arquivo << ","; // metendo a virgula após cada coluna!
                }
            }
            arquivo << "\n"; //dentro do for de passar por linhas para justamente quebrar linha após cada linha percorrida!
        }
    }
    else{
        cout << "arquivo não pode ser aberto!" << endl; // em caso de o arquivo CSV não ser aberto!
        return; //saindo da função após a mensagem!
    }
    arquivo.close(); // fechando o arquivo
}

int main() {
    const string nomeArquivo = "dados.csv";

    string cabecalhos[3] = {"Nome", "Idade", "Cidade"};
    string dados[3][3] = {
        {"Joao", "25", "Sao Paulo"},
        {"Maria", "30", "Rio de Janeiro"},
        {"Pedro", "22", "Belo Horizonte"}
    };

    salvarCSV(nomeArquivo, cabecalhos, 3, dados, 3);

    ifstream arquivo(nomeArquivo);
    assert(arquivo.is_open());

    string linha;

    // Verificar cabeçalhos
    getline(arquivo, linha);
    assert(linha == "Nome,Idade,Cidade");

    // Verificar primeira linha de dados
    getline(arquivo, linha);
    assert(linha == "Joao,25,Sao Paulo");

    arquivo.close();

    cout << "Teste do arquivo CSV passou!" << endl;
    return 0;
}
