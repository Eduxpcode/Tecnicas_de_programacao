/*
Crie uma função chamada mediaGeometrica que receba dois números do tipo float 
como parâmetros e retorne a média geométrica desses números. A fórmula para 
calcular a média geométrica de dois números é multiplicar os dois números e 
depois calcular a raiz quadrada do resultado.

    Nome: Eduardo S. de Araújo - 20241610022
*/

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

float mediaGeometrica(float num1, float num2){
    float resultado = sqrt(num1*num2);
    return resultado;
    
}

int main() {
    // Definir a tolerância para comparações de floats
    const float tolerancia = 0.0001;

    // Testes unitários
    assert(fabs(mediaGeometrica(4.0, 9.0) - 6.0) < tolerancia);
    assert(fabs(mediaGeometrica(1.0, 1.0) - 1.0) < tolerancia);
    assert(fabs(mediaGeometrica(0.25, 0.75) - 0.4330) < tolerancia);
    assert(fabs(mediaGeometrica(2.0, 8.0) - 4.0) < tolerancia);

    cout << "Todos os testes passaram!" << endl;

    return 0;
}