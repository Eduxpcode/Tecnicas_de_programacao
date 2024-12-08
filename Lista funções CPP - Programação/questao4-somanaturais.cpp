/*

Crie uma função chamada somaNaturais que receba um número inteiro positivo n como parâmetro
 e retorne a soma de todos os números naturais de 1 até n. 
 A função deve utilizar a estrutura de repetição for para calcular a soma.
 
 Nome: Eduardo S. de Araújo - 20241610022

*/

//primero se tem o limite que é o numero de termos
//depois se tem o método de soma que vai ser o que vier mais um

#include <iostream>
#include <cassert>

using namespace std;

int somaNaturais(int numero){
    int soma = 0;
    for (int elemento = 0; elemento <= numero ;elemento++){
        soma = soma + elemento;
        
    }
    return soma;
}

int main() {
    // Testes unitários
    assert(somaNaturais(5) == 15);  // 1 + 2 + 3 + 4 + 5 = 15
    assert(somaNaturais(1) == 1);   // 1 = 1
    assert(somaNaturais(10) == 55); // 1 + 2 + ... + 10 = 55
    assert(somaNaturais(0) == 0);   // Caso com n = 0
    assert(somaNaturais(3) == 6);   // 1 + 2 + 3 = 6

    cout << "Todos os testes passaram!" << endl;

    return 0;
}