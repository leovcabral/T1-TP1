#include <iostream>
#include <dominios.h>

using namespace std;

void Nota::validar(int nota){
    if (nota > 5 || nota < 0){
        throw invalid_argument("Argumento invalido.");
    }
}

void Nota::setValor(int valor){
    validar(valor);
    this->valor = valor;
}
