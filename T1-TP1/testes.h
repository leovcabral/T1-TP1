#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include <iostream>
#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUNota {
private:
    const static int VALOR_VALIDO   = 3;
    const static int VALOR_INVALIDO = 6;
    Nota *nota;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif
