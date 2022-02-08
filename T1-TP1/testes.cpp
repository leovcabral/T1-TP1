#include <iostream>
#include <testes.h>

using namespace std;


void TUNota::setUp(){
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown(){
    delete nota;

}

void TUNota::testarCenarioSucesso(){
    try{
        nota -> setValor(VALOR_VALIDO);
        if(nota -> getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch (invalid_argument &exception){
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha(){
    try{
        nota -> setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exception){
        if (nota -> getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNota::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
