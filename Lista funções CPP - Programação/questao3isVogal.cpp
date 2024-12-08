/*Crie uma função chamada isVogal que receba um caractere do tipo char como parâmetro e retorne true se o caractere for uma vogal (tanto maiúscula quanto minúscula), e false caso contrário.

    Nome : Eduardo Silva de Araújo. Mat:20241610022
*/
#include <iostream>
#include <cassert>

using namespace std;

bool isVogal(char letra){
    if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' ||letra == 'u' || letra == 'U'){
        return true;    
    }
    else{
        return false;
    }
    
}

int main() {
    // Testes unitários
    assert(isVogal('a') == true);
    assert(isVogal('E') == true);
    assert(isVogal('z') == false);
    assert(isVogal('U') == true);
    assert(isVogal('b') == false);

    cout << "Todos os testes passaram!" << endl;

    return 0;
}