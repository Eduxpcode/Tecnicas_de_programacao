/*

Crie uma função chamada calculaRaizQuadrada que receba um número do tipo double 
e um ponteiro para double que irá armazenar o resultado da raiz quadrada. 
A função deve calcular a raiz quadrada do número fornecido e armazenar 
o resultado no endereço apontado pelo ponteiro. 

Se o número fornecido for negativo, a função deve armazenar o valor -1 no 
resultado para indicar que não é possível calcular a raiz quadrada de um número negativo.

Nome: Eduardo Silva de Araújo | Matrícula: 20241610022
*/

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

double calculaRaizQuadrada(double numero, double* raizquadrada){
    if (numero < 0){
        *raizquadrada = -1;
        return *raizquadrada;
    }
    else{
        *raizquadrada = sqrt(numero);
        return *raizquadrada;
    }
}

int main() {
    double res;

    calculaRaizQuadrada(9.0, &res);
    assert(fabs(res - 3.0) < 0.0001);

    calculaRaizQuadrada(16.0, &res);
    assert(fabs(res - 4.0) < 0.0001);

    calculaRaizQuadrada(0.0, &res);
    assert(fabs(res - 0.0) < 0.0001);

    calculaRaizQuadrada(-4.0, &res);
    assert(res == -1);

    calculaRaizQuadrada(2.25, &res);
    assert(fabs(res - 1.5) < 0.0001);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}