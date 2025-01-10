/*

Você está criando um sistema para gerenciar uma biblioteca virtual. Cada livro possui:

    Título (string)
    Autor (string)
    Ano de Publicação (int)

    Crie uma struct Livro para representar os livros.
    
    Implemente a função salvarBiblioteca que recebe um ponteiro para um array de structs Livro, 
    o tamanho do array e o nome de um arquivo.
    
    A função deve salvar todos os livros no formato .csv. 
    
    A primeira linha do arquivo deve conter o cabeçalho "Titulo,Autor,Ano".

    Nome: Eduardo Silva de Araújo | Matrícula: 20241610022
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

// Definição da struct Livro
struct Livro {
    string titulo;
    string autor;
    int ano;
};


void salvarBiblioteca(Livro* livros, int tamanho, string nomeArquivo) {
    ofstream arquivo(nomeArquivo);

    if (!arquivo.is_open()) {
        cerr << "Arquivo não pode ser aberto!" << endl;
        return;
    }
    arquivo << "Titulo,Autor,Ano\n";
    for (int i = 0; i < tamanho; ++i) {
        arquivo << livros[i].titulo << "," << livros[i].autor << "," << livros[i].ano << endl;
    }
    arquivo.close();
    cout << "Biblioteca foi salva em " << nomeArquivo << endl;
}

int main() {
    const string nomeArquivo = "biblioteca.csv";

    Livro livros[] = {
        {"Livro A", "Autor A", 2001},
        {"Livro B", "Autor B", 2005},
        {"Livro C", "Autor C", 2010}
    };

    salvarBiblioteca(livros, 3, nomeArquivo);

    // Verificar o conteúdo do arquivo
    ifstream arquivo(nomeArquivo);
    assert(arquivo.is_open());

    string linha;

    // Verificar cabeçalho
    getline(arquivo, linha);
    assert(linha == "Titulo,Autor,Ano");

    // Verificar primeira linha de dados
    getline(arquivo, linha);
    assert(linha == "Livro A,Autor A,2001");

    // Verificar segunda linha de dados
    getline(arquivo, linha);
    assert(linha == "Livro B,Autor B,2005");

    arquivo.close();

    cout << "Todos os testes passaram!\n";
    return 0;
}
